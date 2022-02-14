
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct modal_eep_ar9287_header {int antCtrlCommon; int* antCtrlChain; int xpaBiasLvl; int txFrameToPaOn; int txFrameToDataStart; int ob_pal_off; int ob_qam; int ob_psk; int ob_cck; int db2; int db1; int thresh62; int txEndToRxOn; int txFrameToXpaOn; int txEndToXpaOff; int adcDesiredSize; int switchSettling; int swSettleHt40; int * rxTxMarginCh; int * bswAtten; int * bswMargin; int * txRxAttenCh; int * iqCalQCh; int * iqCalICh; } ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct ar9287_eeprom {struct modal_eep_ar9287_header modalHeader; } ;
struct TYPE_4__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_3__ {struct ar9287_eeprom ee_base; } ;
typedef TYPE_1__ HAL_EEPROM_9287 ;
typedef int HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ath_hal*,int ,int ,int ) ;
 int FUNC_4 (struct ath_hal*,scalar_t__,int) ;
 int FUNC_5 (struct ath_hal*,scalar_t__) ;
 int FUNC_6 (struct ath_hal*,scalar_t__,int ,int ) ;
 int FUNC_7 (struct ath_hal*,scalar_t__,int) ;
 int FUNC_8 (int ,int) ;

HAL_BOOL
FUNC_9(struct ath_hal *VAR_41, const struct ieee80211_channel *VAR_42)
{
 const HAL_EEPROM_9287 *VAR_43 = FUNC_0(VAR_41)->ah_eeprom;
 const struct ar9287_eeprom *VAR_44 = &VAR_43->ee_base;
 const struct modal_eep_ar9287_header *VAR_45 = &VAR_44->modalHeader;
 uint16_t VAR_46[VAR_4];
 uint32_t VAR_47, VAR_48;
 uint8_t VAR_49;
 int VAR_50, VAR_51, VAR_52;

 VAR_45 = &VAR_44->modalHeader;

 VAR_46[0] = (uint16_t)((VAR_45->antCtrlCommon >> 28) & 0xF);
 VAR_46[1] = (uint16_t)((VAR_45->antCtrlCommon >> 24) & 0xF);
 VAR_46[2] = (uint16_t)((VAR_45->antCtrlCommon >> 20) & 0xF);
 VAR_46[3] = (uint16_t)((VAR_45->antCtrlCommon >> 16) & 0xF);
 VAR_46[4] = (uint16_t)((VAR_45->antCtrlCommon >> 12) & 0xF);
 VAR_46[5] = (uint16_t)((VAR_45->antCtrlCommon >> 8) & 0xF);
 VAR_46[6] = (uint16_t)((VAR_45->antCtrlCommon >> 4) & 0xF);
 VAR_46[7] = (uint16_t)(VAR_45->antCtrlCommon & 0xF);

 VAR_52 = 8;

 for (VAR_50 = 0, VAR_51 = VAR_52; VAR_50 < VAR_15; VAR_50++) {
  VAR_46[VAR_51++] = (uint16_t)((VAR_45->antCtrlChain[VAR_50] >> 28) & 0xf);
  VAR_46[VAR_51++] = (uint16_t)((VAR_45->antCtrlChain[VAR_50] >> 10) & 0x3);
  VAR_46[VAR_51++] = (uint16_t)((VAR_45->antCtrlChain[VAR_50] >> 8) & 0x3);
  VAR_46[VAR_51++] = 0;
  VAR_46[VAR_51++] = (uint16_t)((VAR_45->antCtrlChain[VAR_50] >> 6) & 0x3);
  VAR_46[VAR_51++] = (uint16_t)((VAR_45->antCtrlChain[VAR_50] >> 4) & 0x3);
  VAR_46[VAR_51++] = (uint16_t)((VAR_45->antCtrlChain[VAR_50] >> 2) & 0x3);
  VAR_46[VAR_51++] = (uint16_t)(VAR_45->antCtrlChain[VAR_50] & 0x3);
 }

 FUNC_7(VAR_41, VAR_35, VAR_45->antCtrlCommon);

 for (VAR_50 = 0; VAR_50 < VAR_15; VAR_50++) {
  VAR_47 = VAR_50 * 0x1000;

  FUNC_7(VAR_41, VAR_34 + VAR_47,
     VAR_45->antCtrlChain[VAR_50]);

  FUNC_7(VAR_41, FUNC_1(0) + VAR_47,
     (FUNC_5(VAR_41, FUNC_1(0)
         + VAR_47)
      & ~(VAR_37 |
          VAR_36)) |
     FUNC_8(VAR_45->iqCalICh[VAR_50],
        VAR_36) |
     FUNC_8(VAR_45->iqCalQCh[VAR_50],
        VAR_37));

  VAR_49 = VAR_45->txRxAttenCh[VAR_50];

  FUNC_6(VAR_41, VAR_21 + VAR_47,
         VAR_23,
         VAR_45->bswMargin[VAR_50]);
  FUNC_6(VAR_41, VAR_21 + VAR_47,
         VAR_22,
         VAR_45->bswAtten[VAR_50]);
  FUNC_6(VAR_41, VAR_31 + VAR_47,
         VAR_2,
         VAR_49);
  FUNC_6(VAR_41, VAR_31 + VAR_47,
         VAR_3,
         VAR_45->rxTxMarginCh[VAR_50]);
 }

 if (FUNC_2(VAR_42))
  FUNC_6(VAR_41, VAR_32,
         VAR_33, VAR_45->swSettleHt40);
 else
  FUNC_6(VAR_41, VAR_32,
         VAR_33, VAR_45->switchSettling);

 FUNC_6(VAR_41, VAR_17,
        VAR_18, VAR_45->adcDesiredSize);

 FUNC_7(VAR_41, VAR_26,
    FUNC_8(VAR_45->txEndToXpaOff, VAR_29)
    | FUNC_8(VAR_45->txEndToXpaOff, VAR_30)
    | FUNC_8(VAR_45->txFrameToXpaOn, VAR_27)
    | FUNC_8(VAR_45->txFrameToXpaOn, VAR_28));

 FUNC_6(VAR_41, VAR_25,
        VAR_38, VAR_45->txEndToRxOn);

 FUNC_6(VAR_41, VAR_16,
        VAR_1, VAR_45->thresh62);
 FUNC_6(VAR_41, VAR_19,
        VAR_20, VAR_45->thresh62);

 VAR_48 = FUNC_5(VAR_41, VAR_5);
 VAR_48 &= ~(VAR_7 |
      VAR_8 |
      VAR_9 |
      VAR_11 |
      VAR_12 |
      VAR_10);
 VAR_48 |= (FUNC_8(VAR_45->db1, VAR_7) |
     FUNC_8(VAR_45->db2, VAR_8) |
     FUNC_8(VAR_45->ob_cck, VAR_9) |
     FUNC_8(VAR_45->ob_psk, VAR_11) |
     FUNC_8(VAR_45->ob_qam, VAR_12) |
     FUNC_8(VAR_45->ob_pal_off, VAR_10));


 FUNC_4(VAR_41, VAR_5, VAR_48);

 VAR_48 = FUNC_5(VAR_41, VAR_6);
 VAR_48 &= ~(VAR_7 |
      VAR_8 |
      VAR_9 |
      VAR_11 |
      VAR_12 |
      VAR_10);
 VAR_48 |= (FUNC_8(VAR_45->db1, VAR_7) |
     FUNC_8(VAR_45->db2, VAR_8) |
     FUNC_8(VAR_45->ob_cck, VAR_9) |
     FUNC_8(VAR_45->ob_psk, VAR_11) |
     FUNC_8(VAR_45->ob_qam, VAR_12) |
     FUNC_8(VAR_45->ob_pal_off, VAR_10));

 FUNC_4(VAR_41, VAR_6, VAR_48);

 FUNC_6(VAR_41, VAR_24,
     VAR_39, VAR_45->txFrameToDataStart);
 FUNC_6(VAR_41, VAR_24,
     VAR_40, VAR_45->txFrameToPaOn);

 FUNC_3(VAR_41, VAR_13,
     VAR_14, VAR_45->xpaBiasLvl);

 return VAR_0;
}
