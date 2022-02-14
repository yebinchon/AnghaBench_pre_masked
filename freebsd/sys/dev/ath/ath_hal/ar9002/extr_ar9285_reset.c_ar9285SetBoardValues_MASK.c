
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_7__ {int version; scalar_t__ txGainType; } ;
struct TYPE_8__ {int antCtrlCommon; int version; scalar_t__ ob_0; scalar_t__ ob_1; scalar_t__ ob_2; scalar_t__ ob_3; scalar_t__ ob_4; scalar_t__ db1_0; scalar_t__ db1_1; scalar_t__ db1_2; scalar_t__ db1_3; scalar_t__ db1_4; scalar_t__ db2_0; scalar_t__ db2_1; scalar_t__ db2_2; scalar_t__ db2_3; scalar_t__ db2_4; scalar_t__ bb_scale_smrt_antenna; int swSettleHt40; int txFrameToPaOn; int txFrameToDataStart; int thresh62; int txEndToRxOn; int txFrameToXpaOn; int txEndToXpaOff; int adcDesiredSize; int switchSettling; } ;
struct ar5416eeprom_4k {TYPE_1__ baseEepHeader; TYPE_2__ modalHeader; } ;
struct TYPE_11__ {int ah_antControl; } ;
struct TYPE_10__ {TYPE_3__* ah_eeprom; } ;
struct TYPE_9__ {struct ar5416eeprom_4k ee_base; } ;
typedef TYPE_2__ MODAL_EEP4K_HEADER ;
typedef TYPE_3__ HAL_EEPROM_v4k ;
typedef int HAL_BOOL ;


 TYPE_6__* FUNC_0 (struct ath_hal*) ;
 TYPE_5__* FUNC_1 (struct ath_hal*) ;
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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ VAR_46 ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 int FUNC_5 (struct ath_hal*,int ,int ,scalar_t__) ;
 int FUNC_6 (struct ath_hal*,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct ath_hal*,int ,int ,int ) ;
 int FUNC_8 (struct ath_hal*,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct ath_hal*,int ) ;
 int FUNC_11 (struct ath_hal*,TYPE_2__ const*,struct ar5416eeprom_4k const*,scalar_t__) ;
 int FUNC_12 (struct ath_hal*,char*) ;

HAL_BOOL
FUNC_13(struct ath_hal *VAR_47, const struct ieee80211_channel *VAR_48)
{
 const HAL_EEPROM_v4k *VAR_49 = FUNC_1(VAR_47)->ah_eeprom;
 const struct ar5416eeprom_4k *VAR_50 = &VAR_49->ee_base;
 const MODAL_EEP4K_HEADER *VAR_51;
 uint8_t VAR_52;
 uint8_t VAR_53[5], VAR_54[5], VAR_55[5];

 VAR_51 = &VAR_50->modalHeader;
 VAR_52 = 23;

 FUNC_8(VAR_47, VAR_39, VAR_51->antCtrlCommon);


 FUNC_11(VAR_47, VAR_51, VAR_50, VAR_52);


 (void) FUNC_10(VAR_47, FUNC_0(VAR_47)->ah_antControl);


 if (VAR_51->version >= 2) {
  VAR_53[0] = VAR_51->ob_0;
  VAR_53[1] = VAR_51->ob_1;
  VAR_53[2] = VAR_51->ob_2;
  VAR_53[3] = VAR_51->ob_3;
  VAR_53[4] = VAR_51->ob_4;

  VAR_54[0] = VAR_51->db1_0;
  VAR_54[1] = VAR_51->db1_1;
  VAR_54[2] = VAR_51->db1_2;
  VAR_54[3] = VAR_51->db1_3;
  VAR_54[4] = VAR_51->db1_4;

  VAR_55[0] = VAR_51->db2_0;
  VAR_55[1] = VAR_51->db2_1;
  VAR_55[2] = VAR_51->db2_2;
  VAR_55[3] = VAR_51->db2_3;
  VAR_55[4] = VAR_51->db2_4;
 } else if (VAR_51->version == 1) {
  VAR_53[0] = VAR_51->ob_0;
  VAR_53[1] = VAR_53[2] = VAR_53[3] = VAR_53[4] = VAR_51->ob_1;
  VAR_54[0] = VAR_51->db1_0;
  VAR_54[1] = VAR_54[2] = VAR_54[3] = VAR_54[4] = VAR_51->db1_1;
  VAR_55[0] = VAR_51->db2_0;
  VAR_55[1] = VAR_55[2] = VAR_55[3] = VAR_55[4] = VAR_51->db2_1;
 } else {
  int VAR_56;

  for (VAR_56 = 0; VAR_56 < 5; VAR_56++) {
   VAR_53[VAR_56] = VAR_51->ob_0;
   VAR_54[VAR_56] = VAR_51->db1_0;
   VAR_55[VAR_56] = VAR_51->db1_0;
  }
 }

 FUNC_5(VAR_47, VAR_5, VAR_9, VAR_53[0]);
 FUNC_5(VAR_47, VAR_5, VAR_10, VAR_53[1]);
 FUNC_5(VAR_47, VAR_5, VAR_11, VAR_53[2]);
 FUNC_5(VAR_47, VAR_5, VAR_12, VAR_53[3]);
 FUNC_5(VAR_47, VAR_5, VAR_13, VAR_53[4]);

 FUNC_5(VAR_47, VAR_5, VAR_6, VAR_54[0]);
 FUNC_5(VAR_47, VAR_5, VAR_7, VAR_54[1]);
 FUNC_5(VAR_47, VAR_5, VAR_8, VAR_54[2]);
 FUNC_5(VAR_47, VAR_14, VAR_15, VAR_54[3]);
 FUNC_5(VAR_47, VAR_14, VAR_16, VAR_54[4]);

 FUNC_5(VAR_47, VAR_14, VAR_17, VAR_55[0]);
 FUNC_5(VAR_47, VAR_14, VAR_18, VAR_55[1]);
 FUNC_5(VAR_47, VAR_14, VAR_19, VAR_55[2]);
 FUNC_5(VAR_47, VAR_14, VAR_20, VAR_55[3]);
 FUNC_5(VAR_47, VAR_14, VAR_21, VAR_55[4]);

 FUNC_7(VAR_47, VAR_37, VAR_38,
        VAR_51->switchSettling);
 FUNC_7(VAR_47, VAR_26, VAR_27,
        VAR_51->adcDesiredSize);

 FUNC_8(VAR_47, VAR_32,
    FUNC_9(VAR_51->txEndToXpaOff, VAR_35) |
    FUNC_9(VAR_51->txEndToXpaOff, VAR_36) |
    FUNC_9(VAR_51->txFrameToXpaOn, VAR_33) |
    FUNC_9(VAR_51->txFrameToXpaOn, VAR_34));

 FUNC_7(VAR_47, VAR_31, VAR_40,
        VAR_51->txEndToRxOn);

 FUNC_7(VAR_47, VAR_22, VAR_4,
        VAR_51->thresh62);
 FUNC_7(VAR_47, VAR_28, VAR_29,
        VAR_51->thresh62);

 if ((VAR_50->baseEepHeader.version & VAR_3) >=
     VAR_1) {
  FUNC_7(VAR_47, VAR_30, VAR_41,
      VAR_51->txFrameToDataStart);
  FUNC_7(VAR_47, VAR_30, VAR_42,
      VAR_51->txFrameToPaOn);
 }

 if ((VAR_50->baseEepHeader.version & VAR_3) >=
     VAR_2) {
  if (FUNC_4(VAR_48))
   FUNC_7(VAR_47, VAR_37,
       VAR_38, VAR_51->swSettleHt40);
 }
 if (FUNC_2(VAR_47) || FUNC_3(VAR_47)) {
  uint8_t VAR_57 = (VAR_51->bb_scale_smrt_antenna & VAR_46);
  if ((VAR_50->baseEepHeader.txGainType == 0) && (VAR_57 != 0)) {
   FUNC_12(VAR_47, "[ath]: adjusting cck tx gain factor\n");
   uint32_t VAR_58, VAR_59, VAR_60;

   VAR_59 = (1<<0) | (1<<5) | (1<<10) | (1<<15) | (1<<20) | (1<<25);
   VAR_58 = VAR_59 * VAR_57;
   VAR_60 = VAR_59 * 0x1f;
   FUNC_6(VAR_47, VAR_44, VAR_58, VAR_60);
   FUNC_6(VAR_47, VAR_43, VAR_58, VAR_60);
   FUNC_6(VAR_47, VAR_24, VAR_58, VAR_60);

   VAR_59 = (1<<0) | (1<<5) | (1<<15);
   VAR_58 = VAR_59 * VAR_57;
   VAR_60 = VAR_59 * 0x1f;
   FUNC_6(VAR_47, VAR_45, VAR_58, VAR_60);

   VAR_59 = (1<<0) | (1<<5);
   VAR_58 = VAR_59 * VAR_57;
   VAR_60 = VAR_59 * 0x1f;
   FUNC_6(VAR_47, VAR_23, VAR_58, VAR_60);
   FUNC_6(VAR_47, VAR_25, VAR_58, VAR_60);
  }
 }

 return VAR_0;
}
