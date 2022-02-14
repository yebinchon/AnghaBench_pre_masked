
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_17__ {int flags; int maxsegsz; int * segments; } ;
struct TYPE_16__ {scalar_t__ pagesneeded; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ,scalar_t__,int *,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

int
FUNC_7(bus_dma_tag_t VAR_3, bus_dmamap_t VAR_4,
    vm_paddr_t VAR_5, bus_size_t VAR_6, int VAR_7, bus_dma_segment_t *VAR_8,
    int *VAR_9)
{
 bus_addr_t VAR_10;
 bus_size_t VAR_11;
 int VAR_12;

 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_3->segments;

 if ((VAR_3->flags & VAR_0) != 0) {
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_4->pagesneeded != 0) {
   VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_7);
   if (VAR_12)
    return (VAR_12);
  }
 }

 while (VAR_6 > 0) {
  VAR_10 = VAR_5;
  VAR_11 = FUNC_0(VAR_6, VAR_3->maxsegsz);
  if (((VAR_3->flags & VAR_0) != 0) &&
      VAR_4->pagesneeded != 0 && FUNC_6(VAR_3, VAR_10)) {
   VAR_11 = FUNC_0(VAR_11, VAR_2);
   VAR_10 = FUNC_4(VAR_3, VAR_4, 0, VAR_10,
       VAR_11);
  }
  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_10, VAR_11, VAR_8,
      VAR_9);
  if (VAR_11 == 0)
   break;
  VAR_5 += VAR_11;
  VAR_6 -= VAR_11;
 }




 if (VAR_6 != 0) {
  FUNC_5(VAR_3, VAR_4);
  return (VAR_1);
 }
 return (0);
}
