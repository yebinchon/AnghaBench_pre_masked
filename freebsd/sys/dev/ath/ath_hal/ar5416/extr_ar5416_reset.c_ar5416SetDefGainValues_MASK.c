
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ath_hal {int dummy; } ;
struct ar5416eeprom {int dummy; } ;
struct TYPE_3__ {int * rxTxMarginCh; int * bswAtten; int * bswMargin; int * xatten2Db; int * xatten2Margin; int * txRxAttenCh; } ;
typedef TYPE_1__ MODAL_EEP_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_12,
    const MODAL_EEP_HEADER *VAR_13,
    const struct ar5416eeprom *VAR_14,
    uint8_t VAR_15, int VAR_16, int VAR_17)
{

 if (FUNC_1(VAR_12)) {
  VAR_15 = VAR_13->txRxAttenCh[VAR_17];

  if (FUNC_0(VAR_12)) {
   FUNC_2(VAR_12, VAR_2 + VAR_16,
         VAR_7,
         VAR_13->bswMargin[VAR_17]);
   FUNC_2(VAR_12, VAR_2 + VAR_16,
         VAR_6,
         VAR_13->bswAtten[VAR_17]);
   FUNC_2(VAR_12, VAR_2 + VAR_16,
         VAR_9,
         VAR_13->xatten2Margin[VAR_17]);
   FUNC_2(VAR_12, VAR_2 + VAR_16,
         VAR_8,
         VAR_13->xatten2Db[VAR_17]);
  } else {
   FUNC_2(VAR_12, VAR_2 + VAR_16,
         VAR_4,
         VAR_13->bswMargin[VAR_17]);
   FUNC_2(VAR_12, VAR_2 + VAR_16,
         VAR_3,
         VAR_13->bswAtten[VAR_17]);
  }
 }

 if (FUNC_0(VAR_12)) {
  FUNC_2(VAR_12,
        VAR_10 + VAR_16,
        VAR_0, VAR_15);
  FUNC_2(VAR_12,
        VAR_10 + VAR_16,
        VAR_1, VAR_13->rxTxMarginCh[VAR_17]);
 } else {
  FUNC_2(VAR_12,
     VAR_10 + VAR_16,
     VAR_11, VAR_15);
  FUNC_2(VAR_12,
     VAR_2 + VAR_16,
     VAR_5, VAR_13->rxTxMarginCh[VAR_17]);
 }
}
