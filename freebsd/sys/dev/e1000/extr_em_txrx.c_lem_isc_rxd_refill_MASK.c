
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct rx_ring {int * rx_base; } ;
struct em_rx_queue {struct rx_ring rxr; } ;
struct e1000_rx_desc {scalar_t__ status; int buffer_addr; } ;
struct adapter {struct em_rx_queue* rx_queues; TYPE_1__* shared; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef TYPE_2__* if_rxd_update_t ;
struct TYPE_5__ {size_t iru_qsidx; size_t iru_pidx; int iru_count; int * iru_paddrs; } ;
struct TYPE_4__ {size_t* isc_nrxd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, if_rxd_update_t VAR_1)
{
 struct adapter *VAR_2 = VAR_0;
 if_softc_ctx_t VAR_3 = VAR_2->shared;
 struct em_rx_queue *VAR_4 = &VAR_2->rx_queues[VAR_1->iru_qsidx];
 struct rx_ring *VAR_5 = &VAR_4->rxr;
 struct e1000_rx_desc *VAR_6;
 uint64_t *VAR_7;
 uint32_t VAR_8, VAR_9;
 uint16_t VAR_10;
 int VAR_11;

 VAR_7 = VAR_1->iru_paddrs;
 VAR_9 = VAR_1->iru_pidx;
 VAR_10 = VAR_1->iru_count;

 for (VAR_11 = 0, VAR_8 = VAR_9; VAR_11 < VAR_10; VAR_11++) {
  VAR_6 = (struct e1000_rx_desc *)&VAR_5->rx_base[VAR_8];
  VAR_6->buffer_addr = FUNC_0(VAR_7[VAR_11]);

  VAR_6->status = 0;

  if (++VAR_8 == VAR_3->isc_nrxd[0])
   VAR_8 = 0;
 }
}
