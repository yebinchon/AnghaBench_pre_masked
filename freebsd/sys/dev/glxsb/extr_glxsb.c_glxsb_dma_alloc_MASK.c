
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_dma_map {int dma_nsegs; int dma_size; int dma_map; int dma_vaddr; int dma_paddr; } ;
struct glxsb_softc {int sc_dmat; int sc_dev; struct glxsb_dma_map sc_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int *,int ) ;
 int FUNC_3 (int ,void**,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(struct glxsb_softc *VAR_7)
{
 struct glxsb_dma_map *VAR_8 = &VAR_7->sc_dma;
 int VAR_9;

 VAR_8->dma_nsegs = 1;
 VAR_8->dma_size = VAR_4 * 2;


 VAR_9 = FUNC_0(FUNC_5(VAR_7->sc_dev),
    VAR_5, 0,
    VAR_3,
    VAR_2,
    ((void*)0), ((void*)0),
    VAR_8->dma_size,
    VAR_8->dma_nsegs,
    VAR_8->dma_size,
    VAR_0,
    ((void*)0), ((void*)0),
    &VAR_7->sc_dmat);
 if (VAR_9 != 0) {
  FUNC_6(VAR_7->sc_dev,
      "cannot allocate DMA tag (%d)\n", VAR_9);
  return (VAR_9);
 }

 VAR_9 = FUNC_3(VAR_7->sc_dmat, (void **)&VAR_8->dma_vaddr,
     VAR_1, &VAR_8->dma_map);
 if (VAR_9 != 0) {
  FUNC_6(VAR_7->sc_dev,
      "cannot allocate DMA memory of %d bytes (%d)\n",
   VAR_8->dma_size, VAR_9);
  goto fail0;
 }

 VAR_9 = FUNC_2(VAR_7->sc_dmat, VAR_8->dma_map, VAR_8->dma_vaddr,
     VAR_8->dma_size, VAR_6, &VAR_8->dma_paddr, VAR_1);
 if (VAR_9 != 0) {
  FUNC_6(VAR_7->sc_dev,
      "cannot load DMA memory for %d bytes (%d)\n",
     VAR_8->dma_size, VAR_9);
  goto fail1;
 }

 return (0);

fail1:
 FUNC_4(VAR_7->sc_dmat, VAR_8->dma_vaddr, VAR_8->dma_map);
fail0:
 FUNC_1(VAR_7->sc_dmat);
 return (VAR_9);
}
