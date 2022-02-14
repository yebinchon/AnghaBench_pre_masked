
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_caps; } ;
struct rtwn_softc {struct ieee80211com sc_ic; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;





 VAR_2->ic_caps &= ~VAR_0;
}
