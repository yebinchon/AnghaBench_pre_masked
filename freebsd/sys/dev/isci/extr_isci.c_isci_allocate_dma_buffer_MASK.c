
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ISCI_MEMORY {int size; scalar_t__ virtual_address; int dma_map; int dma_tag; } ;
struct ISCI_CONTROLLER {int lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,void*,int ,int ,struct ISCI_MEMORY*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,char*) ;

int
FUNC_5(device_t VAR_7, struct ISCI_CONTROLLER *VAR_8,
    struct ISCI_MEMORY *VAR_9)
{
 uint32_t VAR_10;

 VAR_10 = FUNC_0(FUNC_3(VAR_7),
     0x40 ,
     VAR_4, VAR_1,
     VAR_1, ((void*)0), ((void*)0), VAR_9->size,
     0x1 ,
     VAR_9->size, 0, VAR_5, &VAR_8->lock,
     &VAR_9->dma_tag);

 if(VAR_10 == VAR_3) {
  FUNC_4(0, "ISCI", "bus_dma_tag_create failed\n");
  return (VAR_10);
 }

 VAR_10 = FUNC_2(VAR_9->dma_tag,
     (void **)&VAR_9->virtual_address, VAR_0, &VAR_9->dma_map);

 if(VAR_10 == VAR_3)
 {
  FUNC_4(0, "ISCI", "bus_dmamem_alloc failed\n");
  return (VAR_10);
 }

 VAR_10 = FUNC_1(VAR_9->dma_tag, VAR_9->dma_map,
     (void *)VAR_9->virtual_address, VAR_9->size,
     VAR_6, VAR_9, 0);

 if(VAR_10 == VAR_2)
 {
  FUNC_4(0, "ISCI", "bus_dmamap_load failed\n");
  return (VAR_10);
 }

 return (0);
}
