
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int an_dtag; } ;
struct an_dma_alloc {scalar_t__ an_dma_vaddr; int an_dma_map; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct an_softc *VAR_0, struct an_dma_alloc *VAR_1)
{
 FUNC_0(VAR_0->an_dtag, VAR_1->an_dma_map);
 FUNC_1(VAR_0->an_dtag, VAR_1->an_dma_vaddr, VAR_1->an_dma_map);
 VAR_1->an_dma_vaddr = 0;
}
