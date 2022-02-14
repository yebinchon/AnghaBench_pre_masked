
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bus_size_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int ,int ,void*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,void**,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

void *
FUNC_3(bus_dma_tag_t VAR_1, bus_dmamap_t *VAR_2,
 bus_size_t VAR_3, bus_addr_t *VAR_4, int VAR_5)
{
 void *VAR_6;

 if (FUNC_1(VAR_1, &VAR_6, VAR_5, VAR_2)) {
  FUNC_2("fwdma_malloc_size: failed(1)\n");
  return (((void*)0));
 }
 FUNC_0(VAR_1, *VAR_2, VAR_6, VAR_3,
   VAR_0, VAR_4, 0);
 return (VAR_6);
}
