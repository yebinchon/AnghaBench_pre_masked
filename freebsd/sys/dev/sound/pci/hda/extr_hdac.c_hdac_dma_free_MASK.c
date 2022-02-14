
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_softc {int dummy; } ;
struct hdac_dma {scalar_t__ dma_paddr; scalar_t__ dma_size; int * dma_tag; int * dma_vaddr; int dma_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct hdac_softc *VAR_2, struct hdac_dma *VAR_3)
{
 if (VAR_3->dma_paddr != 0) {

  FUNC_1(VAR_3->dma_tag, VAR_3->dma_map,
      VAR_0 | VAR_1);
  FUNC_2(VAR_3->dma_tag, VAR_3->dma_map);
  VAR_3->dma_paddr = 0;
 }
 if (VAR_3->dma_vaddr != ((void*)0)) {
  FUNC_3(VAR_3->dma_tag, VAR_3->dma_vaddr, VAR_3->dma_map);
  VAR_3->dma_vaddr = ((void*)0);
 }
 if (VAR_3->dma_tag != ((void*)0)) {
  FUNC_0(VAR_3->dma_tag);
  VAR_3->dma_tag = ((void*)0);
 }
 VAR_3->dma_size = 0;
}
