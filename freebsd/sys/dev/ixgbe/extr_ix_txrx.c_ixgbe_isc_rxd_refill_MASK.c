
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct rx_ring {TYPE_2__* rx_base; } ;
struct ix_rx_queue {struct rx_ring rxr; } ;
struct adapter {TYPE_3__* shared; struct ix_rx_queue* rx_queues; } ;
typedef TYPE_4__* if_rxd_update_t ;
struct TYPE_9__ {size_t iru_qsidx; size_t iru_pidx; int iru_count; int * iru_paddrs; } ;
struct TYPE_8__ {size_t* isc_nrxd; } ;
struct TYPE_6__ {int pkt_addr; } ;
struct TYPE_7__ {TYPE_1__ read; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, if_rxd_update_t VAR_1)
{
 struct adapter *VAR_2 = VAR_0;
 struct ix_rx_queue *VAR_3 = &VAR_2->rx_queues[VAR_1->iru_qsidx];
 struct rx_ring *VAR_4 = &VAR_3->rxr;
 uint64_t *VAR_5;
 int VAR_6;
 uint32_t VAR_7, VAR_8;
 uint16_t VAR_9;

 VAR_5 = VAR_1->iru_paddrs;
 VAR_8 = VAR_1->iru_pidx;
 VAR_9 = VAR_1->iru_count;

 for (VAR_6 = 0, VAR_7 = VAR_8; VAR_6 < VAR_9; VAR_6++) {
  VAR_4->rx_base[VAR_7].read.pkt_addr = FUNC_0(VAR_5[VAR_6]);
  if (++VAR_7 == VAR_2->shared->isc_nrxd[0])
   VAR_7 = 0;
 }
}
