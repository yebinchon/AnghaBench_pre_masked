
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {scalar_t__ sc_running; } ;
struct ieee80211com {scalar_t__ ic_nrunning; struct otus_softc* ic_softc; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct otus_softc*) ;
 int FUNC_2 (struct otus_softc*) ;
 int FUNC_3 (struct otus_softc*) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211com *VAR_0)
{
 struct otus_softc *VAR_1 = VAR_0->ic_softc;
 int VAR_2 = 0;

 if (VAR_0->ic_nrunning > 0) {
  if (!VAR_1->sc_running) {
   FUNC_1(VAR_1);
   VAR_2 = 1;
  } else {
   (void) FUNC_2(VAR_1);
  }
 } else if (VAR_1->sc_running)
  FUNC_3(VAR_1);

 if (VAR_2)
  FUNC_0(VAR_0);
}
