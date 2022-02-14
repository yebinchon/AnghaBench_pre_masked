
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_dma_mem {int cdm_map; int cdm_tag; int * cdm_vaddr; } ;
typedef int bus_dmasync_op_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct cesa_dma_mem *VAR_0, bus_dmasync_op_t VAR_1)
{


        if (VAR_0->cdm_vaddr != ((void*)0))
  FUNC_0(VAR_0->cdm_tag, VAR_0->cdm_map, VAR_1);
}
