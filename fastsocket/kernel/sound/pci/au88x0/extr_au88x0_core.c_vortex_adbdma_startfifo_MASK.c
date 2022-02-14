
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mmio; TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_7__ {int fifo_status; int fifo_enabled; int dma_unknown; int dma_ctrl; } ;
typedef TYPE_2__ stream_t ;





 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ,int,int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(vortex_t * VAR_1, int VAR_2)
{
 int VAR_3 = 0 , VAR_4 = 0 ;
 stream_t *VAR_5 = &VAR_1->dma_adb[VAR_2];

 switch (VAR_5->fifo_status) {
 case 129:
  FUNC_2(VAR_1, VAR_2,
     VAR_5->fifo_enabled ? 1 : 0);
  break;
 case 128:
  VAR_3 = 1;
  FUNC_0(VAR_1->mmio, VAR_0 + (VAR_2 << 2),
   VAR_5->dma_ctrl);
  FUNC_1(VAR_1, VAR_2, VAR_5->dma_unknown,
           VAR_4, VAR_3,
           VAR_5->fifo_enabled ? 1 : 0, 0);
  break;
 case 130:
  FUNC_1(VAR_1, VAR_2, VAR_5->dma_unknown,
           VAR_4, VAR_3,
           VAR_5->fifo_enabled ? 1 : 0, 0);
  break;
 }
 VAR_5->fifo_status = 129;
}
