
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int nq ;
typedef int limb ;
typedef int const* felem_bytearray ;
typedef int felem ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const* const,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int const,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int,int,int const**,int *) ;

__attribute__((used)) static void FUNC_10(felem VAR_0, felem VAR_1, felem VAR_2,
                      const felem_bytearray VAR_3[],
                      const unsigned VAR_4, const u8 *VAR_5,
                      const int VAR_6, const felem VAR_7[][17][3],
                      const felem VAR_8[16][3])
{
    int VAR_9, VAR_10;
    unsigned VAR_11, VAR_12 = (VAR_5 != ((void*)0));
    felem VAR_13[3], VAR_14[4];
    limb VAR_15;
    u8 VAR_16, VAR_17;


    FUNC_6(VAR_13, 0, sizeof(VAR_13));






    VAR_10 = 1;

    for (VAR_9 = (VAR_4 ? 520 : 130); VAR_9 >= 0; --VAR_9) {

        if (!VAR_10)
            FUNC_8(VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[0], VAR_13[1], VAR_13[2]);


        if (VAR_12 && (VAR_9 <= 130)) {
            VAR_15 = FUNC_4(VAR_5, VAR_9 + 390) << 3;
            if (VAR_9 < 130) {
                VAR_15 |= FUNC_4(VAR_5, VAR_9 + 260) << 2;
                VAR_15 |= FUNC_4(VAR_5, VAR_9 + 130) << 1;
                VAR_15 |= FUNC_4(VAR_5, VAR_9);
            }

            FUNC_9(VAR_15, 16, VAR_8, VAR_14);
            if (!VAR_10) {

                FUNC_7(VAR_13[0], VAR_13[1], VAR_13[2],
                          VAR_13[0], VAR_13[1], VAR_13[2], 1, VAR_14[0], VAR_14[1], VAR_14[2]);
            } else {
                FUNC_5(VAR_13, VAR_14, 3 * sizeof(felem));
                VAR_10 = 0;
            }
        }


        if (VAR_4 && (VAR_9 % 5 == 0)) {

            for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
                VAR_15 = FUNC_4(VAR_3[VAR_11], VAR_9 + 4) << 5;
                VAR_15 |= FUNC_4(VAR_3[VAR_11], VAR_9 + 3) << 4;
                VAR_15 |= FUNC_4(VAR_3[VAR_11], VAR_9 + 2) << 3;
                VAR_15 |= FUNC_4(VAR_3[VAR_11], VAR_9 + 1) << 2;
                VAR_15 |= FUNC_4(VAR_3[VAR_11], VAR_9) << 1;
                VAR_15 |= FUNC_4(VAR_3[VAR_11], VAR_9 - 1);
                FUNC_1(&VAR_16, &VAR_17, VAR_15);




                FUNC_9(VAR_17, 17, VAR_7[VAR_11], VAR_14);
                FUNC_3(VAR_14[3], VAR_14[1]);

                FUNC_0(VAR_14[1], VAR_14[3], (-(limb) VAR_16));

                if (!VAR_10) {
                    FUNC_7(VAR_13[0], VAR_13[1], VAR_13[2],
                              VAR_13[0], VAR_13[1], VAR_13[2],
                              VAR_6, VAR_14[0], VAR_14[1], VAR_14[2]);
                } else {
                    FUNC_5(VAR_13, VAR_14, 3 * sizeof(felem));
                    VAR_10 = 0;
                }
            }
        }
    }
    FUNC_2(VAR_0, VAR_13[0]);
    FUNC_2(VAR_1, VAR_13[1]);
    FUNC_2(VAR_2, VAR_13[2]);
}
