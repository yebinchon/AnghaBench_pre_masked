
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct ieee80211com {int ic_txpowlimit; int ic_flags; } ;
struct rt2560_softc {int rf_rev; int * txpow; struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {int chan; int r1; int r2; int r4; } ;


 int FUNC_0 (struct rt2560_softc*,int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct rt2560_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_4 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct rt2560_softc*,int) ;
 int FUNC_8 (struct rt2560_softc*,int,int) ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 TYPE_1__* VAR_16 ;
 int FUNC_9 (struct rt2560_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct rt2560_softc *VAR_17, struct ieee80211_channel *VAR_18)
{
 struct ieee80211com *VAR_19 = &VAR_17->sc_ic;
 uint8_t VAR_20, VAR_21;
 u_int VAR_22, VAR_23;

 VAR_23 = FUNC_4(VAR_19, VAR_18);
 FUNC_2(VAR_23 != 0 && VAR_23 != VAR_0, ("chan 0x%x", VAR_23));

 if (FUNC_1(VAR_18))
  VAR_20 = FUNC_5(VAR_17->txpow[VAR_23 - 1], 31);
 else
  VAR_20 = 31;


 VAR_20 -= (100 - VAR_19->ic_txpowlimit) / 8;

 FUNC_0(VAR_17, 2, "setting channel to %u, txpower to %u\n", VAR_23, VAR_20);

 switch (VAR_17->rf_rev) {
 case 134:
  FUNC_9(VAR_17, VAR_2, 0x00814);
  FUNC_9(VAR_17, VAR_3, VAR_8[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x00040);
  break;

 case 133:
  FUNC_9(VAR_17, VAR_2, 0x08804);
  FUNC_9(VAR_17, VAR_3, VAR_9[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x38044);
  FUNC_9(VAR_17, VAR_5, (VAR_23 == 14) ? 0x00280 : 0x00286);
  break;

 case 132:
  FUNC_9(VAR_17, VAR_2, 0x0c808);
  FUNC_9(VAR_17, VAR_3, VAR_10[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x00040);
  FUNC_9(VAR_17, VAR_5, (VAR_23 == 14) ? 0x00280 : 0x00286);
  break;

 case 131:
  FUNC_9(VAR_17, VAR_2, 0x08808);
  FUNC_9(VAR_17, VAR_3, VAR_11[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x18044);
  FUNC_9(VAR_17, VAR_5, (VAR_23 == 14) ? 0x00280 : 0x00286);

  FUNC_9(VAR_17, VAR_2, 0x08808);
  FUNC_9(VAR_17, VAR_3, VAR_12[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x18044);
  FUNC_9(VAR_17, VAR_5, (VAR_23 == 14) ? 0x00280 : 0x00286);
  break;

 case 130:
  FUNC_9(VAR_17, VAR_2, 0x08808);
  FUNC_9(VAR_17, VAR_3, VAR_13[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x18044);
  FUNC_9(VAR_17, VAR_5, (VAR_23 == 14) ? 0x00286 : 0x00282);
  break;

 case 129:
  FUNC_9(VAR_17, VAR_3, VAR_14[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_5, (VAR_23 & 1) ? 0x00386 : 0x00381);
  FUNC_9(VAR_17, VAR_2, 0x08804);

  FUNC_9(VAR_17, VAR_3, VAR_15[VAR_23 - 1]);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x18044);
  FUNC_9(VAR_17, VAR_5, (VAR_23 & 1) ? 0x00386 : 0x00381);
  break;


 case 128:
  for (VAR_22 = 0; VAR_16[VAR_22].chan != VAR_23; VAR_22++);

  FUNC_9(VAR_17, VAR_2, VAR_16[VAR_22].r1);
  FUNC_9(VAR_17, VAR_3, VAR_16[VAR_22].r2);
  FUNC_9(VAR_17, VAR_4, VAR_20 << 7 | 0x00040);
  FUNC_9(VAR_17, VAR_5, VAR_16[VAR_22].r4);
  break;
 default:
          FUNC_6("unknown ral rev=%d\n", VAR_17->rf_rev);
 }


 if ((VAR_19->ic_flags & VAR_1) == 0) {

  VAR_21 = FUNC_7(VAR_17, 70);

  VAR_21 &= ~VAR_7;
  if (VAR_23 == 14)
   VAR_21 |= VAR_7;

  FUNC_8(VAR_17, 70, VAR_21);


  FUNC_3(VAR_17, VAR_6);
 }
}
