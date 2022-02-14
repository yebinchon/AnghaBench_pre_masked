
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct rx_ring {TYPE_3__* rx_base; } ;
struct ixl_vsi {TYPE_1__* rx_queues; TYPE_4__* shared; } ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef TYPE_5__* if_rxd_update_t ;
struct TYPE_11__ {size_t iru_qsidx; size_t iru_pidx; int iru_count; int * iru_paddrs; } ;
struct TYPE_10__ {size_t* isc_nrxd; } ;
struct TYPE_8__ {int pkt_addr; } ;
struct TYPE_9__ {TYPE_2__ read; } ;
struct TYPE_7__ {struct rx_ring rxr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, if_rxd_update_t VAR_1)
{
 struct ixl_vsi *VAR_2 = VAR_0;
 if_softc_ctx_t VAR_3 = VAR_2->shared;
 struct rx_ring *VAR_4 = &((VAR_2->rx_queues[VAR_1->iru_qsidx]).rxr);
 uint64_t *VAR_5;
 uint32_t VAR_6, VAR_7;
 uint16_t VAR_8;
 int VAR_9;

 VAR_5 = VAR_1->iru_paddrs;
 VAR_7 = VAR_1->iru_pidx;
 VAR_8 = VAR_1->iru_count;

 for (VAR_9 = 0, VAR_6 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
  VAR_4->rx_base[VAR_6].read.pkt_addr = FUNC_0(VAR_5[VAR_9]);
  if (++VAR_6 == VAR_3->isc_nrxd[0])
   VAR_6 = 0;
  }
}
