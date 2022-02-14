
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct bhnd_dma_translation {int dummy; } ;
typedef int device_t ;
typedef int bus_dma_tag_t ;


 int FUNC_0 (int *,int ,int ,int ,int *,struct bhnd_dma_translation*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

int
FUNC_3(device_t VAR_0, device_t VAR_1, u_int VAR_2,
    uint32_t VAR_3, bus_dma_tag_t *VAR_4,
    struct bhnd_dma_translation *VAR_5)
{
 if (FUNC_1(VAR_0) != ((void*)0)) {
  return (FUNC_0(FUNC_1(VAR_0),
      VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
 }

 FUNC_2("missing BHND_BUS_GET_DMA_TRANSLATION()");
}
