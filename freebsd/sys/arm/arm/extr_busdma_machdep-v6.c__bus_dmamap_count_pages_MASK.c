
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_9__ {int alignment; int boundary; int lowaddr; } ;
struct TYPE_8__ {scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ,int ,TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(bus_dma_tag_t VAR_4, pmap_t VAR_5, bus_dmamap_t VAR_6,
    void *VAR_7, bus_size_t VAR_8, int VAR_9)
{
 vm_offset_t VAR_10;
 vm_offset_t VAR_11;
 bus_addr_t VAR_12;

 if (VAR_6->pagesneeded == 0) {
  FUNC_1(VAR_0, "lowaddr= %d, boundary= %d, alignment= %d"
      " map= %p, pagesneeded= %d",
      VAR_4->lowaddr, VAR_4->boundary, VAR_4->alignment,
      VAR_6, VAR_6->pagesneeded);




  VAR_10 = (vm_offset_t)VAR_7;
  VAR_11 = (vm_offset_t)VAR_7 + VAR_8;

  while (VAR_10 < VAR_11) {
   if (FUNC_2(VAR_5 == VAR_3))
    VAR_12 = FUNC_6(VAR_10);
   else
    VAR_12 = FUNC_5(VAR_5, VAR_10);
   if (FUNC_4(VAR_4, VAR_6, VAR_12,
       FUNC_3(VAR_11 - VAR_10, (VAR_2 - ((vm_offset_t)VAR_10 &
       VAR_1)))) != 0) {
    VAR_6->pagesneeded++;
   }
   VAR_10 += (VAR_2 - ((vm_offset_t)VAR_10 & VAR_1));

  }
  FUNC_0(VAR_0, "pagesneeded= %d", VAR_6->pagesneeded);
 }
}
