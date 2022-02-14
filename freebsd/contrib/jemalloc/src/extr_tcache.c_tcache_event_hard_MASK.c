
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_14__ {size_t next_gc_bin; int* lg_fill_div; } ;
typedef TYPE_1__ tcache_t ;
typedef size_t szind_t ;
struct TYPE_15__ {int low_water; int ncached; } ;
typedef TYPE_2__ cache_bin_t ;
struct TYPE_16__ {int ncached_max; } ;
typedef TYPE_3__ cache_bin_info_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,size_t,int,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__*,size_t,int) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,size_t) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,size_t) ;

void
FUNC_4(tsd_t *VAR_3, tcache_t *VAR_4) {
 szind_t VAR_5 = VAR_4->next_gc_bin;

 cache_bin_t *VAR_6;
 if (VAR_5 < VAR_0) {
  VAR_6 = FUNC_3(VAR_4, VAR_5);
 } else {
  VAR_6 = FUNC_2(VAR_4, VAR_5);
 }
 if (VAR_6->low_water > 0) {



  if (VAR_5 < VAR_0) {
   FUNC_1(VAR_3, VAR_4, VAR_6, VAR_5,
       VAR_6->ncached - VAR_6->low_water + (VAR_6->low_water
       >> 2));




   cache_bin_info_t *VAR_7 = &VAR_2[VAR_5];
   if ((VAR_7->ncached_max >>
        (VAR_4->lg_fill_div[VAR_5] + 1)) >= 1) {
    VAR_4->lg_fill_div[VAR_5]++;
   }
  } else {
   FUNC_0(VAR_3, VAR_6, VAR_5, VAR_6->ncached
       - VAR_6->low_water + (VAR_6->low_water >> 2), VAR_4);
  }
 } else if (VAR_6->low_water < 0) {




  if (VAR_5 < VAR_0 && VAR_4->lg_fill_div[VAR_5] > 1) {
   VAR_4->lg_fill_div[VAR_5]--;
  }
 }
 VAR_6->low_water = VAR_6->ncached;

 VAR_4->next_gc_bin++;
 if (VAR_4->next_gc_bin == VAR_1) {
  VAR_4->next_gc_bin = 0;
 }
}
