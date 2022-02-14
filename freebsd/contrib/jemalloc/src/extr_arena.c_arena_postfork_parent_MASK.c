
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_6__ {int mtx; } ;
struct TYPE_5__ {int mtx; } ;
struct TYPE_7__ {int tcache_ql_mtx; TYPE_2__ decay_muzzy; TYPE_1__ decay_dirty; int extent_grow_mtx; int extents_retained; int extents_muzzy; int extents_dirty; int extent_avail_mtx; int base; int large_mtx; int * bins; } ;
typedef TYPE_3__ arena_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(tsdn_t *VAR_2, arena_t *VAR_3) {
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_1(VAR_2, &VAR_3->bins[VAR_4]);
 }
 FUNC_3(VAR_2, &VAR_3->large_mtx);
 FUNC_0(VAR_2, VAR_3->base);
 FUNC_3(VAR_2, &VAR_3->extent_avail_mtx);
 FUNC_2(VAR_2, &VAR_3->extents_dirty);
 FUNC_2(VAR_2, &VAR_3->extents_muzzy);
 FUNC_2(VAR_2, &VAR_3->extents_retained);
 FUNC_3(VAR_2, &VAR_3->extent_grow_mtx);
 FUNC_3(VAR_2, &VAR_3->decay_dirty.mtx);
 FUNC_3(VAR_2, &VAR_3->decay_muzzy.mtx);
 if (VAR_1) {
  FUNC_3(VAR_2, &VAR_3->tcache_ql_mtx);
 }
}
