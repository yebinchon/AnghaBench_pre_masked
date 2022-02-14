
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {scalar_t__ sc_running; } ;
struct ieee80211com {struct rsu_softc* ic_softc; } ;


 int FUNC_0 (struct rsu_softc*) ;
 int FUNC_1 (struct rsu_softc*) ;
 int FUNC_2 (struct rsu_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_0)
{
 struct rsu_softc *VAR_1 = VAR_0->ic_softc;

 FUNC_0(VAR_1);
 if (VAR_1->sc_running)
  FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
