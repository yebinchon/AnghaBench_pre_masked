
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211com {int ic_txpowlimit; scalar_t__ ic_opmode; int ic_flags; } ;
struct ural_softc {int rf_rev; int * txpow; struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {int chan; int r1; int r2; int r4; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ural_softc*,int) ;
 int FUNC_5 (struct ural_softc*,int,int) ;
 int FUNC_6 (struct ural_softc*) ;
 int FUNC_7 (struct ural_softc*,int) ;
 int FUNC_8 (struct ural_softc*,int ) ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 TYPE_1__* VAR_18 ;
 int FUNC_9 (struct ural_softc*,int ,int) ;
 int FUNC_10 (struct ural_softc*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_11(struct ural_softc *VAR_19, struct ieee80211_channel *VAR_20)
{
 struct ieee80211com *VAR_21 = &VAR_19->sc_ic;
 uint8_t VAR_22, VAR_23;
 int VAR_24, VAR_25;

 VAR_25 = FUNC_2(VAR_21, VAR_20);
 if (VAR_25 == 0 || VAR_25 == VAR_0)
  return;

 if (FUNC_1(VAR_20))
  VAR_22 = FUNC_3(VAR_19->txpow[VAR_25 - 1], 31);
 else
  VAR_22 = 31;


 VAR_22 -= (100 - VAR_21->ic_txpowlimit) / 8;

 FUNC_0(2, "setting channel to %u, txpower to %u\n", VAR_25, VAR_22);

 switch (VAR_19->rf_rev) {
 case 134:
  FUNC_9(VAR_19, VAR_4, 0x00814);
  FUNC_9(VAR_19, VAR_5, VAR_10[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x00040);
  break;

 case 133:
  FUNC_9(VAR_19, VAR_4, 0x08804);
  FUNC_9(VAR_19, VAR_5, VAR_11[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x38044);
  FUNC_9(VAR_19, VAR_7, (VAR_25 == 14) ? 0x00280 : 0x00286);
  break;

 case 132:
  FUNC_9(VAR_19, VAR_4, 0x0c808);
  FUNC_9(VAR_19, VAR_5, VAR_12[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x00040);
  FUNC_9(VAR_19, VAR_7, (VAR_25 == 14) ? 0x00280 : 0x00286);
  break;

 case 131:
  FUNC_9(VAR_19, VAR_4, 0x08808);
  FUNC_9(VAR_19, VAR_5, VAR_13[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x18044);
  FUNC_9(VAR_19, VAR_7, (VAR_25 == 14) ? 0x00280 : 0x00286);

  FUNC_9(VAR_19, VAR_4, 0x08808);
  FUNC_9(VAR_19, VAR_5, VAR_14[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x18044);
  FUNC_9(VAR_19, VAR_7, (VAR_25 == 14) ? 0x00280 : 0x00286);
  break;

 case 130:
  FUNC_9(VAR_19, VAR_4, 0x08808);
  FUNC_9(VAR_19, VAR_5, VAR_15[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x18044);
  FUNC_9(VAR_19, VAR_7, (VAR_25 == 14) ? 0x00286 : 0x00282);
  break;

 case 129:
  FUNC_9(VAR_19, VAR_5, VAR_16[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_7, (VAR_25 & 1) ? 0x00386 : 0x00381);
  FUNC_9(VAR_19, VAR_4, 0x08804);

  FUNC_9(VAR_19, VAR_5, VAR_17[VAR_25 - 1]);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x18044);
  FUNC_9(VAR_19, VAR_7, (VAR_25 & 1) ? 0x00386 : 0x00381);
  break;


 case 128:
  for (VAR_24 = 0; VAR_18[VAR_24].chan != VAR_25; VAR_24++);

  FUNC_9(VAR_19, VAR_4, VAR_18[VAR_24].r1);
  FUNC_9(VAR_19, VAR_5, VAR_18[VAR_24].r2);
  FUNC_9(VAR_19, VAR_6, VAR_22 << 7 | 0x00040);
  FUNC_9(VAR_19, VAR_7, VAR_18[VAR_24].r4);
  break;
 }

 if (VAR_21->ic_opmode != VAR_2 &&
     (VAR_21->ic_flags & VAR_1) == 0) {

  VAR_23 = FUNC_4(VAR_19, 70);

  VAR_23 &= ~VAR_3;
  if (VAR_25 == 14)
   VAR_23 |= VAR_3;

  FUNC_5(VAR_19, 70, VAR_23);


  FUNC_8(VAR_19, VAR_8);

  FUNC_7(VAR_19, VAR_9 / 100);
  FUNC_6(VAR_19);
 }



 FUNC_10(VAR_19, VAR_20);


 FUNC_7(VAR_19, VAR_9 / 100);
}
