
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int VAR_7 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ,int ,int) ;

__attribute__((used)) static HAL_BOOL FUNC_6(struct ath_hal * VAR_8, int * VAR_9)
{
    int VAR_10 = 0, VAR_11;
    int VAR_12 = 0, VAR_13;
    int VAR_14, VAR_15;

    VAR_14 = (FUNC_2(VAR_8, VAR_2) >> 1) & 0xF;
    if (!FUNC_1(VAR_8)) {
        VAR_15 =
            FUNC_3(VAR_8, VAR_4,
                VAR_5);
    } else {
        VAR_15 =
            FUNC_3(VAR_8, VAR_6,
                VAR_5);
    }

    if ( VAR_15 != 0 ) {
        VAR_15 -= 0x40;
    }
    for (VAR_11 = 0; VAR_11 < (VAR_7 + 1); VAR_11++) {
        if (VAR_9[VAR_11] == 1400) {
            VAR_10++;
        }
    }

    if (FUNC_1(VAR_8)) {
        if ((VAR_9[23] < 800) || (VAR_9[23] == 1400)) {
            if (VAR_9[23] < 800) {
                VAR_12 = (int)((1000 - VAR_9[23] + 75) / 150);
                VAR_14 = VAR_14 + VAR_12;
                if (VAR_14 > 7) {
                    VAR_14 = 7;
                    if (VAR_9[23] < 600) {
                        VAR_15 = VAR_15 + 1;
                        if (VAR_15 > 0) {
                            VAR_15 = 0;
                        }
                    }
                }

                FUNC_4(VAR_8,
                    VAR_2,
           VAR_3,
           VAR_14);

                FUNC_5(VAR_8,
                    VAR_6,
                    VAR_5,
                    VAR_15);

                return VAR_1;
            }
            else if (VAR_9[23] == 1400) {
                VAR_13 = (int)(VAR_10 / 3);
                if (VAR_13 > 2) {
                    VAR_13 = 2;
                }
                VAR_15 = VAR_15 + VAR_13;
                VAR_14 = VAR_14 + (int)(VAR_13 / 2);
                if (VAR_14 > 7) {
                    VAR_14 = 7;
                }
                if (VAR_15 > 0) {
                    VAR_15 = 0;
                    VAR_14 = VAR_14 - (int)(VAR_13 / 1);
        if (VAR_14 < 0) {
                        VAR_14 = 0;
        }
                }
                FUNC_4(VAR_8,
                        VAR_2,
               VAR_3,
               VAR_14);

                FUNC_5(VAR_8,
                        VAR_6,
               VAR_5,
                        VAR_15);

                return VAR_1;

            }
        }
    }else if (FUNC_0(VAR_8)) {
        if ((VAR_9[23] < 1000) || (VAR_9[23] == 1400)) {
            if (VAR_9[23] < 1000) {
                VAR_12 = ((1000 - VAR_9[23]) / 100);
                VAR_14 = VAR_14 + VAR_12;
                if (VAR_12 > 3) {
                    VAR_13 = 1;
                    VAR_15 = VAR_15 - VAR_13;
                    VAR_14 = VAR_14 + 1;
                    if (VAR_14 > 6) {
                        VAR_14 = 6;
                    }
                    if (VAR_15 < -4) {
                        VAR_15 = -4;
                    }
                    FUNC_4(VAR_8,
                        VAR_2,
                        VAR_3,
                        VAR_14);
                    FUNC_5(VAR_8,
                        VAR_4,
                        VAR_5,
                        VAR_15);
                    return VAR_1;
                } else {
                    VAR_14 = VAR_14 + VAR_12;
                    if (VAR_14 > 6) {
                        VAR_14 = 6;
                    }
                    if (VAR_15 < -4) {
                        VAR_15 = -4;
                    }
                    FUNC_4(VAR_8,
                        VAR_2,
                        VAR_3,
                        VAR_14);
                    FUNC_5(VAR_8,
                        VAR_4,
                        VAR_5,
                        VAR_15);
                    return VAR_1;
                }
            }
            else if (VAR_9[23] == 1400) {
                if (VAR_10 > 3) {
                    VAR_13 = 1;
                    VAR_15 = VAR_15 + VAR_13;
                    VAR_14 = VAR_14 - (VAR_10 / 4);
                    if (VAR_14 < 0) {
                        VAR_14 = 0;
                    }
                    if (VAR_15 > -2) {
                        VAR_15 = -2;
                    }
                    FUNC_4(VAR_8, VAR_2,
                        VAR_3,
                        VAR_14);
                    FUNC_5(VAR_8, VAR_4,
                        VAR_5,
                        VAR_15);
                    return VAR_1;
                } else {
                    VAR_14 = VAR_14 - 1;
                    if (VAR_14 < 0) {
                        VAR_14 = 0;
                    }
                    FUNC_4(VAR_8, VAR_2,
                        VAR_3,
                        VAR_14);
                    FUNC_5(VAR_8, VAR_4,
                        VAR_5,
                        VAR_15);
                    return VAR_1;
                }
            }
        }
    }

    return VAR_0;
}
