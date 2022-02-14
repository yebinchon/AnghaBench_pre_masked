
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {TYPE_1__* os_phys; } ;
typedef TYPE_3__ objset_t ;
typedef int dsl_pool_t ;
struct TYPE_16__ {int ds_bp_rwlock; TYPE_2__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_18__ {scalar_t__ blk_birth; } ;
struct TYPE_17__ {scalar_t__ ds_creation_txg; } ;
struct TYPE_14__ {int * dd_pool; } ;
struct TYPE_13__ {int os_meta_dnode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__**) ;
 TYPE_9__* FUNC_3 (TYPE_4__*) ;
 TYPE_5__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;

boolean_t
FUNC_8(dsl_dataset_t *VAR_4, dsl_dataset_t *VAR_5)
{
 dsl_pool_t *VAR_6 = VAR_4->ds_dir->dd_pool;
 uint64_t VAR_7;

 FUNC_0(FUNC_5(VAR_6));
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 FUNC_6(&VAR_4->ds_bp_rwlock, VAR_3, VAR_2);
 VAR_7 = FUNC_3(VAR_4)->blk_birth;
 FUNC_7(&VAR_4->ds_bp_rwlock, VAR_2);
 if (VAR_7 > FUNC_4(VAR_5)->ds_creation_txg) {
  objset_t *VAR_8, *VAR_9;





  if (FUNC_2(VAR_4, &VAR_8) != 0)
   return (VAR_1);
  if (FUNC_2(VAR_5, &VAR_9) != 0)
   return (VAR_1);
  return (FUNC_1(&VAR_8->os_phys->os_meta_dnode,
      &VAR_9->os_phys->os_meta_dnode,
      sizeof (VAR_8->os_phys->os_meta_dnode)) != 0);
 }
 return (VAR_0);
}
