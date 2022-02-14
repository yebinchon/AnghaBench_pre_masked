
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_dma_mem {int dma_map; int dma_tag; int * dma_vaddr; } ;
typedef int bus_dmasync_op_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct sec_dma_mem *VAR_0, bus_dmasync_op_t VAR_1)
{


 if (VAR_0->dma_vaddr != ((void*)0))
  FUNC_0(VAR_0->dma_tag, VAR_0->dma_map, VAR_1);
}
