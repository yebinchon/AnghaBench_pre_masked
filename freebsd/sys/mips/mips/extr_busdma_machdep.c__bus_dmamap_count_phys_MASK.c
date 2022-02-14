
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_8__ {int maxsegsz; int alignment; int boundary; int lowaddr; } ;
struct TYPE_7__ {scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3, vm_paddr_t VAR_4,
    bus_size_t VAR_5, int VAR_6)
{
 bus_addr_t VAR_7;
 bus_size_t VAR_8;

 if (VAR_3->pagesneeded == 0) {
  FUNC_2(VAR_0, "lowaddr= %d, boundary= %d, alignment= %d",
      VAR_2->lowaddr, VAR_2->boundary, VAR_2->alignment);
  FUNC_1(VAR_0, "map= %p, pagesneeded= %d",
      VAR_3, VAR_3->pagesneeded);




  VAR_7 = VAR_4;
  while (VAR_5 != 0) {
   VAR_8 = FUNC_3(VAR_5, VAR_2->maxsegsz);
   if (FUNC_4(VAR_2, VAR_7) != 0) {
    VAR_8 = FUNC_3(VAR_8, VAR_1);
    VAR_3->pagesneeded++;
   }
   VAR_7 += VAR_8;
   VAR_5 -= VAR_8;
  }
  FUNC_0(VAR_0, "pagesneeded= %d\n", VAR_3->pagesneeded);
 }
}
