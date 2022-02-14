
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdma_softc {int dev; } ;
struct pdma_channel {int desc_ring_paddr; int desc_ring; int desc_map; int desc_tag; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ) ;
 struct pdma_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8, struct pdma_channel *VAR_9)
{
 struct pdma_softc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_8);




 VAR_11 = FUNC_0(
     FUNC_3(VAR_10->dev),
     VAR_6, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_5, 1,
     VAR_5,
     0,
     ((void*)0), ((void*)0),
     &VAR_9->desc_tag);
 if (VAR_11 != 0) {
  FUNC_5(VAR_10->dev,
      "could not create TX ring DMA tag.\n");
  return (-1);
 }

 VAR_11 = FUNC_2(VAR_9->desc_tag, (void**)&VAR_9->desc_ring,
     VAR_0 | VAR_1 | VAR_2,
     &VAR_9->desc_map);
 if (VAR_11 != 0) {
  FUNC_5(VAR_10->dev,
      "could not allocate TX descriptor ring.\n");
  return (-1);
 }

 VAR_11 = FUNC_1(VAR_9->desc_tag, VAR_9->desc_map,
     VAR_9->desc_ring, VAR_5, VAR_7,
     &VAR_9->desc_ring_paddr, 0);
 if (VAR_11 != 0) {
  FUNC_5(VAR_10->dev,
      "could not load TX descriptor ring map.\n");
  return (-1);
 }

 return (0);
}
