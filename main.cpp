#include <iostream>
using namespace std;

class Mahasiswa {
    public :
        int nim;
        string nama;
        float nilai;

        void printData() {
            cout << "===========================" << endl;
            cout << "Data Mahasiswa" << endl;
            cout << "---------------------------" << endl;
            cout << "NIM    \t= " << nim << endl;
            cout << "Nama   \t= " << nama << endl;
            cout << "Nilai  \t= " << nilai << endl;
            cout << "===========================" << endl;
        }
};

int main() {
    
    return 0;
}