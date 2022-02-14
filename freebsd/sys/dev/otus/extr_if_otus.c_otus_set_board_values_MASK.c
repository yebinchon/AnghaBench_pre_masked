
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {struct ModalEepHeader* modalHeader; } ;
struct otus_softc {TYPE_1__ eeprom; } ;
struct ieee80211_channel {int dummy; } ;
struct ModalEepHeader {int switchSettling; int pgaDesiredSize; int adcDesiredSize; int txEndToXpaOff; int txFrameToXpaOn; int txEndToRxOn; int thresh62; int* txRxAttenCh; int* rxTxMarginCh; int* bswMargin; int* iqCalICh; int* iqCalQCh; int xpd; int * antCtrlChain; int antCtrlCommon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct otus_softc*,scalar_t__) ;
 int FUNC_3 (struct otus_softc*,scalar_t__,int) ;
 int FUNC_4 (struct otus_softc*) ;

int
FUNC_5(struct otus_softc *VAR_11, struct ieee80211_channel *VAR_12)
{
 const struct ModalEepHeader *VAR_13;
 uint32_t VAR_14, VAR_15;

 if (FUNC_0(VAR_12))
  VAR_13 = &VAR_11->eeprom.modalHeader[0];
 else
  VAR_13 = &VAR_11->eeprom.modalHeader[1];


 VAR_15 = 2 * 0x1000;

 VAR_14 = FUNC_1(VAR_13->antCtrlCommon);
 FUNC_3(VAR_11, VAR_8, VAR_14);

 VAR_14 = FUNC_1(VAR_13->antCtrlChain[0]);
 FUNC_3(VAR_11, VAR_7, VAR_14);

 VAR_14 = FUNC_1(VAR_13->antCtrlChain[1]);
 FUNC_3(VAR_11, VAR_7 + VAR_15, VAR_14);

 if (1 ) {
  VAR_14 = FUNC_2(VAR_11, VAR_6);
  VAR_14 &= ~(0x7f << 7);
  VAR_14 |= (VAR_13->switchSettling & 0x7f) << 7;
  FUNC_3(VAR_11, VAR_6, VAR_14);
 }

 VAR_14 = FUNC_2(VAR_11, VAR_1);
 VAR_14 &= ~0xffff;
 VAR_14 |= VAR_13->pgaDesiredSize << 8 | VAR_13->adcDesiredSize;
 FUNC_3(VAR_11, VAR_1, VAR_14);

 VAR_14 = VAR_13->txEndToXpaOff << 24 | VAR_13->txEndToXpaOff << 16 |
       VAR_13->txFrameToXpaOn << 8 | VAR_13->txFrameToXpaOn;
 FUNC_3(VAR_11, VAR_4, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_3);
 VAR_14 &= ~(0xff << 16);
 VAR_14 |= VAR_13->txEndToRxOn << 16;
 FUNC_3(VAR_11, VAR_3, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_0);
 VAR_14 &= ~(0x7f << 12);
 VAR_14 |= (VAR_13->thresh62 & 0x7f) << 12;
 FUNC_3(VAR_11, VAR_0, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_5);
 VAR_14 &= ~(0x3f << 12);
 VAR_14 |= (VAR_13->txRxAttenCh[0] & 0x3f) << 12;
 FUNC_3(VAR_11, VAR_5, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_5 + VAR_15);
 VAR_14 &= ~(0x3f << 12);
 VAR_14 |= (VAR_13->txRxAttenCh[1] & 0x3f) << 12;
 FUNC_3(VAR_11, VAR_5 + VAR_15, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_2);
 VAR_14 &= ~(0x3f << 18);
 VAR_14 |= (VAR_13->rxTxMarginCh[0] & 0x3f) << 18;
 if (FUNC_0(VAR_12)) {
  VAR_14 &= ~(0xf << 10);
  VAR_14 |= (VAR_13->bswMargin[0] & 0xf) << 10;
 }
 FUNC_3(VAR_11, VAR_2, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_2 + VAR_15);
 VAR_14 &= ~(0x3f << 18);
 VAR_14 |= (VAR_13->rxTxMarginCh[1] & 0x3f) << 18;
 FUNC_3(VAR_11, VAR_2 + VAR_15, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_9);
 VAR_14 &= ~(0x3f << 5 | 0x1f);
 VAR_14 |= (VAR_13->iqCalICh[0] & 0x3f) << 5 | (VAR_13->iqCalQCh[0] & 0x1f);
 FUNC_3(VAR_11, VAR_9, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_9 + VAR_15);
 VAR_14 &= ~(0x3f << 5 | 0x1f);
 VAR_14 |= (VAR_13->iqCalICh[1] & 0x3f) << 5 | (VAR_13->iqCalQCh[1] & 0x1f);
 FUNC_3(VAR_11, VAR_9 + VAR_15, VAR_14);

 VAR_14 = FUNC_2(VAR_11, VAR_10);
 VAR_14 &= ~(0xf << 16);
 VAR_14 |= (VAR_13->xpd & 0xf) << 16;
 FUNC_3(VAR_11, VAR_10, VAR_14);

 return FUNC_4(VAR_11);
}
