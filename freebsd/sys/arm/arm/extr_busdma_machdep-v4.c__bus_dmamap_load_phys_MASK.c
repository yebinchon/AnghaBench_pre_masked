
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct sync_list {int dataoffs; int datacount; int pages; scalar_t__ vaddr; } ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_17__ {int flags; scalar_t__ nsegments; scalar_t__ maxsegsz; } ;
struct TYPE_16__ {scalar_t__ pagesneeded; int sync_count; struct sync_list* slist; int * segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int *,int*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int ,int,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;

int
FUNC_10(bus_dma_tag_t VAR_7, bus_dmamap_t VAR_8, vm_paddr_t VAR_9,
    bus_size_t VAR_10, int VAR_11, bus_dma_segment_t *VAR_12, int *VAR_13)
{
 bus_addr_t VAR_14;
 bus_addr_t VAR_15 = 0;
 bus_size_t VAR_16;
 struct sync_list *VAR_17;
 int VAR_18;

 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_8->segments;

 FUNC_8(VAR_6, 1);
 FUNC_8(VAR_5, 1);

 if ((VAR_7->flags & VAR_0) != 0) {
  FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_8->pagesneeded != 0) {
   FUNC_8(VAR_4, 1);
   VAR_18 = FUNC_5(VAR_7, VAR_8, VAR_11);
   if (VAR_18)
    return (VAR_18);
  }
 }

 VAR_17 = VAR_8->slist + VAR_8->sync_count - 1;

 while (VAR_10 > 0) {
  VAR_14 = VAR_9;
  VAR_16 = FUNC_0(VAR_10, VAR_7->maxsegsz);
  if (((VAR_7->flags & VAR_0) != 0) &&
      VAR_8->pagesneeded != 0 && FUNC_9(VAR_7, VAR_14)) {
   VAR_16 = FUNC_0(VAR_16, VAR_3 - (VAR_14 & VAR_2));
   VAR_14 = FUNC_6(VAR_7, VAR_8, 0, VAR_14,
       VAR_16);
  } else {
   if (VAR_8->sync_count > 0)
    VAR_15 = FUNC_2(VAR_17->pages) +
        VAR_17->dataoffs + VAR_17->datacount;

   if (VAR_8->sync_count == 0 || VAR_14 != VAR_15) {
    if (++VAR_8->sync_count > VAR_7->nsegments)
     break;
    VAR_17++;
    VAR_17->vaddr = 0;
    VAR_17->datacount = VAR_16;
    VAR_17->pages = FUNC_1(VAR_14);
    VAR_17->dataoffs = VAR_14 & VAR_2;
   } else
    VAR_17->datacount += VAR_16;
  }
  VAR_16 = FUNC_3(VAR_7, VAR_8, VAR_14, VAR_16, VAR_12,
      VAR_13);
  if (VAR_16 == 0)
   break;
  VAR_9 += VAR_16;
  VAR_10 -= VAR_16;
 }




 if (VAR_10 != 0) {
  FUNC_7(VAR_7, VAR_8);
  return (VAR_1);
 }
 return (0);
}
