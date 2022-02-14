
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring {scalar_t__ tx_cidx_processed; } ;
struct ixl_vsi {int num_tx_queues; struct ixl_tx_queue* tx_queues; TYPE_1__* shared; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {scalar_t__* isc_ntxd; } ;



void
FUNC_0(struct ixl_vsi *VAR_0)
{
 if_softc_ctx_t VAR_1 = VAR_0->shared;
 struct ixl_tx_queue *VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_0->tx_queues; VAR_3 < VAR_0->num_tx_queues; VAR_3++, VAR_2++) {
  struct tx_ring *VAR_4 = &VAR_2->txr;

  VAR_4->tx_cidx_processed = VAR_1->isc_ntxd[0] - 1;
 }
}
