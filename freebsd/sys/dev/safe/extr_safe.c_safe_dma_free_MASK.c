
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safe_softc {int dummy; } ;
struct safe_dma_alloc {int dma_tag; int dma_map; int dma_vaddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct safe_softc *VAR_0, struct safe_dma_alloc *VAR_1)
{
 FUNC_1(VAR_1->dma_tag, VAR_1->dma_map);
 FUNC_2(VAR_1->dma_tag, VAR_1->dma_vaddr, VAR_1->dma_map);
 FUNC_0(VAR_1->dma_tag);
}
