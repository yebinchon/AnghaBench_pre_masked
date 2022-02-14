
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct ieee80211com {int dummy; } ;
struct rt2661_softc {int* txpow; int rffreq; scalar_t__ rf_rev; struct ieee80211_channel* sc_curchan; int rfprog; struct ieee80211com sc_ic; } ;
struct rfprog {scalar_t__ chan; int r1; int r2; int r3; int r4; } ;
struct ieee80211_channel {scalar_t__ ic_flags; } ;
typedef int int8_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_4 (struct rt2661_softc*,int) ;
 int FUNC_5 (struct rt2661_softc*,int,int) ;
 struct rfprog* VAR_9 ;
 struct rfprog* VAR_10 ;
 int FUNC_6 (struct rt2661_softc*,int ,int) ;
 int FUNC_7 (struct rt2661_softc*) ;
 int FUNC_8 (struct rt2661_softc*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_9(struct rt2661_softc *VAR_11, struct ieee80211_channel *VAR_12)
{
 struct ieee80211com *VAR_13 = &VAR_11->sc_ic;
 const struct rfprog *VAR_14;
 uint8_t VAR_15, VAR_16 = VAR_5;
 int8_t VAR_17;
 u_int VAR_18, VAR_19;

 VAR_19 = FUNC_3(VAR_13, VAR_12);
 FUNC_2(VAR_19 != 0 && VAR_19 != VAR_0, ("chan 0x%x", VAR_19));


 VAR_14 = (VAR_11->rfprog == 0) ? VAR_9 : VAR_10;


 for (VAR_18 = 0; VAR_14[VAR_18].chan != VAR_19; VAR_18++);

 VAR_17 = VAR_11->txpow[VAR_18];
 if (VAR_17 < 0) {
  VAR_16 += VAR_17;
  VAR_17 = 0;
 } else if (VAR_17 > 31) {
  VAR_16 += VAR_17 - 31;
  VAR_17 = 31;
 }





 if (VAR_12->ic_flags != VAR_11->sc_curchan->ic_flags) {
  FUNC_8(VAR_11, VAR_12);
  FUNC_7(VAR_11);
 }
 VAR_11->sc_curchan = VAR_12;

 FUNC_6(VAR_11, VAR_1, VAR_14[VAR_18].r1);
 FUNC_6(VAR_11, VAR_2, VAR_14[VAR_18].r2);
 FUNC_6(VAR_11, VAR_3, VAR_14[VAR_18].r3 | VAR_17 << 7);
 FUNC_6(VAR_11, VAR_4, VAR_14[VAR_18].r4 | VAR_11->rffreq << 10);

 FUNC_0(200);

 FUNC_6(VAR_11, VAR_1, VAR_14[VAR_18].r1);
 FUNC_6(VAR_11, VAR_2, VAR_14[VAR_18].r2);
 FUNC_6(VAR_11, VAR_3, VAR_14[VAR_18].r3 | VAR_17 << 7 | 1);
 FUNC_6(VAR_11, VAR_4, VAR_14[VAR_18].r4 | VAR_11->rffreq << 10);

 FUNC_0(200);

 FUNC_6(VAR_11, VAR_1, VAR_14[VAR_18].r1);
 FUNC_6(VAR_11, VAR_2, VAR_14[VAR_18].r2);
 FUNC_6(VAR_11, VAR_3, VAR_14[VAR_18].r3 | VAR_17 << 7);
 FUNC_6(VAR_11, VAR_4, VAR_14[VAR_18].r4 | VAR_11->rffreq << 10);


 VAR_15 = FUNC_4(VAR_11, 3);

 VAR_15 &= ~VAR_8;
 if (VAR_11->rf_rev == VAR_7 || VAR_11->rf_rev == VAR_6)
  VAR_15 |= VAR_8;

 FUNC_5(VAR_11, 3, VAR_15);

 if (VAR_16 != VAR_5)
  FUNC_5(VAR_11, 94, VAR_16);


 if (FUNC_1(VAR_12))
  FUNC_0(1000);
}
