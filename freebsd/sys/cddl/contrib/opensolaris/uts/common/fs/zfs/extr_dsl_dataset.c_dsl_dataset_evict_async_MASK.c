
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ds_bp_rwlock; int ds_longholds; int ds_remap_deadlist_lock; int ds_sendstream_lock; int ds_opening_lock; int ds_lock; int ds_prop_cbs; int ds_synced_link; scalar_t__ ds_dir; int ds_remap_deadlist; int ds_deadlist; int ds_pending_deadlist; int * ds_prev; int * ds_objset; int * ds_dbuf; int * ds_owner; } ;
typedef TYPE_1__ dsl_dataset_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(void *VAR_0)
{
 dsl_dataset_t *VAR_1 = VAR_0;

 FUNC_0(VAR_1->ds_owner == ((void*)0));

 VAR_1->ds_dbuf = ((void*)0);

 if (VAR_1->ds_objset != ((void*)0))
  FUNC_2(VAR_1->ds_objset);

 if (VAR_1->ds_prev) {
  FUNC_3(VAR_1->ds_prev, VAR_1);
  VAR_1->ds_prev = ((void*)0);
 }

 FUNC_1(&VAR_1->ds_pending_deadlist);
 if (FUNC_5(&VAR_1->ds_deadlist))
  FUNC_4(&VAR_1->ds_deadlist);
 if (FUNC_5(&VAR_1->ds_remap_deadlist))
  FUNC_4(&VAR_1->ds_remap_deadlist);
 if (VAR_1->ds_dir)
  FUNC_6(VAR_1->ds_dir, VAR_1);

 FUNC_0(!FUNC_9(&VAR_1->ds_synced_link));

 FUNC_8(&VAR_1->ds_prop_cbs);
 if (FUNC_12(&VAR_1->ds_lock))
  FUNC_11(&VAR_1->ds_lock);
 FUNC_10(&VAR_1->ds_lock);
 if (FUNC_12(&VAR_1->ds_opening_lock))
  FUNC_11(&VAR_1->ds_opening_lock);
 FUNC_10(&VAR_1->ds_opening_lock);
 FUNC_10(&VAR_1->ds_sendstream_lock);
 FUNC_10(&VAR_1->ds_remap_deadlist_lock);
 FUNC_14(&VAR_1->ds_longholds);
 FUNC_13(&VAR_1->ds_bp_rwlock);

 FUNC_7(VAR_1, sizeof (dsl_dataset_t));
}
