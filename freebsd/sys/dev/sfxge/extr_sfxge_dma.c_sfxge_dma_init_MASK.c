
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int dev; int parent_dma_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct sfxge_softc *VAR_4)
{


 if (FUNC_0(FUNC_1(VAR_4->dev),
     1, 0,
     VAR_0,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_1,
     VAR_2,
     VAR_1,
     0,
     ((void*)0), ((void*)0),
     &VAR_4->parent_dma_tag) != 0) {
  FUNC_2(VAR_4->dev, "Cannot allocate parent DMA tag\n");
  return (VAR_3);
 }

 return (0);
}
