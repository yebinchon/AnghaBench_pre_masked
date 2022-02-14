
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_softc {int sc_flags; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;


 int FUNC_0 (struct run_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct run_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_1)
{
 struct run_softc *VAR_2 = VAR_1->ic_softc;

 if ((VAR_2->sc_flags & VAR_0) == 0)
  return;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
