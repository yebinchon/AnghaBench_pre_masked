
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwdma_alloc {int dma_tag; int dma_map; int v_addr; } ;
struct firewire_comm {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(struct firewire_comm *VAR_0, struct fwdma_alloc *VAR_1)
{
        FUNC_1(VAR_1->dma_tag, VAR_1->dma_map);
 FUNC_2(VAR_1->dma_tag, VAR_1->v_addr, VAR_1->dma_map);
 FUNC_0(VAR_1->dma_tag);
}
