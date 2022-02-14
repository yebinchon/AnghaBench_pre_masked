
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal_9300 {int ah_mask_reg; int ah_mask2Reg; int ah_msi_reg; scalar_t__ ah_intr_mitigation_tx; scalar_t__ ah_intr_mitigation_rx; } ;
struct TYPE_2__ {scalar_t__ ath_hal_enable_msi; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef scalar_t__ HAL_OPMODE ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hal*,int ) ;
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
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ VAR_37 ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;

__attribute__((used)) static inline void
FUNC_6(struct ath_hal *VAR_38, HAL_OPMODE VAR_39)
{
    struct ath_hal_9300 *VAR_40 = FUNC_0(VAR_38);
    u_int32_t VAR_41 = 0;
    u_int32_t VAR_42 = VAR_0;







    VAR_40->ah_mask_reg =
        VAR_14 | VAR_18 |
        VAR_6 | VAR_11 |
        VAR_4;

    if (VAR_40->ah_intr_mitigation_rx) {

        VAR_40->ah_mask_reg |= VAR_7 | VAR_8 | VAR_9;
        VAR_41 |= VAR_20 | VAR_21;
    } else {
        VAR_40->ah_mask_reg |= VAR_10 | VAR_9;
        VAR_41 |= VAR_22;
    }
    if (VAR_40->ah_intr_mitigation_tx) {

        VAR_40->ah_mask_reg |= VAR_15 | VAR_16;
        VAR_41 |= VAR_23 | VAR_24;
    } else {
        VAR_40->ah_mask_reg |= VAR_17;
        VAR_41 |= VAR_25;
    }
    if (VAR_39 == VAR_37) {
        VAR_40->ah_mask_reg |= VAR_5;
    }

    FUNC_5(VAR_38, VAR_3, VAR_40->ah_mask_reg);
    FUNC_5(VAR_38, VAR_12, FUNC_4(VAR_38, VAR_12) | VAR_13);
    VAR_40->ah_mask2Reg = FUNC_4(VAR_38, VAR_12);

    if (VAR_38->ah_config.ath_hal_enable_msi) {

        VAR_40->ah_msi_reg = FUNC_4(VAR_38, FUNC_1(VAR_38, VAR_33));
        VAR_40->ah_msi_reg |= VAR_34;
        if (FUNC_2(VAR_38)) {
            VAR_40->ah_msi_reg &= VAR_36;
        } else {
            VAR_40->ah_msi_reg &= VAR_35;
        }

        FUNC_5(VAR_38, VAR_19, VAR_41);
    }





    FUNC_5(VAR_38, FUNC_1(VAR_38, VAR_30), 0xFFFFFFFF);


    if (FUNC_2(VAR_38)) {
        VAR_42 = VAR_1;
    }
    else if (FUNC_3(VAR_38)) {
        VAR_42 = VAR_2;
    }
    FUNC_5(VAR_38,
        FUNC_1(VAR_38, VAR_31), VAR_42);


    FUNC_5(VAR_38, FUNC_1(VAR_38, VAR_32), 0);

    FUNC_5(VAR_38, FUNC_1(VAR_38, VAR_26), 0);
    FUNC_5(VAR_38, FUNC_1(VAR_38, VAR_27), 0);
    FUNC_5(VAR_38, FUNC_1(VAR_38, VAR_28), 0);
    FUNC_5(VAR_38, FUNC_1(VAR_38, VAR_29), 0);
}
