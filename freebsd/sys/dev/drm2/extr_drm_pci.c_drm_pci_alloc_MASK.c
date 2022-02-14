
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {int dev; int dma_lock; } ;
struct TYPE_6__ {int tag; int map; int vaddr; } ;
typedef TYPE_1__ drm_dma_handle_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,size_t,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,size_t,int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int *,int,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (int,int ,int) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *) ;

drm_dma_handle_t *FUNC_11(struct drm_device * VAR_10, size_t VAR_11,
    size_t VAR_12, dma_addr_t VAR_13)
{
 drm_dma_handle_t *VAR_14;
 int VAR_15;


 if ((VAR_12 & (VAR_12 - 1)) != 0) {
  FUNC_0("drm_pci_alloc with non-power-of-two alignment %d\n",
      (int)VAR_12);
  return ((void*)0);
 }

 VAR_14 = FUNC_8(sizeof(drm_dma_handle_t), VAR_5, VAR_8 | VAR_7);
 if (VAR_14 == ((void*)0))
  return ((void*)0);


 FUNC_9(&VAR_10->dma_lock, VAR_6);
 if (FUNC_10(&VAR_10->dma_lock))
     FUNC_0("called while holding dma_lock\n");

 VAR_15 = FUNC_1(
     FUNC_6(VAR_10->dev),
     VAR_12, 0,
     VAR_13, VAR_4,
     ((void*)0), ((void*)0),
     VAR_11, 1, VAR_11,
     0, ((void*)0), ((void*)0),
     &VAR_14->tag);
 if (VAR_15 != 0) {
  FUNC_7(VAR_14, VAR_5);
  return ((void*)0);
 }

 VAR_15 = FUNC_4(VAR_14->tag, &VAR_14->vaddr,
     VAR_2 | VAR_3 | VAR_0, &VAR_14->map);
 if (VAR_15 != 0) {
  FUNC_2(VAR_14->tag);
  FUNC_7(VAR_14, VAR_5);
  return ((void*)0);
 }

 VAR_15 = FUNC_3(VAR_14->tag, VAR_14->map, VAR_14->vaddr, VAR_11,
     VAR_9, VAR_14, VAR_1);
 if (VAR_15 != 0) {
  FUNC_5(VAR_14->tag, VAR_14->vaddr, VAR_14->map);
  FUNC_2(VAR_14->tag);
  FUNC_7(VAR_14, VAR_5);
  return ((void*)0);
 }

 return VAR_14;
}
