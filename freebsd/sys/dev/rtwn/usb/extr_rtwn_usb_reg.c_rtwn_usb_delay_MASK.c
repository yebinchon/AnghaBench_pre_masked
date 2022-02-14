
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_mtx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct rtwn_softc *VAR_0, int VAR_1)
{


 if (VAR_1 < 1000)
  FUNC_0(VAR_1);
 else
  FUNC_2(&VAR_0->sc_mtx, FUNC_1(VAR_1 / 1000));
}
