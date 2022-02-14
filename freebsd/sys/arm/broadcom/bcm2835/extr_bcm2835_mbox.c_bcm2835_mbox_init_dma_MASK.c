
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,void*,size_t,int ,int *,int ) ;
 int FUNC_3 (int ,void**,int ,int *) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void *
FUNC_7(device_t VAR_3, size_t VAR_4, bus_dma_tag_t *VAR_5,
    bus_dmamap_t *VAR_6, bus_addr_t *VAR_7)
{
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(FUNC_5(VAR_3), 16, 0,
     VAR_1, VAR_0, ((void*)0), ((void*)0),
     VAR_4, 1, VAR_4, 0, ((void*)0), ((void*)0), VAR_5);
 if (VAR_9 != 0) {
  FUNC_6(VAR_3, "can't create DMA tag\n");
  return (((void*)0));
 }

 VAR_9 = FUNC_3(*VAR_5, &VAR_8, 0, VAR_6);
 if (VAR_9 != 0) {
  FUNC_1(*VAR_5);
  FUNC_6(VAR_3, "can't allocate dmamem\n");
  return (((void*)0));
 }

 VAR_9 = FUNC_2(*VAR_5, *VAR_6, VAR_8, VAR_4, VAR_2,
     VAR_7, 0);
 if (VAR_9 != 0) {
  FUNC_4(*VAR_5, VAR_8, *VAR_6);
  FUNC_1(*VAR_5);
  FUNC_6(VAR_3, "can't load DMA map\n");
  return (((void*)0));
 }

 return (VAR_8);
}
