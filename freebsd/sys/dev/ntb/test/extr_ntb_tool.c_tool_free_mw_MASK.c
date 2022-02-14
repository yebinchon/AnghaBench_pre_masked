
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_mw {scalar_t__ size; scalar_t__ mm_base; scalar_t__ dma_map; scalar_t__ dma_tag; scalar_t__ dma_base; scalar_t__ virt_addr; } ;
struct tool_ctx {int dev; TYPE_1__* peers; } ;
struct TYPE_2__ {struct tool_mw* inmws; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct tool_ctx *VAR_0, int VAR_1, int VAR_2)
{
 struct tool_mw *VAR_3 = &VAR_0->peers[VAR_1].inmws[VAR_2];

 if (VAR_3->dma_base)
  FUNC_3(VAR_0->dev, VAR_2);

 if (VAR_3->virt_addr && VAR_3->dma_tag) {
  FUNC_1(VAR_3->dma_tag, VAR_3->dma_map);
  FUNC_2(VAR_3->dma_tag, VAR_3->virt_addr, VAR_3->dma_map);
  FUNC_0(VAR_3->dma_tag);
 }

 VAR_3->virt_addr = 0;
 VAR_3->dma_base = 0;
 VAR_3->dma_tag = 0;
 VAR_3->dma_map = 0;
 VAR_3->mm_base = 0;
 VAR_3->size = 0;
}
