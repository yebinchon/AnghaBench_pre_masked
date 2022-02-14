
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
struct TYPE_8__ {int flags; int alignment; int boundary; int lowaddr; } ;
struct TYPE_7__ {scalar_t__ pagesneeded; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_7(bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6, pmap_t VAR_7,
    void *VAR_8, bus_size_t VAR_9, int VAR_10)
{
 vm_offset_t VAR_11;
 vm_offset_t VAR_12;
 bus_addr_t VAR_13;

 if (VAR_6->pagesneeded == 0) {
  FUNC_2(VAR_1, "lowaddr= %d, boundary= %d, alignment= %d",
      VAR_5->lowaddr, VAR_5->boundary, VAR_5->alignment);
  FUNC_1(VAR_1, "map= %p, pagesneeded= %d",
      VAR_6, VAR_6->pagesneeded);




  VAR_11 = (vm_offset_t)VAR_8;
  VAR_12 = (vm_offset_t)VAR_8 + VAR_9;

  while (VAR_11 < VAR_12) {
   bus_size_t VAR_14;

   FUNC_3(VAR_4 == VAR_7, ("pmap is not kernel pmap"));
   VAR_14 = VAR_3 - ((vm_offset_t)VAR_11 & VAR_2);
   VAR_13 = FUNC_4(VAR_11);
   if (((VAR_5->flags & VAR_0) != 0) &&
       FUNC_6(VAR_5, VAR_13) != 0) {
    VAR_14 = FUNC_5(VAR_14, VAR_5->alignment);
    VAR_6->pagesneeded++;
   }
   VAR_11 += VAR_14;
  }
  FUNC_0(VAR_1, "pagesneeded= %d\n", VAR_6->pagesneeded);
 }
}
