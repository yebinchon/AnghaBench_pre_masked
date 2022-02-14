
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_txpowlimit; struct ath_softc* ic_softc; } ;
struct ath_softc {struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_1, u_long VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_1->iv_ic;
 struct ath_softc *VAR_4 = VAR_3->ic_softc;
 struct ath_hal *VAR_5 = VAR_4->sc_ah;

 switch (VAR_2) {
 case 128:





  if (!FUNC_0(VAR_5))
   FUNC_1(VAR_5, VAR_3->ic_txpowlimit);
  return 0;
 }

 return FUNC_2(VAR_4, VAR_0);
}
