
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {int dacLpMode; int desiredScaleCCK; scalar_t__ dacHiPwrMode_5G; } ;
struct ar5416eeprom {TYPE_1__ baseEepHeader; TYPE_2__* modalHeader; } ;
struct TYPE_9__ {scalar_t__ ah_eeversion; TYPE_3__* ah_eeprom; } ;
struct TYPE_8__ {struct ar5416eeprom ee_base; } ;
struct TYPE_7__ {int antCtrlCommon; int* antCtrlChain; int ob; int db; int ob_ch1; int db_ch1; int xpaBiasLvl; int flagBits; int switchSettling; int adcDesiredSize; int pgaDesiredSize; int txEndToRxOn; int thresh62; int txFrameToDataStart; int txFrameToPaOn; int swSettleHt40; int miscBits; int txFrameToXpaOn; int txEndToXpaOff; int * iqCalQCh; int * iqCalICh; } ;
typedef TYPE_2__ MODAL_EEP_HEADER ;
typedef TYPE_3__ HAL_EEPROM_v14 ;
typedef int HAL_BOOL ;


 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 scalar_t__ VAR_24 ;
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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 scalar_t__ FUNC_6 (struct ath_hal*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_9 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_10 (struct ath_hal*) ;
 scalar_t__ FUNC_11 (struct ath_hal*) ;
 int FUNC_12 (struct ath_hal*,int ,int ,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ath_hal*,scalar_t__) ;
 int FUNC_15 (struct ath_hal*,int ,int ,int) ;
 int FUNC_16 (struct ath_hal*,scalar_t__,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (struct ath_hal*,int) ;
 int FUNC_19 (struct ath_hal*,TYPE_2__ const*,struct ar5416eeprom const*,int,int,int) ;

HAL_BOOL
FUNC_20(struct ath_hal *VAR_59, const struct ieee80211_channel *VAR_60)
{
    const HAL_EEPROM_v14 *VAR_61 = FUNC_0(VAR_59)->ah_eeprom;
    const struct ar5416eeprom *VAR_62 = &VAR_61->ee_base;
    const MODAL_EEP_HEADER *VAR_63;
    int VAR_64, VAR_65;
    uint8_t VAR_66;

    FUNC_7(FUNC_0(VAR_59)->ah_eeversion >= VAR_24);
    VAR_63 = &VAR_62->modalHeader[FUNC_8(VAR_60)];


    VAR_66 = FUNC_8(VAR_60) ? 23 : 44;

    FUNC_16(VAR_59, VAR_49, VAR_63->antCtrlCommon);
    for (VAR_64 = 0; VAR_64 < VAR_5; VAR_64++) {
    if (FUNC_2(VAR_59)) {
  if (VAR_64 >= 2) break;
    }
 VAR_65 = FUNC_18(VAR_59, VAR_64);

        FUNC_16(VAR_59, VAR_48 + VAR_65, VAR_63->antCtrlChain[VAR_64]);

        FUNC_16(VAR_59, VAR_50 + VAR_65,
         (FUNC_14(VAR_59, VAR_50 + VAR_65) &
         ~(VAR_52 | VAR_51)) |
         FUNC_17(VAR_63->iqCalICh[VAR_64], VAR_51) |
         FUNC_17(VAR_63->iqCalQCh[VAR_64], VAR_52));
        if ((VAR_64 == 0) || FUNC_1(VAR_59))
     FUNC_19(VAR_59, VAR_63, VAR_62, VAR_66, VAR_65, VAR_64);

    }

 if (FUNC_3(VAR_59)) {
                if (FUNC_8(VAR_60)) {
                        FUNC_12(VAR_59, VAR_7, VAR_9, VAR_63->ob);
                        FUNC_12(VAR_59, VAR_7, VAR_8, VAR_63->db);
                        FUNC_12(VAR_59, VAR_10, VAR_12, VAR_63->ob_ch1);
                        FUNC_12(VAR_59, VAR_10, VAR_11, VAR_63->db_ch1);
                } else {
                        FUNC_12(VAR_59, VAR_13, VAR_15, VAR_63->ob);
                        FUNC_12(VAR_59, VAR_13, VAR_14, VAR_63->db);
                        FUNC_12(VAR_59, VAR_16, VAR_18, VAR_63->ob_ch1);
                        FUNC_12(VAR_59, VAR_16, VAR_17, VAR_63->db_ch1);
                }
                FUNC_12(VAR_59, VAR_21, VAR_23, VAR_63->xpaBiasLvl);
                FUNC_12(VAR_59, VAR_21, VAR_22,
      !!(VAR_63->flagBits & VAR_2));
                FUNC_12(VAR_59, VAR_58, VAR_36,
      !!(VAR_63->flagBits & VAR_1));
        }

    FUNC_15(VAR_59, VAR_46, VAR_47, VAR_63->switchSettling);
    FUNC_15(VAR_59, VAR_29, VAR_30, VAR_63->adcDesiredSize);

    if (! FUNC_3(VAR_59))
     FUNC_15(VAR_59, VAR_29, VAR_31, VAR_63->pgaDesiredSize);

    FUNC_16(VAR_59, VAR_41,
        FUNC_17(VAR_63->txEndToXpaOff, VAR_44)
        | FUNC_17(VAR_63->txEndToXpaOff, VAR_45)
        | FUNC_17(VAR_63->txFrameToXpaOn, VAR_42)
        | FUNC_17(VAR_63->txFrameToXpaOn, VAR_43));

    FUNC_15(VAR_59, VAR_40, VAR_54,
 VAR_63->txEndToRxOn);

    if (FUNC_3(VAR_59)) {
 FUNC_15(VAR_59, VAR_25, VAR_6,
     VAR_63->thresh62);
 FUNC_15(VAR_59, VAR_33, VAR_34,
     VAR_63->thresh62);
    } else {
 FUNC_15(VAR_59, VAR_25, VAR_26,
     VAR_63->thresh62);
 FUNC_15(VAR_59, VAR_32, VAR_35,
     VAR_63->thresh62);
    }


    if (FUNC_10(VAR_59)) {
        FUNC_15(VAR_59, VAR_39, VAR_55,
     VAR_63->txFrameToDataStart);
        FUNC_15(VAR_59, VAR_39, VAR_56,
     VAR_63->txFrameToPaOn);
    }

    if (FUNC_11(VAR_59) && FUNC_9(VAR_60))

  FUNC_15(VAR_59, VAR_46, VAR_47,
      VAR_63->swSettleHt40);

    if (FUNC_5(VAR_59) && FUNC_6(VAR_59) >= VAR_3)
         FUNC_15(VAR_59, VAR_27, VAR_28, VAR_63->miscBits);

        if (FUNC_4(VAR_59) && FUNC_6(VAR_59) >= VAR_4) {
                if (FUNC_8(VAR_60))
                        FUNC_12(VAR_59, VAR_19, VAR_20,
       VAR_62->baseEepHeader.dacLpMode);
                else if (VAR_62->baseEepHeader.dacHiPwrMode_5G)
                        FUNC_12(VAR_59, VAR_19, VAR_20, 0);
                else
                        FUNC_12(VAR_59, VAR_19, VAR_20,
       VAR_62->baseEepHeader.dacLpMode);

  FUNC_13(100);

                FUNC_15(VAR_59, VAR_37, VAR_38,
      VAR_63->miscBits >> 2);
                FUNC_15(VAR_59, VAR_57, VAR_53,
      VAR_62->baseEepHeader.desiredScaleCCK);
        }

    return (VAR_0);
}
