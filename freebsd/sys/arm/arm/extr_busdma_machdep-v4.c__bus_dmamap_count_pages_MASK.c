
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_8__ {int alignment; int boundary; int lowaddr; } ;
struct TYPE_7__ {scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(bus_dma_tag_t VAR_3, bus_dmamap_t VAR_4, pmap_t VAR_5,
    void *VAR_6, bus_size_t VAR_7, int VAR_8)
{
 vm_offset_t VAR_9;
 vm_offset_t VAR_10;
 bus_addr_t VAR_11;

 if (VAR_4->pagesneeded == 0) {
  FUNC_2(VAR_0, "lowaddr= %d, boundary= %d, alignment= %d",
      VAR_3->lowaddr, VAR_3->boundary, VAR_3->alignment);
  FUNC_1(VAR_0, "map= %p, pagesneeded= %d",
      VAR_4, VAR_4->pagesneeded);




  VAR_9 = FUNC_7((vm_offset_t)VAR_6);
  VAR_10 = (vm_offset_t)VAR_6 + VAR_7;

  while (VAR_9 < VAR_10) {
   if (FUNC_3(VAR_5 == VAR_2))
    VAR_11 = FUNC_5(VAR_9);
   else
    VAR_11 = FUNC_4(VAR_5, VAR_9);
   if (FUNC_6(VAR_3, VAR_11) != 0)
    VAR_4->pagesneeded++;
   VAR_9 += VAR_1;
  }
  FUNC_0(VAR_0, "pagesneeded= %d\n", VAR_4->pagesneeded);
 }
}
