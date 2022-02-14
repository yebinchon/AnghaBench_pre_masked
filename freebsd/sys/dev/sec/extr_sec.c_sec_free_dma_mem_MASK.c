
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_dma_mem {int * dma_vaddr; int dma_tag; int dma_map; scalar_t__ dma_is_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct sec_dma_mem *VAR_0)
{


 if (VAR_0->dma_vaddr == ((void*)0))
  return;

 FUNC_2(VAR_0->dma_tag, VAR_0->dma_map);

 if (VAR_0->dma_is_map)
  FUNC_1(VAR_0->dma_tag, VAR_0->dma_map);
 else
  FUNC_3(VAR_0->dma_tag, VAR_0->dma_vaddr,
      VAR_0->dma_map);

 FUNC_0(VAR_0->dma_tag);
 VAR_0->dma_vaddr = ((void*)0);
}
