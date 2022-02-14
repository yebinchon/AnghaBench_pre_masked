
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic_softc {int dma_size; int buf_base; int buf_base_phys; int dma_map; int dma_tag; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,int *,int) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct aic_softc *VAR_5)
{
 device_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->dev;


 VAR_5->dma_size = 131072;





 VAR_7 = FUNC_0(
     FUNC_3(VAR_5->dev),
     4, VAR_5->dma_size,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_5->dma_size, 1,
     VAR_5->dma_size, 0,
     ((void*)0), ((void*)0),
     &VAR_5->dma_tag);
 if (VAR_7) {
  FUNC_5(VAR_6, "cannot create bus dma tag\n");
  return (-1);
 }

 VAR_7 = FUNC_2(VAR_5->dma_tag, (void **)&VAR_5->buf_base,
     VAR_1 | VAR_0, &VAR_5->dma_map);
 if (VAR_7) {
  FUNC_5(VAR_6, "cannot allocate memory\n");
  return (-1);
 }

 VAR_7 = FUNC_1(VAR_5->dma_tag, VAR_5->dma_map, VAR_5->buf_base,
     VAR_5->dma_size, VAR_4, &VAR_5->buf_base_phys, VAR_1);
 if (VAR_7) {
  FUNC_5(VAR_6, "cannot load DMA map\n");
  return (-1);
 }

 FUNC_4(VAR_5->buf_base, VAR_5->dma_size);

 return (0);
}
