
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct vm_page {int dummy; } ;
typedef scalar_t__ bus_size_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_page*) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int,int *,int*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

int
FUNC_3(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2,
    struct vm_page **VAR_3, bus_size_t VAR_4, int VAR_5, int VAR_6,
    bus_dma_segment_t *VAR_7, int *VAR_8)
{
 vm_paddr_t VAR_9;
 bus_size_t VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = 0;
 for (VAR_12 = 0; VAR_4 > 0; VAR_12++, VAR_4 -= VAR_10) {
  VAR_10 = FUNC_2(VAR_0 - VAR_5, VAR_4);
  VAR_9 = FUNC_0(VAR_3[VAR_12]) + VAR_5;
  VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_9, VAR_10,
      VAR_6, VAR_7, VAR_8);
  if (VAR_11 != 0)
   break;
  VAR_5 = 0;
 }
 return (VAR_11);
}
