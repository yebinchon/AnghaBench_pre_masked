
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_9__ {scalar_t__ maxsegsz; int alignment; int boundary; int lowaddr; } ;
struct TYPE_8__ {scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ,int ,TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(bus_dma_tag_t VAR_3, bus_dmamap_t VAR_4, vm_paddr_t VAR_5,
    bus_size_t VAR_6, int VAR_7)
{
 bus_addr_t VAR_8;
 bus_size_t VAR_9;

 if (VAR_4->pagesneeded == 0) {
  FUNC_1(VAR_0, "lowaddr= %d, boundary= %d, alignment= %d"
      " map= %p, pagesneeded= %d",
      VAR_3->lowaddr, VAR_3->boundary, VAR_3->alignment,
      VAR_4, VAR_4->pagesneeded);




  VAR_8 = VAR_5;
  while (VAR_6 != 0) {
   VAR_9 = FUNC_2(VAR_6, VAR_3->maxsegsz);
   if (FUNC_3(VAR_3, VAR_4, VAR_8, VAR_9) != 0) {
    VAR_9 = FUNC_2(VAR_9,
        VAR_2 - (VAR_8 & VAR_1));
    VAR_4->pagesneeded++;
   }
   VAR_8 += VAR_9;
   VAR_6 -= VAR_9;
  }
  FUNC_0(VAR_0, "pagesneeded= %d", VAR_4->pagesneeded);
 }
}
