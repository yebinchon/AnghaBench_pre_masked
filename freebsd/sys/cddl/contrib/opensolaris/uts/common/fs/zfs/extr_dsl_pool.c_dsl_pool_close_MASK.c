
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int zfs_all_blkstats_t ;
struct TYPE_8__ {struct TYPE_8__* dp_blkstats; int zab_lock; int dp_vnrele_taskq; int dp_lock; int dp_config_rwlock; int dp_spa; int dp_sync_taskq; int dp_zil_clean_taskq; int dp_dirty_dirs; int dp_early_sync_tasks; int dp_sync_tasks; int dp_dirty_zilogs; int dp_dirty_datasets; int * dp_meta_objset; int dp_obsolete_bpobj; int dp_free_bpobj; int * dp_root_dir; int * dp_leak_dir; int * dp_free_dir; int * dp_mos_dir; int * dp_origin_snap; } ;
typedef TYPE_1__ dsl_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;

void
FUNC_13(dsl_pool_t *VAR_1)
{







 if (VAR_1->dp_origin_snap != ((void*)0))
  FUNC_4(VAR_1->dp_origin_snap, VAR_1);
 if (VAR_1->dp_mos_dir != ((void*)0))
  FUNC_5(VAR_1->dp_mos_dir, VAR_1);
 if (VAR_1->dp_free_dir != ((void*)0))
  FUNC_5(VAR_1->dp_free_dir, VAR_1);
 if (VAR_1->dp_leak_dir != ((void*)0))
  FUNC_5(VAR_1->dp_leak_dir, VAR_1);
 if (VAR_1->dp_root_dir != ((void*)0))
  FUNC_5(VAR_1->dp_root_dir, VAR_1);

 FUNC_1(&VAR_1->dp_free_bpobj);
 FUNC_1(&VAR_1->dp_obsolete_bpobj);


 if (VAR_1->dp_meta_objset != ((void*)0))
  FUNC_3(VAR_1->dp_meta_objset);

 FUNC_12(&VAR_1->dp_dirty_datasets);
 FUNC_12(&VAR_1->dp_dirty_zilogs);
 FUNC_12(&VAR_1->dp_sync_tasks);
 FUNC_12(&VAR_1->dp_early_sync_tasks);
 FUNC_12(&VAR_1->dp_dirty_dirs);

 FUNC_10(VAR_1->dp_zil_clean_taskq);
 FUNC_10(VAR_1->dp_sync_taskq);







 FUNC_0(VAR_1->dp_spa, VAR_0);

 FUNC_11(VAR_1);
 FUNC_6(VAR_1);
 FUNC_2();

 FUNC_9(&VAR_1->dp_config_rwlock);
 FUNC_8(&VAR_1->dp_lock);
 FUNC_10(VAR_1->dp_vnrele_taskq);
 if (VAR_1->dp_blkstats != ((void*)0)) {
  FUNC_8(&VAR_1->dp_blkstats->zab_lock);
  FUNC_7(VAR_1->dp_blkstats, sizeof (zfs_all_blkstats_t));
 }
 FUNC_7(VAR_1, sizeof (dsl_pool_t));
}
