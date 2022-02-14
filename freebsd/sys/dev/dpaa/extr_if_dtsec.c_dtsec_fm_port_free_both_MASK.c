
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int * sc_txph; int * sc_rxph; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct dtsec_softc *VAR_0)
{
 if (VAR_0->sc_rxph) {
  FUNC_0(VAR_0->sc_rxph);
  VAR_0->sc_rxph = ((void*)0);
 }

 if (VAR_0->sc_txph) {
  FUNC_0(VAR_0->sc_txph);
  VAR_0->sc_txph = ((void*)0);
 }
}
