
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int bus_size_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,void*,int ,int ,void*,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (int ,char*,char const*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7, bus_dma_tag_t *VAR_8, bus_dmamap_t *VAR_9,
    bus_size_t VAR_10, void **VAR_11, void *VAR_12, const char *VAR_13)
{
 int VAR_14;


 VAR_14 = FUNC_0(((void*)0),
     VAR_5, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_10, 1,
     VAR_10, 0,
     ((void*)0), ((void*)0),
     VAR_8);

 if (VAR_14) {
  FUNC_5(VAR_7, "failed to allocate busdma %s tag\n",
      VAR_13);
  (*VAR_11) = ((void*)0);
  return (VAR_4);
 }

 VAR_14 = FUNC_3(*VAR_8, VAR_11, VAR_0 | VAR_1,
     VAR_9);
 if (VAR_14) {
  FUNC_5(VAR_7, "failed to allocate %s DMA safe memory\n",
      VAR_13);
  FUNC_1(*VAR_8);
  (*VAR_11) = ((void*)0);
  return (VAR_4);
 }

 VAR_14 = FUNC_2(*VAR_8, *VAR_9, *VAR_11, VAR_10,
     VAR_6, VAR_12, VAR_0);
 if (VAR_14) {
  FUNC_5(VAR_7, "cannot get address of the %s "
      "descriptors\n", VAR_13);
  FUNC_4(*VAR_8, *VAR_11, *VAR_9);
  FUNC_1(*VAR_8);
  (*VAR_11) = ((void*)0);
  return (VAR_4);
 }

 return (0);
}
