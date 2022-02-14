
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_9__ {int alignment; int boundary; int lowaddr; } ;
struct TYPE_8__ {TYPE_3__ common; } ;
struct TYPE_7__ {int flags; scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_8(bus_dma_tag_t VAR_6, bus_dmamap_t VAR_7, pmap_t VAR_8,
    void *VAR_9, bus_size_t VAR_10, int VAR_11)
{
 vm_offset_t VAR_12;
 vm_offset_t VAR_13;
 bus_addr_t VAR_14;
 bus_size_t VAR_15;

 if ((VAR_7->flags & VAR_0) != 0 && VAR_7->pagesneeded == 0) {
  FUNC_2(VAR_1, "lowaddr= %d Maxmem= %d, boundary= %d, "
      "alignment= %d", VAR_6->common.lowaddr,
      FUNC_6((vm_paddr_t)VAR_2),
      VAR_6->common.boundary, VAR_6->common.alignment);
  FUNC_1(VAR_1, "map= %p, pagesneeded= %d", VAR_7,
      VAR_7->pagesneeded);




  VAR_12 = (vm_offset_t)VAR_9;
  VAR_13 = (vm_offset_t)VAR_9 + VAR_10;

  while (VAR_12 < VAR_13) {
   VAR_15 = VAR_4 - ((vm_offset_t)VAR_12 & VAR_3);
   if (VAR_8 == VAR_5)
    VAR_14 = FUNC_5(VAR_12);
   else
    VAR_14 = FUNC_4(VAR_8, VAR_12);
   if (FUNC_3(&VAR_6->common, VAR_14) != 0) {
    VAR_15 = FUNC_7(VAR_15,
        VAR_6->common.alignment);
    VAR_7->pagesneeded++;
   }
   VAR_12 += VAR_15;
  }
  FUNC_0(VAR_1, "pagesneeded= %d\n", VAR_7->pagesneeded);
 }
}
