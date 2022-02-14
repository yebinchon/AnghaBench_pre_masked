
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* rx_ring; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_6__ {scalar_t__ lb_dma; scalar_t__ sbq_dma; scalar_t__ lbq_dma; scalar_t__ cq_dma; } ;
struct TYPE_7__ {TYPE_1__ flags; int lb_dma; int sbq_dma; int lbq_dma; int cq_dma; } ;


 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0, int VAR_1)
{
 if (VAR_0->rx_ring[VAR_1].flags.cq_dma) {
  FUNC_0(VAR_0, &VAR_0->rx_ring[VAR_1].cq_dma);
  VAR_0->rx_ring[VAR_1].flags.cq_dma = 0;
 }

 if (VAR_0->rx_ring[VAR_1].flags.lbq_dma) {
  FUNC_0(VAR_0, &VAR_0->rx_ring[VAR_1].lbq_dma);
  VAR_0->rx_ring[VAR_1].flags.lbq_dma = 0;
 }

 if (VAR_0->rx_ring[VAR_1].flags.sbq_dma) {
  FUNC_0(VAR_0, &VAR_0->rx_ring[VAR_1].sbq_dma);
  VAR_0->rx_ring[VAR_1].flags.sbq_dma = 0;
 }

 if (VAR_0->rx_ring[VAR_1].flags.lb_dma) {
  FUNC_0(VAR_0, &VAR_0->rx_ring[VAR_1].lb_dma);
  VAR_0->rx_ring[VAR_1].flags.lb_dma = 0;
 }
 return;
}
