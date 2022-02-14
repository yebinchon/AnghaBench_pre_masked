
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_softc {int ntxqsets; int nrxqsets; int * rx_cp_rings; int * tx_cp_rings; } ;
typedef int if_ctx_t ;


 int FUNC_0 (int *) ;
 struct bnxt_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0)
{
 struct bnxt_softc *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;





 for (VAR_2 = 0; VAR_2 < VAR_1->ntxqsets; VAR_2++)
  FUNC_0(&VAR_1->tx_cp_rings[VAR_2]);
 for (VAR_2 = 0; VAR_2 < VAR_1->nrxqsets; VAR_2++)
  FUNC_0(&VAR_1->rx_cp_rings[VAR_2]);

 return;
}
