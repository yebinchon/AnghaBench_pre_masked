
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int istream_t ;
typedef scalar_t__ i32 ;
typedef scalar_t__ i16 ;
typedef int FSE_dtable ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int * const,scalar_t__*,int,int const) ;
 int FUNC_3 (int * const) ;
 int FUNC_4 (int * const,int) ;
 int FUNC_5 (int * const,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(FSE_dtable *const VAR_2, istream_t *const VAR_3,
                                const int VAR_4) {







    if (VAR_4 > VAR_0) {
        FUNC_1("FSE accuracy too large");
    }





    const int VAR_5 = 5 + FUNC_4(VAR_3, 4);
    if (VAR_5 > VAR_4) {
        FUNC_1("FSE accuracy too large");
    }
    i32 VAR_6 = 1 << VAR_5;
    i16 VAR_7[VAR_1];

    int VAR_8 = 0;
    while (VAR_6 > 0 && VAR_8 < VAR_1) {

        int VAR_9 = FUNC_6(VAR_6 + 1) + 1;

        u16 VAR_10 = FUNC_4(VAR_3, VAR_9);



        const u16 VAR_11 = ((u16)1 << (VAR_9 - 1)) - 1;
        const u16 VAR_12 = ((u16)1 << VAR_9) - 1 - (VAR_6 + 1);

        if ((VAR_10 & VAR_11) < VAR_12) {
            FUNC_5(VAR_3, 1);
            VAR_10 = VAR_10 & VAR_11;
        } else if (VAR_10 > VAR_11) {
            VAR_10 = VAR_10 - VAR_12;
        }



        const i16 VAR_13 = (i16)VAR_10 - 1;





        VAR_6 -= VAR_13 < 0 ? -VAR_13 : VAR_13;

        VAR_7[VAR_8] = VAR_13;
        VAR_8++;





        if (VAR_13 == 0) {

            int VAR_14 = FUNC_4(VAR_3, 2);

            while (1) {
                for (int VAR_15 = 0; VAR_15 < VAR_14 && VAR_8 < VAR_1; VAR_15++) {
                    VAR_7[VAR_8++] = 0;
                }
                if (VAR_14 == 3) {
                    VAR_14 = FUNC_4(VAR_3, 2);
                } else {
                    break;
                }
            }
        }
    }
    FUNC_3(VAR_3);




    if (VAR_6 != 0 || VAR_8 >= VAR_1) {
        FUNC_0();
    }


    FUNC_2(VAR_2, VAR_7, VAR_8, VAR_5);
}
