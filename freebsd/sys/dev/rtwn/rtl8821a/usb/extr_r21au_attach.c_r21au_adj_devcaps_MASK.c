
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_caps; int ic_htcaps; } ;
struct rtwn_softc {struct r12a_softc* sc_priv; struct ieee80211com sc_ic; } ;
struct r12a_softc {scalar_t__ rs_radar; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;
 struct r12a_softc *VAR_4 = VAR_2->sc_priv;

 VAR_3->ic_htcaps |= VAR_1;
 if (VAR_4->rs_radar != 0)
  VAR_3->ic_caps |= VAR_0;


}
