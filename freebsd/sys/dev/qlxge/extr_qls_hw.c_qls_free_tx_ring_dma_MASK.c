
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* tx_ring; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_6__ {scalar_t__ privb_dma; scalar_t__ wq_dma; } ;
struct TYPE_7__ {TYPE_1__ flags; int privb_dma; int wq_dma; } ;


 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0, int VAR_1)
{
 if (VAR_0->tx_ring[VAR_1].flags.wq_dma) {
  FUNC_0(VAR_0, &VAR_0->tx_ring[VAR_1].wq_dma);
  VAR_0->tx_ring[VAR_1].flags.wq_dma = 0;
 }

 if (VAR_0->tx_ring[VAR_1].flags.privb_dma) {
  FUNC_0(VAR_0, &VAR_0->tx_ring[VAR_1].privb_dma);
  VAR_0->tx_ring[VAR_1].flags.privb_dma = 0;
 }
 return;
}
