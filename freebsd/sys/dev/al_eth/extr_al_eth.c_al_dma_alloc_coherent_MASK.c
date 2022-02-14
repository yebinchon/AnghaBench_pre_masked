
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device {int dummy; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int,int *,int *,int *) ;
 int FUNC_1 (int ,int ,void*,int,int ,int *,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct device *VAR_5, bus_dma_tag_t *VAR_6, bus_dmamap_t *VAR_7,
    bus_addr_t *VAR_8, void **VAR_9, uint32_t VAR_10)
{
 int VAR_11;
 uint32_t VAR_12 = ((VAR_10 - 1)/VAR_3 + 1) * VAR_3;

 VAR_11 = FUNC_0(FUNC_3(VAR_5), 8, 0,
     VAR_2, VAR_2, ((void*)0), ((void*)0),
     VAR_12, 1, VAR_12, VAR_0, ((void*)0), ((void*)0), VAR_6);
 if (VAR_11 != 0) {
  FUNC_4(VAR_5,
      "failed to create bus tag, ret = %d\n", VAR_11);
  return (VAR_11);
 }

 VAR_11 = FUNC_2(*VAR_6, VAR_9,
     VAR_0 | VAR_1, VAR_7);
 if (VAR_11 != 0) {
  FUNC_4(VAR_5,
      "failed to allocate dmamem, ret = %d\n", VAR_11);
  return (VAR_11);
 }

 VAR_11 = FUNC_1(*VAR_6, *VAR_7, *VAR_9,
     VAR_10, VAR_4, VAR_8, 0);
 if (VAR_11 != 0) {
  FUNC_4(VAR_5,
      "failed to allocate bus_dmamap_load, ret = %d\n", VAR_11);
  return (VAR_11);
 }

 return (0);
}
