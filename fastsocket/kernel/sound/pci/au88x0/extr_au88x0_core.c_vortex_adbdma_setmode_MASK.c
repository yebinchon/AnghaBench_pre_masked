
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
typedef int u32 ;
struct TYPE_5__ {int dma_unknown; int dma_ctrl; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(vortex_t * VAR_8, int VAR_9, int VAR_10, int VAR_11,
        int VAR_12, int VAR_13, u32 VAR_14)
{
 stream_t *VAR_15 = &VAR_8->dma_adb[VAR_9];

 VAR_15->dma_unknown = VAR_13;
 VAR_15->dma_ctrl =
     ((VAR_14 & VAR_6) | (VAR_15->dma_ctrl & ~VAR_6));

 VAR_15->dma_ctrl =
     (VAR_15->dma_ctrl & ~VAR_4) | ((VAR_10 << VAR_5) & VAR_4);

 VAR_15->dma_ctrl =
     (VAR_15->dma_ctrl & ~VAR_0) | ((VAR_11 << VAR_1) & VAR_0);
 VAR_15->dma_ctrl =
     (VAR_15->dma_ctrl & ~VAR_2) | ((VAR_12 << VAR_3) & VAR_2);

 FUNC_1(VAR_8->mmio, VAR_7 + (VAR_9 << 2),
  VAR_15->dma_ctrl);
 FUNC_0(VAR_8->mmio, VAR_7 + (VAR_9 << 2));
}
