
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idmac_desc {int dummy; } ;
struct dwmmc_softc {int desc_count; int dev; int buf_map; int buf_tag; scalar_t__ desc_ring_paddr; TYPE_1__* desc_ring; int desc_map; int desc_tag; } ;
struct TYPE_2__ {scalar_t__ des3; scalar_t__ des1; int des0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(struct dwmmc_softc *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;




 VAR_10 = FUNC_0(
     FUNC_4(VAR_9->dev),
     4096, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6, 1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_9->desc_tag);
 if (VAR_10 != 0) {
  FUNC_5(VAR_9->dev,
      "could not create ring DMA tag.\n");
  return (1);
 }

 VAR_10 = FUNC_3(VAR_9->desc_tag, (void**)&VAR_9->desc_ring,
     VAR_0 | VAR_1 | VAR_2,
     &VAR_9->desc_map);
 if (VAR_10 != 0) {
  FUNC_5(VAR_9->dev,
      "could not allocate descriptor ring.\n");
  return (1);
 }

 VAR_10 = FUNC_2(VAR_9->desc_tag, VAR_9->desc_map,
     VAR_9->desc_ring, VAR_6, VAR_8,
     &VAR_9->desc_ring_paddr, 0);
 if (VAR_10 != 0) {
  FUNC_5(VAR_9->dev,
      "could not load descriptor ring map.\n");
  return (1);
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->desc_count; VAR_12++) {
  VAR_9->desc_ring[VAR_12].des0 = VAR_5;
  VAR_9->desc_ring[VAR_12].des1 = 0;
  VAR_11 = (VAR_12 + 1) % VAR_9->desc_count;
  VAR_9->desc_ring[VAR_12].des3 = VAR_9->desc_ring_paddr + (VAR_11 * sizeof(struct idmac_desc));

 }

 VAR_10 = FUNC_0(
     FUNC_4(VAR_9->dev),
     4096, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_9->desc_count * VAR_7,
     VAR_9->desc_count,
     VAR_7,
     0,
     ((void*)0), ((void*)0),
     &VAR_9->buf_tag);
 if (VAR_10 != 0) {
  FUNC_5(VAR_9->dev,
      "could not create ring DMA tag.\n");
  return (1);
 }

 VAR_10 = FUNC_1(VAR_9->buf_tag, 0,
     &VAR_9->buf_map);
 if (VAR_10 != 0) {
  FUNC_5(VAR_9->dev,
      "could not create TX buffer DMA map.\n");
  return (1);
 }

 return (0);
}
