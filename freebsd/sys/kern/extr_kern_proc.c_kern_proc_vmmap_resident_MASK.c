
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_3__* vm_object_t ;
typedef TYPE_4__* vm_map_t ;
typedef TYPE_5__* vm_map_entry_t ;
struct TYPE_10__ {TYPE_3__* vm_object; } ;
struct TYPE_14__ {scalar_t__ start; scalar_t__ end; int offset; TYPE_1__ object; } ;
struct TYPE_13__ {int pmap; } ;
struct TYPE_12__ {int backing_object_offset; struct TYPE_12__* backing_object; } ;
struct TYPE_11__ {scalar_t__ pindex; scalar_t__ psind; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_2 ;

void
FUNC_5(vm_map_t VAR_3, vm_map_entry_t VAR_4,
    int *VAR_5, bool *VAR_6)
{
 vm_object_t VAR_7, VAR_8;
 vm_page_t VAR_9, VAR_10;
 vm_offset_t VAR_11;
 vm_paddr_t VAR_12;
 vm_pindex_t VAR_13, VAR_14, VAR_15;

 *VAR_6 = 0;
 *VAR_5 = 0;
 if (VAR_2)
  return;

 VAR_12 = 0;
 VAR_7 = VAR_4->object.vm_object;
 VAR_11 = VAR_4->start;
 VAR_10 = ((void*)0);
 VAR_13 = FUNC_1(VAR_4->offset);
 for (; VAR_11 < VAR_4->end; VAR_11 += FUNC_0(VAR_14), VAR_13 += VAR_14) {
  if (VAR_10 != ((void*)0)) {
   VAR_9 = VAR_10;
  } else {
   VAR_14 = FUNC_2(VAR_4->end - VAR_11);
   VAR_15 = VAR_13;
   for (VAR_8 = VAR_7;; VAR_8 = VAR_8->backing_object) {
    VAR_9 = FUNC_4(VAR_8, VAR_15);
    if (VAR_9 != ((void*)0)) {
     if (VAR_9->pindex == VAR_15)
      break;
     if (VAR_14 > VAR_9->pindex - VAR_15) {
      VAR_14 = VAR_9->pindex - VAR_15;
      VAR_10 = VAR_9;
     }
    }
    if (VAR_8->backing_object == ((void*)0))
     goto next;
    VAR_15 += FUNC_1(VAR_8->
        backing_object_offset);
   }
  }
  VAR_10 = ((void*)0);
  if (VAR_9->psind != 0 && VAR_11 + VAR_1[1] <= VAR_4->end &&
      (VAR_11 & (VAR_1[1] - 1)) == 0 &&
      (FUNC_3(VAR_3->pmap, VAR_11, &VAR_12) & VAR_0) != 0) {
   *VAR_6 = 1;
   VAR_14 = FUNC_2(VAR_1[1]);
  } else {







   VAR_14 = 1;
  }
  *VAR_5 += VAR_14;
next:;
 }
}
