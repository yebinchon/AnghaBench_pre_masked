
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_softc {int sc_flags; int rvp_cnt; scalar_t__ sc_detached; } ;
struct ieee80211com {scalar_t__ ic_nrunning; struct run_softc* ic_softc; } ;


 int FUNC_0 (struct run_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct run_softc*) ;
 int FUNC_4 (struct run_softc*) ;
 int FUNC_5 (struct run_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_1)
{
 struct run_softc *VAR_2 = VAR_1->ic_softc;
 int VAR_3 = 0;

 FUNC_0(VAR_2);
 if (VAR_2->sc_detached) {
  FUNC_1(VAR_2);
  return;
 }

 if (VAR_1->ic_nrunning > 0) {
  if (!(VAR_2->sc_flags & VAR_0)) {
   VAR_3 = 1;
   FUNC_3(VAR_2);
  } else
   FUNC_5(VAR_2);
 } else if ((VAR_2->sc_flags & VAR_0) && VAR_2->rvp_cnt <= 1)
  FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1);
}
