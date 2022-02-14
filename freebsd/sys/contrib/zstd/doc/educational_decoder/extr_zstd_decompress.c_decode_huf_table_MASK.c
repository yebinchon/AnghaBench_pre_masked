
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int weights ;
typedef int u8 ;
typedef int ostream_t ;
typedef int istream_t ;
typedef int HUF_dtable ;


 int VAR_0 ;
 int FUNC_0 (int * const,int*,int) ;
 int* FUNC_1 (int * const,size_t const) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int * const,int const) ;
 int FUNC_4 (int * const,int) ;
 int FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static void FUNC_7(HUF_dtable *const VAR_1, istream_t *const VAR_2) {




    const u8 VAR_3 = FUNC_4(VAR_2, 8);

    u8 VAR_4[VAR_0];
    FUNC_6(VAR_4, 0, sizeof(VAR_4));

    int VAR_5;

    if (VAR_3 >= 128) {





        VAR_5 = VAR_3 - 127;
        const size_t VAR_6 = (VAR_5 + 1) / 2;

        const u8 *const VAR_7 = FUNC_1(VAR_2, VAR_6);

        for (int VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {





            if (VAR_8 % 2 == 0) {
                VAR_4[VAR_8] = VAR_7[VAR_8 / 2] >> 4;
            } else {
                VAR_4[VAR_8] = VAR_7[VAR_8 / 2] & 0xf;
            }
        }
    } else {


        istream_t VAR_9 = FUNC_3(VAR_2, VAR_3);
        ostream_t VAR_10 = FUNC_2(VAR_4, VAR_0);
        FUNC_5(&VAR_10, &VAR_9, &VAR_5);
    }


    FUNC_0(VAR_1, VAR_4, VAR_5);
}
