
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_dma_mem {int * cdm_vaddr; int cdm_tag; int cdm_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct cesa_dma_mem *VAR_0)
{

 FUNC_1(VAR_0->cdm_tag, VAR_0->cdm_map);
 FUNC_2(VAR_0->cdm_tag, VAR_0->cdm_vaddr, VAR_0->cdm_map);
 FUNC_0(VAR_0->cdm_tag);
 VAR_0->cdm_vaddr = ((void*)0);
}
