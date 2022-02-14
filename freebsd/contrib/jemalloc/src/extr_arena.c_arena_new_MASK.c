
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_hooks_t ;
typedef int base_t ;
struct TYPE_7__ {int decay_muzzy; int decay_dirty; } ;
struct TYPE_6__ {int create_time; int * base; int * bins; int extent_avail_mtx; int extent_avail; int extent_grow_mtx; int retain_grow_limit; int extent_grow_next; TYPE_3__ stats; int decay_muzzy; int decay_dirty; int extents_retained; int extents_muzzy; int extents_dirty; int large_mtx; int large; int nactive; int dss_prec; int extent_sn_next; int offset_state; int prof_accum; int tcache_ql_mtx; int cache_bin_array_descriptor_ql; int tcache_ql; int * last_thd; int * nthreads; } ;
typedef TYPE_1__ arena_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned int,int ) ;
 int FUNC_7 (int *,unsigned int,int ) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int *,int,int ) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,unsigned int,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_16 (int *,int *,int ,int) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int *,char*,int ,int ) ;
 int VAR_16 ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_23 (int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

arena_t *
FUNC_28(tsdn_t *VAR_17, unsigned VAR_18, extent_hooks_t *VAR_19) {
 arena_t *VAR_20;
 base_t *VAR_21;
 unsigned VAR_22;

 if (VAR_18 == 0) {
  VAR_21 = FUNC_8();
 } else {
  VAR_21 = FUNC_11(VAR_17, VAR_18, VAR_19);
  if (VAR_21 == ((void*)0)) {
   return ((void*)0);
  }
 }

 VAR_20 = (arena_t *)FUNC_9(VAR_17, VAR_21, sizeof(arena_t), VAR_1);
 if (VAR_20 == ((void*)0)) {
  goto label_error;
 }

 FUNC_6(&VAR_20->nthreads[0], 0, VAR_0);
 FUNC_6(&VAR_20->nthreads[1], 0, VAR_0);
 VAR_20->last_thd = ((void*)0);

 if (VAR_12) {
  if (FUNC_4(VAR_17, &VAR_20->stats)) {
   goto label_error;
  }

  FUNC_24(&VAR_20->tcache_ql);
  FUNC_24(&VAR_20->cache_bin_array_descriptor_ql);
  if (FUNC_18(&VAR_20->tcache_ql_mtx, "tcache_ql",
      VAR_8, VAR_16)) {
   goto label_error;
  }
 }

 if (VAR_11) {
  if (FUNC_23(VAR_17, &VAR_20->prof_accum)) {
   goto label_error;
  }
 }

 if (VAR_9) {







  FUNC_7(&VAR_20->offset_state, VAR_10 ? VAR_18 :
      (size_t)(uintptr_t)VAR_20, VAR_0);
 }

 FUNC_7(&VAR_20->extent_sn_next, 0, VAR_0);

 FUNC_6(&VAR_20->dss_prec, (unsigned)FUNC_14(),
     VAR_0);

 FUNC_7(&VAR_20->nactive, 0, VAR_0);

 FUNC_15(&VAR_20->large);
 if (FUNC_18(&VAR_20->large_mtx, "arena_large",
     VAR_5, VAR_16)) {
  goto label_error;
 }







 if (FUNC_16(VAR_17, &VAR_20->extents_dirty, VAR_13,
     1)) {
  goto label_error;
 }




 if (FUNC_16(VAR_17, &VAR_20->extents_muzzy, VAR_14,
     0)) {
  goto label_error;
 }






 if (FUNC_16(VAR_17, &VAR_20->extents_retained, VAR_15,
     0)) {
  goto label_error;
 }

 if (FUNC_0(&VAR_20->decay_dirty,
     FUNC_1(), &VAR_20->stats.decay_dirty)) {
  goto label_error;
 }
 if (FUNC_0(&VAR_20->decay_muzzy,
     FUNC_2(), &VAR_20->stats.decay_muzzy)) {
  goto label_error;
 }

 VAR_20->extent_grow_next = FUNC_25(VAR_3);
 VAR_20->retain_grow_limit = VAR_2;
 if (FUNC_18(&VAR_20->extent_grow_mtx, "extent_grow",
     VAR_7, VAR_16)) {
  goto label_error;
 }

 FUNC_13(&VAR_20->extent_avail);
 if (FUNC_18(&VAR_20->extent_avail_mtx, "extent_avail",
     VAR_6, VAR_16)) {
  goto label_error;
 }


 for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++) {
  bool VAR_23 = FUNC_12(&VAR_20->bins[VAR_22]);
  if (VAR_23) {
   goto label_error;
  }
 }

 VAR_20->base = VAR_21;

 FUNC_3(VAR_18, VAR_20);

 FUNC_19(&VAR_20->create_time, 0);
 FUNC_20(&VAR_20->create_time);


 if (VAR_18 != 0) {




  FUNC_5(!FUNC_26(VAR_17));
  FUNC_22(FUNC_27(VAR_17), VAR_20);
  if (&FUNC_17) {
   FUNC_17();
  }
  FUNC_21(FUNC_27(VAR_17));
 }

 return VAR_20;
label_error:
 if (VAR_18 != 0) {
  FUNC_10(VAR_17, VAR_21);
 }
 return ((void*)0);
}
