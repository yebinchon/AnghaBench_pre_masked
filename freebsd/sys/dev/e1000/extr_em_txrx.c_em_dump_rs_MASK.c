
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct tx_ring {size_t tx_rs_cidx; size_t tx_rs_pidx; size_t* tx_rsq; int tx_cidx_processed; TYPE_3__* tx_base; } ;
struct em_tx_queue {struct tx_ring txr; } ;
struct adapter {size_t tx_num_queues; struct em_tx_queue* tx_queues; TYPE_4__* shared; } ;
typedef size_t qidx_t ;
typedef size_t int16_t ;
typedef TYPE_4__* if_softc_ctx_t ;
struct TYPE_8__ {size_t* isc_ntxd; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_1__ fields; } ;
struct TYPE_7__ {TYPE_2__ upper; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(struct adapter *VAR_1)
{
 if_softc_ctx_t VAR_2 = VAR_1->shared;
 struct em_tx_queue *VAR_3;
 struct tx_ring *VAR_4;
 qidx_t VAR_5, VAR_6, VAR_7, VAR_8;
 int16_t VAR_9;
 uint8_t VAR_10;

 FUNC_0("\n");
 VAR_6 = VAR_2->isc_ntxd[0];
 for (VAR_7 = 0; VAR_7 < VAR_1->tx_num_queues; VAR_7++) {
  VAR_3 = &VAR_1->tx_queues[VAR_7];
  VAR_4 = &VAR_3->txr;
  VAR_9 = VAR_4->tx_rs_cidx;
  if (VAR_9 != VAR_4->tx_rs_pidx) {
   VAR_8 = VAR_4->tx_rsq[VAR_9];
   VAR_10 = VAR_4->tx_base[VAR_8].upper.fields.status;
   if (!(VAR_10 & VAR_0))
    FUNC_0("qid[%d]->tx_rsq[%d]: %d clear ", VAR_7, VAR_9, VAR_8);
  } else {
   VAR_9 = (VAR_9-1)&(VAR_6-1);
   VAR_8 = VAR_4->tx_rsq[VAR_9];
   FUNC_0("qid[%d]->tx_rsq[rs_cidx-1=%d]: %d  ", VAR_7, VAR_9, VAR_8);
  }
  FUNC_0("cidx_prev=%d rs_pidx=%d ",VAR_4->tx_cidx_processed, VAR_4->tx_rs_pidx);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_4->tx_base[VAR_5].upper.fields.status & VAR_0)
    FUNC_0("%d set ", VAR_5);
  }
  FUNC_0("\n");
 }
}
