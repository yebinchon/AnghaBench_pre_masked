
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_3__ {int flags; scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3, vm_paddr_t VAR_4,
    bus_size_t VAR_5, int VAR_6)
{

 if ((VAR_3->flags & VAR_0) != 0 && VAR_3->pagesneeded == 0) {
  FUNC_1(VAR_2, VAR_4, VAR_5, &VAR_3->pagesneeded);
  FUNC_0(VAR_1, "pagesneeded= %d\n", VAR_3->pagesneeded);
 }
}
