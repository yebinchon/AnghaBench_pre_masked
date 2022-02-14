
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_bookmark_phys_t ;
struct TYPE_9__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_10__ {scalar_t__ ds_is_snapshot; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_11__ {int dbra_newname; int dbra_oldname; int dbra_fsname; } ;
typedef TYPE_3__ dsl_bookmark_rename_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_8(void *VAR_8, dmu_tx_t *VAR_9)
{
 dsl_bookmark_rename_arg_t *VAR_10 = VAR_8;
 dsl_pool_t *VAR_11 = FUNC_1(VAR_9);
 dsl_dataset_t *VAR_12;
 zfs_bookmark_phys_t VAR_13;
 int VAR_14;

 if (!FUNC_5(VAR_11->dp_spa, VAR_6))
  return (FUNC_0(VAR_3));


 if (FUNC_7(VAR_10->dbra_newname, ((void*)0), ((void*)0)))
  return (FUNC_0(VAR_1));
 if (FUNC_6(VAR_10->dbra_fsname) + FUNC_6(VAR_10->dbra_newname) + 1 >=
     VAR_7)
  return (FUNC_0(VAR_2));

 VAR_14 = FUNC_3(VAR_11, VAR_10->dbra_fsname, VAR_5, &VAR_12);
 if (VAR_14 != 0)
  return (VAR_14);
 if (VAR_12->ds_is_snapshot) {
  FUNC_4(VAR_12, VAR_5);
  return (FUNC_0(VAR_1));
 }
 VAR_14 = FUNC_2(VAR_12, VAR_10->dbra_oldname, &VAR_13);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12, VAR_5);
  return (VAR_14);
 }

 VAR_14 = FUNC_2(VAR_12, VAR_10->dbra_newname, &VAR_13);
 FUNC_4(VAR_12, VAR_5);
 if (VAR_14 == 0)
  return (FUNC_0(VAR_0));
 if (VAR_14 != VAR_4)
  return (VAR_14);
 return (0);
}
