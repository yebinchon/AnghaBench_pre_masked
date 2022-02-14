
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwdma_seg {int v_addr; int dma_map; } ;
struct fwdma_alloc_multi {int dma_tag; int ssize; int nseg; struct fwdma_seg* seg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fwdma_alloc_multi*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

void
FUNC_3(struct fwdma_alloc_multi *VAR_1)
{
 struct fwdma_seg *VAR_2;

 for (VAR_2 = &VAR_1->seg[0]; VAR_1->nseg--; VAR_2++) {
  FUNC_2(VAR_1->dma_tag, VAR_2->dma_map,
   VAR_2->v_addr, VAR_1->ssize);
 }
 FUNC_0(VAR_1->dma_tag);
 FUNC_1(VAR_1, VAR_0);
}
