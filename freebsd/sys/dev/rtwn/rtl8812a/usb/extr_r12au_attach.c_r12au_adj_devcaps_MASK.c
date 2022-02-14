
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_htcaps; } ;
struct rtwn_softc {struct ieee80211com sc_ic; struct r12a_softc* sc_priv; } ;
struct r12a_softc {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_3)
{
 struct r12a_softc *VAR_4 = VAR_3->sc_priv;
 struct ieee80211com *VAR_5 = &VAR_3->sc_ic;

 if (VAR_4->chip & VAR_2) {
  VAR_5->ic_htcaps |= VAR_0 |
     VAR_1;
 }


}
