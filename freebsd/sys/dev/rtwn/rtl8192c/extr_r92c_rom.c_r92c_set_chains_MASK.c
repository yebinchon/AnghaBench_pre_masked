
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int ntxchains; int nrxchains; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_2)
{
 struct r92c_softc *VAR_3 = VAR_2->sc_priv;

 if (VAR_3->chip & VAR_0) {
  VAR_2->ntxchains = (VAR_3->chip & VAR_1) ? 1 : 2;
  VAR_2->nrxchains = 2;
 } else {
  VAR_2->ntxchains = 1;
  VAR_2->nrxchains = 1;
 }
}
