
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_9300 {scalar_t__ clk_25mhz; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ath_hal*,int) ;
 int FUNC_7 (struct ath_hal*,int,int ) ;
 int FUNC_8 (struct ath_hal*,int,int ,int) ;
 int FUNC_9 (struct ath_hal*,int,int) ;
 int FUNC_10 (struct ath_hal_9300*,int ) ;
 int FUNC_11 (struct ath_hal*,unsigned long,int*,int) ;

HAL_BOOL FUNC_12(struct ath_hal *VAR_17)
{
    struct ath_hal_9300 *VAR_18 = FUNC_0(VAR_17);
    int VAR_19 = FUNC_10(VAR_18, VAR_15);
    int VAR_20, VAR_21, VAR_22, VAR_23;
    u_int32_t VAR_24, VAR_25;
    unsigned long VAR_26;
    u_int32_t VAR_27, VAR_28 = 0, VAR_29 = 0;
    int VAR_30 = 0, VAR_31 = 0;
    unsigned char VAR_32;

    if (FUNC_3(VAR_17) || FUNC_1(VAR_17)) {
        VAR_24 = VAR_4;
        VAR_25 = VAR_7;
    }
    else {
        VAR_24 = VAR_3;
        VAR_25 = VAR_6;
    }

    if (VAR_19) {
        if (FUNC_2(VAR_17) || FUNC_4(VAR_17)) {
            if (FUNC_2(VAR_17)) {

                for (VAR_26 = 0x14; ; VAR_26 -= 0x10) {

                    FUNC_11(VAR_17, VAR_26 / 4, &VAR_27, 1);

                    if ((VAR_27 & 0x80) == 0x80){
                        VAR_30 = 1;
                        VAR_28 = VAR_27 & 0x000000ff;
                    }

                    if ((VAR_27 & 0x80000000) == 0x80000000){
                        VAR_31 = 1;
                        VAR_29 = (VAR_27 & 0xff000000) >> 24;
                    }

                    if (VAR_26 == 0x4) {
                        break;
                    }
                }

                if (VAR_31) {
                    VAR_32 = VAR_29 & 0xf;
                } else {
                    VAR_32 = 0x8;
                }
                if (VAR_30) {
                    FUNC_8(VAR_17, 0x16c88, VAR_0, 0x0);
                    FUNC_8(VAR_17, 0x16c88, VAR_1, 0x0);
                    FUNC_8(VAR_17, 0x16c88,
                        VAR_2, (VAR_28 & 0xf));
                }

            } else {
                VAR_32 = 0x8;
            }
            if (VAR_18->clk_25mhz) {
                VAR_22 = 0 |
                    (3 << 1) | (VAR_32 << 4) | (3 << 8) | (0 << 11) |
                    (1 << 14) | (6 << 17) | (1 << 20) | (3 << 24) |
                    (0 << 26) | (0 << 27) | (0 << 28) | (0 << 29);
            } else {
                if (FUNC_4(VAR_17)) {
                    VAR_22 = 0 |
                        (5 << 1) | (7 << 4) | (2 << 8) | (0 << 11) |
                        (2 << 14) | (6 << 17) | (1 << 20) | (3 << 24) |
                        (0 << 26) | (0 << 27) | (1 << 28) | (0 << 29) ;
                } else {
                    VAR_22 = 0 |
                        (4 << 1) | (7 << 4) | (3 << 8) | (0 << 11) |
                        (1 << 14) | (6 << 17) | (1 << 20) | (3 << 24) |
                        (0 << 26) | (0 << 27) | (0 << 28) | (0 << 29) ;
                }
            }
            FUNC_8(VAR_17, VAR_25, VAR_8, 0x0);

            FUNC_9(VAR_17, VAR_24, VAR_22);
            VAR_20 = FUNC_6(VAR_17, VAR_24);
            while (VAR_20 != VAR_22) {
                FUNC_9(VAR_17, VAR_24, VAR_22);
                FUNC_5(10);
                VAR_20 = FUNC_6(VAR_17, VAR_24);
            }

            VAR_23 =
                 (FUNC_6(VAR_17, VAR_25) & (~0xFFC00000)) | (4 << 26);
            FUNC_9(VAR_17, VAR_25, VAR_23);
            VAR_21 = FUNC_6(VAR_17, VAR_25);
            while (VAR_21 != VAR_23) {
                FUNC_9(VAR_17, VAR_25, VAR_23);
                FUNC_5(10);
                VAR_21 = FUNC_6(VAR_17, VAR_25);
            }
            VAR_23 =
                 (FUNC_6(VAR_17, VAR_25) & (~0x00200000)) | (1 << 21);
            FUNC_9(VAR_17, VAR_25, VAR_23);
            VAR_21 = FUNC_6(VAR_17, VAR_25);
            while (VAR_21 != VAR_23) {
                FUNC_9(VAR_17, VAR_25, VAR_23);
                FUNC_5(10);
                VAR_21 = FUNC_6(VAR_17, VAR_25);
            }

        } else if (FUNC_3(VAR_17) || FUNC_1(VAR_17)) {

            int VAR_33 = FUNC_10(VAR_18, VAR_16);
            FUNC_9(VAR_17, VAR_24, VAR_33);
        } else {

            int VAR_34 = FUNC_10(VAR_18, VAR_16);
            FUNC_9(VAR_17, VAR_12,
                         FUNC_6(VAR_17, VAR_12) &
                         (~VAR_13));
            FUNC_9(VAR_17, VAR_11, VAR_34);

            FUNC_9(VAR_17, VAR_12,
                FUNC_6(VAR_17, VAR_12) |
                VAR_13);
        }
    } else {
        if (FUNC_2(VAR_17) || FUNC_4(VAR_17)) {
            FUNC_8(VAR_17, VAR_25, VAR_8, 0x0);
            VAR_21 = FUNC_7(VAR_17, VAR_25, VAR_8);
            while (VAR_21) {
                FUNC_5(10);
                VAR_21 = FUNC_7(VAR_17, VAR_25, VAR_8);
            }
            FUNC_8(VAR_17, VAR_24, VAR_5, 0x1);
            VAR_20 = FUNC_7(VAR_17, VAR_24, VAR_5);
            while (!VAR_20) {
                FUNC_5(10);
                VAR_20 = FUNC_7(VAR_17, VAR_24, VAR_5);
            }
            FUNC_8(VAR_17, VAR_25, VAR_8, 0x1);
            VAR_21 = FUNC_7(VAR_17, VAR_25, VAR_8);
            while (!VAR_21) {
                FUNC_5(10);
                VAR_21 = FUNC_7(VAR_17, VAR_25, VAR_8);
            }
        } else if (FUNC_3(VAR_17) || FUNC_1(VAR_17)) {
            FUNC_8(VAR_17, VAR_24, VAR_5, 0x1);
        } else {
            FUNC_9(VAR_17, VAR_14,
                (FUNC_6(VAR_17, VAR_14) |
                VAR_9 | VAR_10));
        }
    }

    return 0;
}
