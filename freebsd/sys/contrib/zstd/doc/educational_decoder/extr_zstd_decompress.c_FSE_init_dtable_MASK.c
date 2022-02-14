
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
typedef int i16 ;
struct TYPE_3__ {int accuracy_log; int* symbols; size_t* num_bits; size_t* new_state_base; } ;
typedef TYPE_1__ FSE_dtable ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const FUNC_3 (size_t) ;
 void* FUNC_4 (size_t const) ;

__attribute__((used)) static void FUNC_5(FSE_dtable *const VAR_2,
                            const i16 *const VAR_3, const int VAR_4,
                            const int VAR_5) {
    if (VAR_5 > VAR_0) {
        FUNC_2("FSE accuracy too large");
    }
    if (VAR_4 > VAR_1) {
        FUNC_2("Too many symbols for FSE");
    }

    VAR_2->accuracy_log = VAR_5;

    const size_t VAR_6 = (size_t)1 << VAR_5;
    VAR_2->symbols = FUNC_4(VAR_6 * sizeof(u8));
    VAR_2->num_bits = FUNC_4(VAR_6 * sizeof(u8));
    VAR_2->new_state_base = FUNC_4(VAR_6 * sizeof(u16));

    if (!VAR_2->symbols || !VAR_2->num_bits || !VAR_2->new_state_base) {
        FUNC_0();
    }





    u16 VAR_7[VAR_1];





    int VAR_8 = VAR_6;
    for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {

        if (VAR_3[VAR_9] == -1) {
            VAR_2->symbols[--VAR_8] = VAR_9;
            VAR_7[VAR_9] = 1;
        }
    }





    const u16 VAR_10 = (VAR_6 >> 1) + (VAR_6 >> 3) + 3;
    const u16 VAR_11 = VAR_6 - 1;
    u16 VAR_12 = 0;
    for (int VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
        if (VAR_3[VAR_13] <= 0) {
            continue;
        }

        VAR_7[VAR_13] = VAR_3[VAR_13];

        for (int VAR_14 = 0; VAR_14 < VAR_3[VAR_13]; VAR_14++) {

            VAR_2->symbols[VAR_12] = VAR_13;


            do {
                VAR_12 = (VAR_12 + VAR_10) & VAR_11;
            } while (VAR_12 >=
                     VAR_8);



        }
    }
    if (VAR_12 != 0) {
        FUNC_1();
    }


    for (size_t VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
        u8 VAR_16 = VAR_2->symbols[VAR_15];
        u16 VAR_17 = VAR_7[VAR_16]++;


        VAR_2->num_bits[VAR_15] = (u8)(VAR_5 - FUNC_3(VAR_17));


        VAR_2->new_state_base[VAR_15] =
            ((u16)VAR_17 << VAR_2->num_bits[VAR_15]) - VAR_6;
    }
}
