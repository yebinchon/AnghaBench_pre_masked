
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_mtx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtwn_softc*,int *,int ,char*,int ) ;

void
FUNC_3(struct rtwn_softc *VAR_0, int VAR_1)
{
 if (VAR_1 < 1000)
  FUNC_0(VAR_1);
 else {
  (void) FUNC_2(VAR_0, &VAR_0->sc_mtx, 0, "rtwn_pci",
      FUNC_1(VAR_1 / 1000));
 }
}
