
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring {int tx_cidx_processed; int * tx_rsq; int tx_rs_pidx; int tx_rs_cidx; } ;
struct ixl_vsi {int num_tx_queues; struct ixl_tx_queue* tx_queues; TYPE_1__* shared; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int* isc_ntxd; } ;


 int VAR_0 ;

void
FUNC_0(struct ixl_vsi *VAR_1)
{
 if_softc_ctx_t VAR_2 = VAR_1->shared;
 struct ixl_tx_queue *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_3 = VAR_1->tx_queues; VAR_4 < VAR_1->num_tx_queues; VAR_4++, VAR_3++) {
  struct tx_ring *VAR_6 = &VAR_3->txr;

  VAR_6->tx_rs_cidx = VAR_6->tx_rs_pidx;






  VAR_6->tx_cidx_processed = VAR_2->isc_ntxd[0] - 1;

  for (VAR_5 = 0; VAR_5 < VAR_2->isc_ntxd[0]; VAR_5++)
   VAR_6->tx_rsq[VAR_5] = VAR_0;
 }
}
