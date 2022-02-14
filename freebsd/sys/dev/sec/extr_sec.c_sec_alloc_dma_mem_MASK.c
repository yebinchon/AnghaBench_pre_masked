
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int sc_dev; } ;
struct sec_dma_mem {int * dma_vaddr; int dma_tag; int dma_map; scalar_t__ dma_is_map; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ,int ,struct sec_dma_mem*,int) ;
 int FUNC_3 (int ,int **,int,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct sec_softc *VAR_7, struct sec_dma_mem *VAR_8,
    bus_size_t VAR_9)
{
 int VAR_10;

 if (VAR_8->dma_vaddr != ((void*)0))
  return (VAR_4);

 VAR_10 = FUNC_0(((void*)0),
  VAR_5, 0,
  VAR_3,
  VAR_2,
  ((void*)0), ((void*)0),
  VAR_9, 1,
  VAR_9, 0,
  ((void*)0), ((void*)0),
  &(VAR_8->dma_tag));

 if (VAR_10) {
  FUNC_5(VAR_7->sc_dev, "failed to allocate busdma tag, error"
      " %i!\n", VAR_10);
  goto err1;
 }

 VAR_10 = FUNC_3(VAR_8->dma_tag, &(VAR_8->dma_vaddr),
     VAR_0 | VAR_1, &(VAR_8->dma_map));

 if (VAR_10) {
  FUNC_5(VAR_7->sc_dev, "failed to allocate DMA safe"
      " memory, error %i!\n", VAR_10);
  goto err2;
 }

 VAR_10 = FUNC_2(VAR_8->dma_tag, VAR_8->dma_map,
      VAR_8->dma_vaddr, VAR_9, VAR_6, VAR_8,
      VAR_0);

 if (VAR_10) {
  FUNC_5(VAR_7->sc_dev, "cannot get address of the DMA"
      " memory, error %i\n", VAR_10);
  goto err3;
 }

 VAR_8->dma_is_map = 0;
 return (0);

err3:
 FUNC_4(VAR_8->dma_tag, VAR_8->dma_vaddr, VAR_8->dma_map);
err2:
 FUNC_1(VAR_8->dma_tag);
err1:
 VAR_8->dma_vaddr = ((void*)0);
 return(VAR_10);
}
