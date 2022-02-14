
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {scalar_t__ tx_ring; scalar_t__ rds_ring; scalar_t__ sds_ring; scalar_t__ context; } ;
struct TYPE_8__ {TYPE_1__ flags; int tx_ring; int * rds_ring; int * sds_ring; int context; } ;
struct TYPE_9__ {size_t num_sds_rings; size_t num_rds_rings; TYPE_2__ dma_buf; } ;
struct TYPE_10__ {TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;


 int FUNC_0 (TYPE_4__*,int *) ;

void
FUNC_1(qla_host_t *VAR_0)
{
 uint32_t VAR_1;

        if (VAR_0->hw.dma_buf.flags.context) {
  FUNC_0(VAR_0, &VAR_0->hw.dma_buf.context);
         VAR_0->hw.dma_buf.flags.context = 0;
 }

        if (VAR_0->hw.dma_buf.flags.sds_ring) {
  for (VAR_1 = 0; VAR_1 < VAR_0->hw.num_sds_rings; VAR_1++)
   FUNC_0(VAR_0, &VAR_0->hw.dma_buf.sds_ring[VAR_1]);
         VAR_0->hw.dma_buf.flags.sds_ring = 0;
 }

        if (VAR_0->hw.dma_buf.flags.rds_ring) {
  for (VAR_1 = 0; VAR_1 < VAR_0->hw.num_rds_rings; VAR_1++)
   FUNC_0(VAR_0, &VAR_0->hw.dma_buf.rds_ring[VAR_1]);
         VAR_0->hw.dma_buf.flags.rds_ring = 0;
 }

        if (VAR_0->hw.dma_buf.flags.tx_ring) {
  FUNC_0(VAR_0, &VAR_0->hw.dma_buf.tx_ring);
         VAR_0->hw.dma_buf.flags.tx_ring = 0;
 }
}
