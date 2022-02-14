
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int txq; int sched_dma; int sc_dmat; } ;
struct iwm_agn_scd_bc_tbl {int dummy; } ;


 int FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_0)
{

 return FUNC_0(VAR_0->sc_dmat, &VAR_0->sched_dma,
     FUNC_1(VAR_0->txq) * sizeof(struct iwm_agn_scd_bc_tbl), 1024);
}
