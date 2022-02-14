
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkt_addr; } ;
union e1000_adv_rx_desc {TYPE_1__ read; } ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct rx_ring {int * rx_base; } ;
struct em_rx_queue {struct rx_ring rxr; } ;
struct adapter {struct em_rx_queue* rx_queues; TYPE_2__* shared; } ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef TYPE_3__* if_rxd_update_t ;
struct TYPE_7__ {size_t iru_qsidx; size_t iru_pidx; size_t iru_count; int * iru_paddrs; } ;
struct TYPE_6__ {size_t* isc_nrxd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, if_rxd_update_t VAR_1)
{
 struct adapter *VAR_2 = VAR_0;
 if_softc_ctx_t VAR_3 = VAR_2->shared;
 uint16_t VAR_4 = VAR_1->iru_qsidx;
 struct em_rx_queue *VAR_5 = &VAR_2->rx_queues[VAR_4];
 union e1000_adv_rx_desc *VAR_6;
 struct rx_ring *VAR_7 = &VAR_5->rxr;
 uint64_t *VAR_8;
 uint32_t VAR_9, VAR_10;
 uint16_t VAR_11;
 int VAR_12;

 VAR_8 = VAR_1->iru_paddrs;
 VAR_10 = VAR_1->iru_pidx;
 VAR_11 = VAR_1->iru_count;

 for (VAR_12 = 0, VAR_9 = VAR_10; VAR_12 < VAR_11; VAR_12++) {
  VAR_6 = (union e1000_adv_rx_desc *)&VAR_7->rx_base[VAR_9];

  VAR_6->read.pkt_addr = FUNC_0(VAR_8[VAR_12]);
  if (++VAR_9 == VAR_3->isc_nrxd[0])
   VAR_9 = 0;
 }
}
