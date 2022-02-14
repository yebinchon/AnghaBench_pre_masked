
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int nrxchains; int * rf_prog; } ;


 scalar_t__ FUNC_0 (struct rtwn_softc*,int *,int) ;

void
FUNC_1(struct rtwn_softc *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < VAR_0->nrxchains; VAR_1++, VAR_2++) {

  VAR_2 += FUNC_0(VAR_0, &VAR_0->rf_prog[VAR_2], VAR_1);
 }
}
