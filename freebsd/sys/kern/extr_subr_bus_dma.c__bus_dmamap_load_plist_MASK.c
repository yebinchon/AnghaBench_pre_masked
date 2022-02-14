
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_3__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int ,int ,int ,int ,int,int *,int*) ;

__attribute__((used)) static int
FUNC_1(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1,
    bus_dma_segment_t *VAR_2, int VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = 0;
 for (; VAR_3 > 0; VAR_3--, VAR_2++) {
  VAR_6 = FUNC_0(VAR_0, VAR_1,
      (vm_paddr_t)VAR_2->ds_addr, VAR_2->ds_len, VAR_5, ((void*)0),
      VAR_4);
  if (VAR_6)
   break;
 }
 return (VAR_6);
}
