
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int target_power_val_t ;
struct ath_hal_9300 {scalar_t__ green_tx_status; int* ah_ob_db1; scalar_t__ ah_hw_green_tx_enable; scalar_t__* ah_db2; int ah_default_tx_power; } ;
struct TYPE_3__ {scalar_t__ ath_hal_sta_update_tx_pwr_enable_S3; scalar_t__ ath_hal_sta_update_tx_pwr_enable_S2; scalar_t__ ath_hal_sta_update_tx_pwr_enable_S1; int ath_hal_sta_update_tx_pwr_enable; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef int int8_t ;
struct TYPE_4__ {scalar_t__ ah_opmode; } ;
typedef scalar_t__ HAL_RSSI_TX_POWER ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
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
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;


 scalar_t__ VAR_19 ;

 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int FUNC_6 (int,int) ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_7 (struct ath_hal*,int *) ;
 int VAR_33 ;
 int VAR_34 ;
 int* VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

void FUNC_8(struct ath_hal *VAR_38, int VAR_39)
{
    struct ath_hal_9300 *VAR_40 = FUNC_0(VAR_38);
    u_int32_t VAR_41 = 0, VAR_42;
    u_int32_t VAR_43;
    int8_t VAR_44 = 0;
    int8_t VAR_45 = 0;
    HAL_RSSI_TX_POWER VAR_46;
    u_int8_t VAR_47[VAR_32];
    int8_t VAR_48, VAR_49;

    if ((FUNC_1(VAR_38)->ah_opmode != VAR_18) ||
        !VAR_38->ah_config.ath_hal_sta_update_tx_pwr_enable) {
        return;
    }

    VAR_46 = FUNC_0(VAR_38)->green_tx_status;
    if (VAR_40->ah_hw_green_tx_enable) {
        VAR_48 = VAR_2;
        VAR_49 = VAR_3;
    } else {
        VAR_48 = VAR_30;
        VAR_49 = VAR_31;
    }

    if ((VAR_38->ah_config.ath_hal_sta_update_tx_pwr_enable_S1)
        && (VAR_39 > VAR_48))
    {
        if (VAR_46 != 128) {
            FUNC_0(VAR_38)->green_tx_status = 128;
        }
    } else if (VAR_38->ah_config.ath_hal_sta_update_tx_pwr_enable_S2
        && (VAR_39 > VAR_49))
    {
        if (VAR_46 != 129) {
            FUNC_0(VAR_38)->green_tx_status = 129;
        }
    } else if (VAR_38->ah_config.ath_hal_sta_update_tx_pwr_enable_S3) {
        if (VAR_46 != 130) {
            FUNC_0(VAR_38)->green_tx_status = 130;
        }
    }


    if (VAR_46 == FUNC_0(VAR_38)->green_tx_status) {
        return;
    }


    if ((FUNC_0(VAR_38)->green_tx_status != VAR_19)
        && FUNC_2(VAR_38))
    {
        if (VAR_40->ah_hw_green_tx_enable) {
            switch (FUNC_0(VAR_38)->green_tx_status) {
            case 128:

                FUNC_3(VAR_47, VAR_34,
                    sizeof(VAR_47));

                VAR_44 = 0;


                VAR_42 = (FUNC_6(14, VAR_14) |
                                    FUNC_6(14, VAR_16) |
                                    FUNC_6(14, VAR_15) |
                                    FUNC_6(14, VAR_17));

                VAR_43 =
                    VAR_1;
                break;
            case 129:

                FUNC_3(VAR_47, VAR_33,
                    sizeof(VAR_47));

                VAR_44 = 0;


                VAR_42 = (FUNC_6(18, VAR_14) |
                                    FUNC_6(18, VAR_16) |
                                    FUNC_6(18, VAR_15) |
                                    FUNC_6(18, VAR_17));

                VAR_43 =
                    VAR_0;
                break;
            case 130:
            default:

                FUNC_3(VAR_47, VAR_40->ah_default_tx_power,
                    sizeof(VAR_47));

                VAR_44 = 0;


                VAR_42 =
                    FUNC_0(VAR_38)->ah_ob_db1[VAR_23];

                VAR_43 =
                  FUNC_0(VAR_38)->ah_ob_db1[VAR_20];
                break;
            }
        } else {
            switch (FUNC_0(VAR_38)->green_tx_status) {
            case 128:

                FUNC_3(VAR_47, VAR_37,
                    sizeof(VAR_47));

                VAR_44 =
                    VAR_35[VAR_29] -
                    VAR_35[VAR_26];

                VAR_41 =
                    FUNC_0(VAR_38)->ah_ob_db1[VAR_22];
                VAR_41 &= ~(VAR_5 |
                                       VAR_6 |
                                       VAR_7 |
                                       VAR_8);
                VAR_41 |= (FUNC_6(5, VAR_5) |
                FUNC_6(VAR_29,
                    VAR_6) |
                FUNC_6(VAR_29,
                    VAR_7) |
                FUNC_6(VAR_29,
                    VAR_8));

                VAR_42 = (FUNC_6(6, VAR_14) |
                                    FUNC_6(6, VAR_16) |
                                    FUNC_6(6, VAR_15) |
                                    FUNC_6(6, VAR_17));

                VAR_43 =
                    VAR_25;
                break;
            case 129:

                FUNC_3(VAR_47, VAR_36,
                    sizeof(VAR_47));

                VAR_44 =
                    VAR_35[VAR_28] -
                    VAR_35[VAR_26];

                VAR_41 =
                    FUNC_0(VAR_38)->ah_ob_db1[VAR_22];
                VAR_41 &= ~(VAR_5 |
                                       VAR_6 |
                                       VAR_7 |
                                       VAR_8);
                VAR_41 |= (FUNC_6(5, VAR_5) |
                    FUNC_6(VAR_28,
                        VAR_6) |
                    FUNC_6(VAR_28,
                        VAR_7) |
                    FUNC_6(VAR_28,
                        VAR_8));

                VAR_42 = (FUNC_6(14, VAR_14) |
                                    FUNC_6(14, VAR_16) |
                                    FUNC_6(14, VAR_15) |
                                    FUNC_6(14, VAR_17));

                VAR_43 =
                    VAR_24;
                break;
            case 130:
            default:

                FUNC_3(VAR_47, VAR_40->ah_default_tx_power,
                    sizeof(VAR_47));

                VAR_44 =
                    VAR_35[VAR_27] -
                    VAR_35[VAR_26];

                VAR_41 =
                    FUNC_0(VAR_38)->ah_ob_db1[VAR_22];

                VAR_42 =
                    FUNC_0(VAR_38)->ah_ob_db1[VAR_23];

                VAR_43 =
                  FUNC_0(VAR_38)->ah_ob_db1[VAR_20];
                break;
            }
        }

        VAR_45 =
            (int8_t) FUNC_0(VAR_38)->ah_db2[VAR_21];
        VAR_45 += VAR_44;
        FUNC_4(VAR_38, VAR_10,
            (VAR_45 << VAR_12),
            VAR_11);


        FUNC_7(VAR_38, VAR_47);

        if (!VAR_40->ah_hw_green_tx_enable) {
            FUNC_5(VAR_38, VAR_4, VAR_41);
        }

        FUNC_5(VAR_38, VAR_13, VAR_42);

        FUNC_5(VAR_38, VAR_9, VAR_43);
    }
}
