
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_mem {int * dma_tag; int * virt_addr; int dma_map; scalar_t__ dma_addr; } ;
typedef int pqisrc_softstate_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

void FUNC_3(pqisrc_softstate_t *VAR_0, struct dma_mem *VAR_1)
{


 if(VAR_1->dma_addr) {
  FUNC_1(VAR_1->dma_tag, VAR_1->dma_map);
  VAR_1->dma_addr = 0;
 }

 if(VAR_1->virt_addr) {
  FUNC_2(VAR_1->dma_tag, VAR_1->virt_addr,
     VAR_1->dma_map);
  VAR_1->virt_addr = ((void*)0);
 }

 if(VAR_1->dma_tag) {
  FUNC_0(VAR_1->dma_tag);
  VAR_1->dma_tag = ((void*)0);
 }


}
