
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_softc {scalar_t__ sc_running; scalar_t__ sc_detached; } ;
struct ieee80211com {scalar_t__ ic_nrunning; struct ural_softc* ic_softc; } ;


 int FUNC_0 (struct ural_softc*) ;
 int FUNC_1 (struct ural_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ural_softc*) ;
 int FUNC_4 (struct ural_softc*) ;
 int FUNC_5 (struct ural_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_0)
{
 struct ural_softc *VAR_1 = VAR_0->ic_softc;
 int VAR_2 = 0;

 FUNC_0(VAR_1);
 if (VAR_1->sc_detached) {
  FUNC_1(VAR_1);
  return;
 }
 if (VAR_0->ic_nrunning > 0) {
  if (VAR_1->sc_running == 0) {
   FUNC_3(VAR_1);
   VAR_2 = 1;
  } else
   FUNC_4(VAR_1);
 } else if (VAR_1->sc_running)
  FUNC_5(VAR_1);
 FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0);
}
