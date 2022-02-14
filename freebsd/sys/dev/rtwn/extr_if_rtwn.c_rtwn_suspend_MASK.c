
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct rtwn_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;

void
FUNC_1(struct rtwn_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;

 FUNC_0(VAR_1);
}
