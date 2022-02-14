
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct sync_list {int dataoffs; int datacount; scalar_t__ vaddr; int pages; } ;
struct pmap {int dummy; } ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_17__ {int flags; scalar_t__ maxsegsz; scalar_t__ nsegments; int alignment; int boundary; int lowaddr; } ;
struct TYPE_16__ {int flags; scalar_t__ pagesneeded; int sync_count; struct sync_list* slist; int * segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int *,int*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,struct pmap*,void*,scalar_t__,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,scalar_t__,int,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (int ,int) ;
 struct pmap* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (struct pmap*,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int) ;

int
FUNC_13(bus_dma_tag_t VAR_15, bus_dmamap_t VAR_16, void *VAR_17,
    bus_size_t VAR_18, struct pmap *VAR_19, int VAR_20, bus_dma_segment_t *VAR_21,
    int *VAR_22)
{
 bus_size_t VAR_23;
 bus_addr_t VAR_24;
 bus_addr_t VAR_25 = 0;
 struct sync_list *VAR_26;
 vm_offset_t VAR_27;
 vm_offset_t VAR_28 = (vm_offset_t)VAR_17;
 vm_offset_t VAR_29 = 0;
 int VAR_30 = 0;

 FUNC_9(VAR_14, 1);
 if (VAR_16->flags & VAR_3)
  FUNC_9(VAR_11, 1);
 if (VAR_16->flags & VAR_4)
  FUNC_9(VAR_12, 1);

 if (VAR_21 == ((void*)0))
  VAR_21 = VAR_16->segments;
 if (VAR_20 & VAR_1) {
  FUNC_9(VAR_13, 1);
  VAR_16->flags |= VAR_2;
 }

 if ((VAR_15->flags & VAR_0) != 0) {
  FUNC_5(VAR_15, VAR_16, VAR_19, VAR_17, VAR_18, VAR_20);
  if (VAR_16->pagesneeded != 0) {
   FUNC_9(VAR_10, 1);
   VAR_30 = FUNC_6(VAR_15, VAR_16, VAR_20);
   if (VAR_30)
    return (VAR_30);
  }
 }
 FUNC_0(VAR_6, "lowaddr= %d boundary= %d, "
     "alignment= %d", VAR_15->lowaddr, VAR_15->boundary, VAR_15->alignment);

 VAR_26 = VAR_16->slist + VAR_16->sync_count - 1;

 while (VAR_18 > 0) {



  if (FUNC_3(VAR_19 == VAR_9)) {
   VAR_24 = FUNC_11(VAR_28);
   VAR_27 = VAR_28;
  } else {
   VAR_24 = FUNC_10(VAR_19, VAR_28);
   VAR_16->flags &= ~VAR_3;
   VAR_27 = 0;
  }




  VAR_23 = VAR_8 - (VAR_24 & VAR_7);
  if (VAR_23 > VAR_15->maxsegsz)
   VAR_23 = VAR_15->maxsegsz;
  if (VAR_18 < VAR_23)
   VAR_23 = VAR_18;

  if (((VAR_15->flags & VAR_0) != 0) &&
      VAR_16->pagesneeded != 0 && FUNC_12(VAR_15, VAR_24)) {
   VAR_24 = FUNC_7(VAR_15, VAR_16, VAR_27, VAR_24,
       VAR_23);
  } else {
   if (VAR_16->sync_count > 0) {
    VAR_25 = FUNC_2(VAR_26->pages) +
        VAR_26->dataoffs + VAR_26->datacount;
    VAR_29 = VAR_26->vaddr + VAR_26->datacount;
   }

   if (VAR_16->sync_count == 0 ||
       (VAR_27 != 0 && VAR_27 != VAR_29) ||
       (VAR_27 == 0 && VAR_24 != VAR_25)) {

    if (++VAR_16->sync_count > VAR_15->nsegments)
     goto cleanup;
    VAR_26++;
    VAR_26->vaddr = VAR_27;
    VAR_26->datacount = VAR_23;
    VAR_26->pages = FUNC_1(VAR_24);
    VAR_26->dataoffs = VAR_24 & VAR_7;
   } else
    VAR_26->datacount += VAR_23;
  }
  VAR_23 = FUNC_4(VAR_15, VAR_16, VAR_24, VAR_23, VAR_21,
      VAR_22);
  if (VAR_23 == 0)
   break;
  VAR_28 += VAR_23;
  VAR_18 -= VAR_23;
 }

cleanup:



 if (VAR_18 != 0) {
  FUNC_8(VAR_15, VAR_16);
  return (VAR_5);
 }
 return (0);
}
