
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_softc {int dummy; } ;
struct vmci_dma_alloc {scalar_t__ dma_paddr; int * dma_tag; int dma_map; int * dma_vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct vmci_dma_alloc*,int) ;

__attribute__((used)) static void
FUNC_5(struct vmci_softc *VAR_2, struct vmci_dma_alloc *VAR_3)
{

 if (VAR_3->dma_tag != ((void*)0)) {
  if (VAR_3->dma_paddr != 0) {
   FUNC_1(VAR_3->dma_tag, VAR_3->dma_map,
       VAR_0 | VAR_1);
   FUNC_2(VAR_3->dma_tag, VAR_3->dma_map);
  }

  if (VAR_3->dma_vaddr != ((void*)0))
   FUNC_3(VAR_3->dma_tag, VAR_3->dma_vaddr,
       VAR_3->dma_map);

  FUNC_0(VAR_3->dma_tag);
 }
 FUNC_4(VAR_3, sizeof(struct vmci_dma_alloc));
}
