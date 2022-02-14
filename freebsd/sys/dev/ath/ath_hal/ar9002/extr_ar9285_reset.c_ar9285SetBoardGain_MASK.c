
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int version; } ;
struct ar5416eeprom_4k {TYPE_1__ baseEepHeader; } ;
struct TYPE_5__ {int* antCtrlChain; int * rxTxMarginCh; int * xatten2Db; int * xatten2Margin; int * bswAtten; int * bswMargin; int * txRxAttenCh; int * iqCalQCh; int * iqCalICh; } ;
typedef TYPE_2__ MODAL_EEP4K_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct ath_hal *VAR_13, const MODAL_EEP4K_HEADER *VAR_14,
    const struct ar5416eeprom_4k *VAR_15, uint8_t VAR_16)
{
 FUNC_3(VAR_13, VAR_10,
    VAR_14->antCtrlChain[0]);

 FUNC_3(VAR_13, FUNC_0(0),
    (FUNC_1(VAR_13, FUNC_0(0)) &
     ~(VAR_12 |
       VAR_11)) |
    FUNC_4(VAR_14->iqCalICh[0], VAR_11) |
    FUNC_4(VAR_14->iqCalQCh[0], VAR_12));

 if ((VAR_15->baseEepHeader.version & VAR_1) >=
     VAR_0) {
  VAR_16 = VAR_14->txRxAttenCh[0];

  FUNC_2(VAR_13, VAR_4,
      VAR_6, VAR_14->bswMargin[0]);
  FUNC_2(VAR_13, VAR_4,
      VAR_5, VAR_14->bswAtten[0]);
  FUNC_2(VAR_13, VAR_4,
      VAR_8, VAR_14->xatten2Margin[0]);
  FUNC_2(VAR_13, VAR_4,
      VAR_7, VAR_14->xatten2Db[0]);


  FUNC_2(VAR_13, VAR_4 + 0x1000,
        VAR_6,
        VAR_14->bswMargin[0]);
  FUNC_2(VAR_13, VAR_4 + 0x1000,
        VAR_5, VAR_14->bswAtten[0]);
  FUNC_2(VAR_13, VAR_4 + 0x1000,
        VAR_8,
        VAR_14->xatten2Margin[0]);
  FUNC_2(VAR_13, VAR_4 + 0x1000,
        VAR_7, VAR_14->xatten2Db[0]);
 }

 FUNC_2(VAR_13, VAR_9,
        VAR_2, VAR_16);
 FUNC_2(VAR_13, VAR_9,
        VAR_3, VAR_14->rxTxMarginCh[0]);

 FUNC_2(VAR_13, VAR_9 + 0x1000,
        VAR_2, VAR_16);
 FUNC_2(VAR_13, VAR_9 + 0x1000,
        VAR_3, VAR_14->rxTxMarginCh[0]);
}
