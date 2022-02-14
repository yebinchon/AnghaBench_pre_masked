
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int td_flags; scalar_t__ td_objset; int * td_spa; int td_hole_birth_enabled_txg; void* td_realloc_possible; void* td_paused; TYPE_2__* td_pfd; void* td_arg; int td_func; int * td_resume; scalar_t__ td_min_txg; int * td_rootbp; } ;
typedef TYPE_1__ traverse_data_t ;
typedef int spa_t ;
struct TYPE_14__ {int pd_flags; int pd_cv; int pd_mtx; void* pd_exited; void* pd_cancel; int pd_resume; int member_0; } ;
typedef TYPE_2__ prefetch_data_t ;
struct TYPE_15__ {int os_zil_header; } ;
typedef TYPE_3__ objset_phys_t ;
struct TYPE_16__ {scalar_t__ ds_object; int ds_is_snapshot; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef int blkptr_t ;
typedef int blkptr_cb_t ;
typedef int arc_flags_t ;
struct TYPE_17__ {TYPE_3__* b_data; } ;
typedef TYPE_5__ arc_buf_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (TYPE_5__*,TYPE_5__**) ;
 int VAR_16 ;
 int FUNC_5 (int *,int *,int *,int ,TYPE_5__**,int ,int ,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ,int *) ;
 int FUNC_14 (int *,int ,int *) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 int VAR_17 ;
 scalar_t__ FUNC_16 (int ,int ,TYPE_1__*,int ) ;
 int VAR_18 ;
 int FUNC_17 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_18 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_19(spa_t *VAR_19, dsl_dataset_t *VAR_20, uint64_t VAR_21, blkptr_t *VAR_22,
    uint64_t VAR_23, zbookmark_phys_t *VAR_24, int VAR_25,
    blkptr_cb_t VAR_26, void *VAR_27)
{
 traverse_data_t VAR_28;
 prefetch_data_t VAR_29 = { 0 };
 zbookmark_phys_t VAR_30;
 int VAR_31;

 FUNC_0(VAR_20 == ((void*)0) || VAR_21 == VAR_20->ds_object);
 FUNC_0(!(VAR_25 & VAR_8) || !(VAR_25 & VAR_7));

 VAR_28.td_spa = VAR_19;
 VAR_28.td_objset = VAR_21;
 VAR_28.td_rootbp = VAR_22;
 VAR_28.td_min_txg = VAR_23;
 VAR_28.td_resume = VAR_24;
 VAR_28.td_func = VAR_26;
 VAR_28.td_arg = VAR_27;
 VAR_28.td_pfd = &VAR_29;
 VAR_28.td_flags = VAR_25;
 VAR_28.td_paused = VAR_1;
 VAR_28.td_realloc_possible = (VAR_23 == 0 ? VAR_1 : VAR_2);

 if (FUNC_15(VAR_19, VAR_5)) {
  FUNC_3(FUNC_14(VAR_19,
      VAR_5, &VAR_28.td_hole_birth_enabled_txg));
 } else {
  VAR_28.td_hole_birth_enabled_txg = VAR_10;
 }

 VAR_29.pd_flags = VAR_25;
 if (VAR_24 != ((void*)0))
  VAR_29.pd_resume = *VAR_24;
 FUNC_13(&VAR_29.pd_mtx, ((void*)0), VAR_4, ((void*)0));
 FUNC_8(&VAR_29.pd_cv, ((void*)0), VAR_3, ((void*)0));


 if (VAR_20 != ((void*)0) && !VAR_20->ds_is_snapshot && !FUNC_1(VAR_22)) {
  arc_flags_t VAR_32 = VAR_0;
  objset_phys_t *VAR_33;
  arc_buf_t *VAR_34;

  VAR_31 = FUNC_5(((void*)0), VAR_28.td_spa, VAR_22,
      VAR_16, &VAR_34,
      VAR_15, VAR_14, &VAR_32, ((void*)0));
  if (VAR_31 != 0)
   return (VAR_31);

  VAR_33 = VAR_34->b_data;
  FUNC_18(&VAR_28, &VAR_33->os_zil_header);
  FUNC_4(VAR_34, &VAR_34);
 }

 if (!(VAR_25 & VAR_9) ||
     0 == FUNC_16(VAR_17, VAR_18,
     &VAR_28, VAR_6))
  VAR_29.pd_exited = VAR_2;

 FUNC_2(&VAR_30, VAR_28.td_objset,
     VAR_13, VAR_12, VAR_11);
 VAR_31 = FUNC_17(&VAR_28, ((void*)0), VAR_22, &VAR_30);

 FUNC_11(&VAR_29.pd_mtx);
 VAR_29.pd_cancel = VAR_2;
 FUNC_6(&VAR_29.pd_cv);
 while (!VAR_29.pd_exited)
  FUNC_9(&VAR_29.pd_cv, &VAR_29.pd_mtx);
 FUNC_12(&VAR_29.pd_mtx);

 FUNC_10(&VAR_29.pd_mtx);
 FUNC_7(&VAR_29.pd_cv);

 return (VAR_31);
}
