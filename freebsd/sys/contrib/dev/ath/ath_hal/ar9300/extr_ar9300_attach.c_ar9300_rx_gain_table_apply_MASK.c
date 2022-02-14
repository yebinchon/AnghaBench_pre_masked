
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ath_hal_9300 {int ah_ini_modes_rxgain; int ah_ini_modes_rxgain_bounds; int ah_ini_modes_rxgain_xlna; int ah_ini_modes_rxgain_bb_postamble; int ah_ini_modes_rxgain_bb_core; } ;
struct TYPE_2__ {int ath_hal_ext_lna_ctl_gpio; } ;
struct ath_hal {TYPE_1__ ah_config; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_hal*) ;
 int FUNC_7 (struct ath_hal*) ;
 int FUNC_8 (struct ath_hal*) ;
 int FUNC_9 (struct ath_hal*) ;
 scalar_t__ FUNC_10 (struct ath_hal*) ;
 int FUNC_11 (struct ath_hal*) ;
 int FUNC_12 (struct ath_hal*) ;
 int FUNC_13 (struct ath_hal*) ;
 int FUNC_14 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_15 (int *,int ,int ,int) ;
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
 scalar_t__ FUNC_16 (struct ath_hal*,int) ;
 int FUNC_17 (struct ath_hal*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_18 (struct ath_hal*,int,int ) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;

void FUNC_19(struct ath_hal *VAR_39)
{
    struct ath_hal_9300 *VAR_40 = FUNC_0(VAR_39);

    u_int32_t VAR_41;
    u_int8_t VAR_42;

    if (FUNC_10(VAR_39) || FUNC_3(VAR_39))
    {

        if (FUNC_16(VAR_39, 1))
            return;
 }

    switch (FUNC_17(VAR_39))
    {
    case 2:
        if (FUNC_7(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_5,
                FUNC_1(VAR_5), 2);
            break;
        }
        else if (FUNC_8(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_1,
                FUNC_1(VAR_1), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bb_core,
                VAR_17,
                FUNC_1(VAR_17), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bb_postamble,
                VAR_19,
                FUNC_1(VAR_19), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_xlna,
                VAR_18,
                FUNC_1(VAR_18), 2);
            break;
        }
        else if (FUNC_9(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_25,
                FUNC_1(VAR_25), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bb_core,
                VAR_21,
                FUNC_1(VAR_21), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bb_postamble,
                VAR_23,
                FUNC_1(VAR_23), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_xlna,
                VAR_22,
                FUNC_1(VAR_22), 2);

            break;
        }
    case 3:
        if (FUNC_9(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_24,
                FUNC_1(VAR_24), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_xlna,
                VAR_22,
                FUNC_1(VAR_22), 2);
        } else if (FUNC_8(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_20,
                FUNC_1(VAR_20), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_xlna,
                VAR_18,
                FUNC_1(VAR_18), 2);
        }
        break;
    case 0:
    default:
        if (FUNC_6(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_12,
                FUNC_1(VAR_12), 2);
        } else if (FUNC_5(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_11,
                FUNC_1(VAR_11), 2);
        } else if (FUNC_12(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_29,
                FUNC_1(VAR_29), 2);

            VAR_41 = VAR_39->ah_config.ath_hal_ext_lna_ctl_gpio;
            if (VAR_41) {
                for (VAR_42 = 0; VAR_42 < 32; VAR_42++) {
                    if (VAR_41 & (1 << VAR_42)) {






                        FUNC_18(VAR_39, VAR_42,
                            VAR_0);
                    }
                }
            }

        } else if (FUNC_11(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_28,
                FUNC_1(VAR_28), 2);
        } else if (FUNC_7(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_7,
                FUNC_1(VAR_7), 2);
        } else if (FUNC_8(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_2,
                FUNC_1(VAR_2), 2);
        } else if (FUNC_9(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_26,
                FUNC_1(VAR_26), 2);
        } else if (FUNC_3(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_6,
                FUNC_1(VAR_6), 2);
        } else if (FUNC_14(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_15,
                FUNC_1(VAR_15), 2);
        } else if (FUNC_13(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_31,
                FUNC_1(VAR_31), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bounds,
                VAR_30,
                FUNC_1(VAR_30), 5);
        } else if (FUNC_4(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_36,
                FUNC_1(VAR_36), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bounds,
                VAR_35,
                FUNC_1(VAR_35), 5);
        } else {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_8,
                FUNC_1(VAR_8), 2);
        }
        break;
    case 1:
        if (FUNC_6(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_14,
                FUNC_1(VAR_14), 2);
        } else if (FUNC_5(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_13,
                FUNC_1(VAR_13), 2);
        } else if (FUNC_12(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_29,
                FUNC_1(VAR_29), 2);
        } else if (FUNC_11(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_28,
                FUNC_1(VAR_28), 2);
        } else if (FUNC_7(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_10,
                FUNC_1(VAR_10),
                2);
        } else if (FUNC_8(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_3,
                FUNC_1(VAR_3),
                2);
        } else if (FUNC_9(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_27,
                FUNC_1(VAR_27),
                2);
        } else if (FUNC_2(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_34,
                FUNC_1(VAR_34),
                2);
        } else if (FUNC_3(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_9,
                FUNC_1(VAR_9), 2);
        } else if (FUNC_14(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_16,
                FUNC_1(VAR_16), 2);
        } else if (FUNC_13(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_33,
                FUNC_1(VAR_33), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bounds,
                VAR_32,
                FUNC_1(VAR_32), 5);
        } else if (FUNC_4(VAR_39)) {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_38,
                FUNC_1(VAR_38), 2);
            FUNC_15(&VAR_40->ah_ini_modes_rxgain_bounds,
                VAR_37,
                FUNC_1(VAR_37), 5);
        } else {
            FUNC_15(&VAR_40->ah_ini_modes_rxgain,
                VAR_4,
                FUNC_1(VAR_4), 2);
        }
        break;
    }
}
