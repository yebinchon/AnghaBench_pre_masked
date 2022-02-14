
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_long ;
struct sync_list {scalar_t__ vaddr; scalar_t__ datacount; scalar_t__ busaddr; } ;
struct pmap {int dummy; } ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_17__ {int flags; scalar_t__ maxsegsz; int nsegments; int alignment; int boundary; int lowaddr; int * segments; } ;
struct TYPE_16__ {scalar_t__ pagesneeded; int sync_count; struct sync_list* slist; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,scalar_t__,scalar_t__,int *,int*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,struct pmap*,void*,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 struct pmap* VAR_7 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;

int
FUNC_9(bus_dma_tag_t VAR_8, bus_dmamap_t VAR_9, void *VAR_10,
    bus_size_t VAR_11, struct pmap *VAR_12, int VAR_13, bus_dma_segment_t *VAR_14,
    int *VAR_15)
{
 bus_size_t VAR_16;
 bus_addr_t VAR_17;
 struct sync_list *VAR_18;
 vm_offset_t VAR_19 = (vm_offset_t)VAR_10;
 int VAR_20 = 0;


 if (VAR_14 == ((void*)0))
  VAR_14 = VAR_8->segments;
 if ((VAR_13 & VAR_1) != 0)
  VAR_9->flags |= VAR_2;

 if ((VAR_8->flags & VAR_0) != 0) {
  FUNC_3(VAR_8, VAR_9, VAR_12, VAR_10, VAR_11, VAR_13);
  if (VAR_9->pagesneeded != 0) {
   VAR_20 = FUNC_4(VAR_8, VAR_9, VAR_13);
   if (VAR_20)
    return (VAR_20);
  }
 }
 FUNC_0(VAR_4, "lowaddr= %d boundary= %d, "
     "alignment= %d", VAR_8->lowaddr, VAR_8->boundary, VAR_8->alignment);

 while (VAR_11 > 0) {






  FUNC_1(VAR_7 == VAR_12, ("pmap is not kernel pmap"));
  VAR_17 = FUNC_7(VAR_19);




  VAR_16 = VAR_6 - ((u_long)VAR_17 & VAR_5);
  if (VAR_16 > VAR_8->maxsegsz)
   VAR_16 = VAR_8->maxsegsz;
  if (VAR_11 < VAR_16)
   VAR_16 = VAR_11;

  if (((VAR_8->flags & VAR_0) != 0) &&
      VAR_9->pagesneeded != 0 && FUNC_8(VAR_8, VAR_17)) {
   VAR_17 = FUNC_5(VAR_8, VAR_9, VAR_19, VAR_17,
       VAR_16);
  } else {
   VAR_18 = &VAR_9->slist[VAR_9->sync_count - 1];
   if (VAR_9->sync_count == 0 ||
       VAR_19 != VAR_18->vaddr + VAR_18->datacount) {
    if (++VAR_9->sync_count > VAR_8->nsegments)
     goto cleanup;
    VAR_18++;
    VAR_18->vaddr = VAR_19;
    VAR_18->datacount = VAR_16;
    VAR_18->busaddr = VAR_17;
   } else
    VAR_18->datacount += VAR_16;
  }
  VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_17, VAR_16, VAR_14,
      VAR_15);
  if (VAR_16 == 0)
   break;
  VAR_19 += VAR_16;
  VAR_11 -= VAR_16;
 }

cleanup:



 if (VAR_11 != 0) {
  FUNC_6(VAR_8, VAR_9);
  VAR_20 = VAR_3;
 }
 return (VAR_20);
}
