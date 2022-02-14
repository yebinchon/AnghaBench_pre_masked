
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {struct ieee80211_channel* ic_curchan; } ;
struct rum_softc {scalar_t__ rf_rev; int* txpow; int rffreq; struct ieee80211com sc_ic; } ;
struct rfprog {int chan; int r1; int r2; int r3; int r4; } ;
struct ieee80211_channel {scalar_t__ ic_flags; } ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_1 (struct rum_softc*,int) ;
 int FUNC_2 (struct rum_softc*,int,int) ;
 int FUNC_3 (struct rum_softc*,int) ;
 struct rfprog* VAR_10 ;
 struct rfprog* VAR_11 ;
 int FUNC_4 (struct rum_softc*,int ,int) ;
 int FUNC_5 (struct rum_softc*) ;
 int FUNC_6 (struct rum_softc*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_7(struct rum_softc *VAR_12, struct ieee80211_channel *VAR_13)
{
 struct ieee80211com *VAR_14 = &VAR_12->sc_ic;
 const struct rfprog *VAR_15;
 uint8_t VAR_16, VAR_17 = VAR_1;
 int8_t VAR_18;
 int VAR_19, VAR_20;

 VAR_20 = FUNC_0(VAR_14, VAR_13);
 if (VAR_20 == 0 || VAR_20 == VAR_0)
  return;


 VAR_15 = (VAR_12->rf_rev == VAR_7 ||
    VAR_12->rf_rev == VAR_6) ? VAR_10 : VAR_11;


 for (VAR_19 = 0; VAR_15[VAR_19].chan != VAR_20; VAR_19++);

 VAR_18 = VAR_12->txpow[VAR_19];
 if (VAR_18 < 0) {
  VAR_17 += VAR_18;
  VAR_18 = 0;
 } else if (VAR_18 > 31) {
  VAR_17 += VAR_18 - 31;
  VAR_18 = 31;
 }





 if (VAR_13->ic_flags != VAR_14->ic_curchan->ic_flags) {
  FUNC_6(VAR_12, VAR_13);
  FUNC_5(VAR_12);
 }
 VAR_14->ic_curchan = VAR_13;

 FUNC_4(VAR_12, VAR_2, VAR_15[VAR_19].r1);
 FUNC_4(VAR_12, VAR_3, VAR_15[VAR_19].r2);
 FUNC_4(VAR_12, VAR_4, VAR_15[VAR_19].r3 | VAR_18 << 7);
 FUNC_4(VAR_12, VAR_5, VAR_15[VAR_19].r4 | VAR_12->rffreq << 10);

 FUNC_4(VAR_12, VAR_2, VAR_15[VAR_19].r1);
 FUNC_4(VAR_12, VAR_3, VAR_15[VAR_19].r2);
 FUNC_4(VAR_12, VAR_4, VAR_15[VAR_19].r3 | VAR_18 << 7 | 1);
 FUNC_4(VAR_12, VAR_5, VAR_15[VAR_19].r4 | VAR_12->rffreq << 10);

 FUNC_4(VAR_12, VAR_2, VAR_15[VAR_19].r1);
 FUNC_4(VAR_12, VAR_3, VAR_15[VAR_19].r2);
 FUNC_4(VAR_12, VAR_4, VAR_15[VAR_19].r3 | VAR_18 << 7);
 FUNC_4(VAR_12, VAR_5, VAR_15[VAR_19].r4 | VAR_12->rffreq << 10);

 FUNC_3(VAR_12, VAR_9 / 100);


 VAR_16 = FUNC_1(VAR_12, 3);

 VAR_16 &= ~VAR_8;
 if (VAR_12->rf_rev == VAR_7 || VAR_12->rf_rev == VAR_6)
  VAR_16 |= VAR_8;

 FUNC_2(VAR_12, 3, VAR_16);

 if (VAR_17 != VAR_1)
  FUNC_2(VAR_12, 94, VAR_17);


 FUNC_3(VAR_12, VAR_9 / 100);
}
