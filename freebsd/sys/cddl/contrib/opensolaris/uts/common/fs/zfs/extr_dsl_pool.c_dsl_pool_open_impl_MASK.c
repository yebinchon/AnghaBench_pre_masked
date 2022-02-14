
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_5__ {void* dp_vnrele_taskq; int dp_spaceavail_cv; int dp_lock; void* dp_zil_clean_taskq; void* dp_sync_taskq; int dp_early_sync_tasks; int dp_sync_tasks; int dp_dirty_dirs; int dp_dirty_zilogs; int dp_dirty_datasets; int dp_config_rwlock; int dp_meta_rootbp; int * dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int blkptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_13 ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 void* FUNC_6 (char*,int,int ,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static dsl_pool_t *
FUNC_9(spa_t *VAR_20, uint64_t VAR_21)
{
 dsl_pool_t *VAR_22;
 blkptr_t *VAR_23 = FUNC_5(VAR_20);

 VAR_22 = FUNC_1(sizeof (dsl_pool_t), VAR_3);
 VAR_22->dp_spa = VAR_20;
 VAR_22->dp_meta_rootbp = *VAR_23;
 FUNC_4(&VAR_22->dp_config_rwlock, VAR_0);
 FUNC_7(VAR_22, VAR_21);

 FUNC_8(&VAR_22->dp_dirty_datasets, VAR_20,
     FUNC_3(VAR_9, VAR_8));
 FUNC_8(&VAR_22->dp_dirty_zilogs, VAR_20,
     FUNC_3(VAR_18, VAR_19));
 FUNC_8(&VAR_22->dp_dirty_dirs, VAR_20,
     FUNC_3(VAR_10, VAR_7));
 FUNC_8(&VAR_22->dp_sync_tasks, VAR_20,
     FUNC_3(VAR_11, VAR_12));
 FUNC_8(&VAR_22->dp_early_sync_tasks, VAR_20,
     FUNC_3(VAR_11, VAR_12));

 VAR_22->dp_sync_taskq = FUNC_6("dp_sync_taskq",
     VAR_14, VAR_13, 1, VAR_2,
     VAR_6);

 VAR_22->dp_zil_clean_taskq = FUNC_6("dp_zil_clean_taskq",
     VAR_17, VAR_13,
     VAR_16,
     VAR_15,
     VAR_5 | VAR_6);

 FUNC_2(&VAR_22->dp_lock, ((void*)0), VAR_4, ((void*)0));
 FUNC_0(&VAR_22->dp_spaceavail_cv, ((void*)0), VAR_1, ((void*)0));

 VAR_22->dp_vnrele_taskq = FUNC_6("zfs_vn_rele_taskq", 1, VAR_13,
     1, 4, 0);

 return (VAR_22);
}
