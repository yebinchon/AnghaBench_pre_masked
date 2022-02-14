
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status_error; } ;
struct TYPE_9__ {TYPE_2__ upper; } ;
struct TYPE_7__ {int buffer_addr; } ;
union e1000_rx_desc_extended {TYPE_3__ wb; TYPE_1__ read; } ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct rx_ring {union e1000_rx_desc_extended* rx_base; } ;
struct em_rx_queue {struct rx_ring rxr; } ;
struct adapter {struct em_rx_queue* rx_queues; TYPE_4__* shared; } ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef TYPE_5__* if_rxd_update_t ;
struct TYPE_11__ {size_t iru_qsidx; size_t iru_pidx; size_t iru_count; int * iru_paddrs; } ;
struct TYPE_10__ {size_t* isc_nrxd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, if_rxd_update_t VAR_1)
{
 struct adapter *VAR_2 = VAR_0;
 if_softc_ctx_t VAR_3 = VAR_2->shared;
 uint16_t VAR_4 = VAR_1->iru_qsidx;
 struct em_rx_queue *VAR_5 = &VAR_2->rx_queues[VAR_4];
 struct rx_ring *VAR_6 = &VAR_5->rxr;
 union e1000_rx_desc_extended *VAR_7;
 uint64_t *VAR_8;
 uint32_t VAR_9, VAR_10;
 uint16_t VAR_11;
 int VAR_12;

 VAR_8 = VAR_1->iru_paddrs;
 VAR_10 = VAR_1->iru_pidx;
 VAR_11 = VAR_1->iru_count;

 for (VAR_12 = 0, VAR_9 = VAR_10; VAR_12 < VAR_11; VAR_12++) {
  VAR_7 = &VAR_6->rx_base[VAR_9];
  VAR_7->read.buffer_addr = FUNC_0(VAR_8[VAR_12]);

  VAR_7->wb.upper.status_error = 0;

  if (++VAR_9 == VAR_3->isc_nrxd[0])
   VAR_9 = 0;
 }
}
