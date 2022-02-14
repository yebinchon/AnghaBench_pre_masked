
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; TYPE_2__* dma_wt; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_5__ {int period_real; int period_virt; } ;
typedef TYPE_2__ stream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_1, int VAR_2, int VAR_3)
{
 stream_t *VAR_4 = &VAR_1->dma_wt[VAR_2];

 FUNC_0(VAR_1->mmio, VAR_0 + (VAR_2 << 2),
  VAR_3 << ((0xf - (VAR_2 & 0xf)) * 2));
 VAR_4->period_real = VAR_4->period_virt = VAR_3;
}
