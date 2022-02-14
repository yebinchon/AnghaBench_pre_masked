
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {scalar_t__ sc_detached; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211com {scalar_t__ ic_nrunning; int ic_vaps; struct rum_softc* ic_softc; } ;


 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (struct ieee80211vap*) ;
 scalar_t__ FUNC_5 (struct rum_softc*) ;
 int FUNC_6 (struct rum_softc*) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211com *VAR_0)
{
 struct rum_softc *VAR_1 = VAR_0->ic_softc;
 struct ieee80211vap *VAR_2 = FUNC_2(&VAR_0->ic_vaps);

 FUNC_0(VAR_1);
 if (VAR_1->sc_detached) {
  FUNC_1(VAR_1);
  return;
 }
 FUNC_1(VAR_1);

 if (VAR_0->ic_nrunning > 0) {
  if (FUNC_5(VAR_1) == 0)
   FUNC_3(VAR_0);
  else
   FUNC_4(VAR_2);
 } else
  FUNC_6(VAR_1);
}
