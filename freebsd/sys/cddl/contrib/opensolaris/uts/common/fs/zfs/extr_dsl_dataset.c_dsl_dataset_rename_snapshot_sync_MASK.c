
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_12__ {TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_13__ {scalar_t__ ddrsa_recursive; int * ddrsa_tx; int ddrsa_fsname; } ;
typedef TYPE_3__ dsl_dataset_rename_snapshot_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_11__ {int dd_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int (*) (int *,TYPE_2__*,TYPE_3__*),TYPE_3__*,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_dataset_rename_snapshot_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_2(VAR_3);
 dsl_dataset_t *VAR_6;

 FUNC_0(FUNC_3(VAR_5, VAR_4->ddrsa_fsname, VAR_1, &VAR_6));
 VAR_4->ddrsa_tx = VAR_3;
 if (VAR_4->ddrsa_recursive) {
  FUNC_0(FUNC_1(VAR_5, VAR_6->ds_dir->dd_object,
      FUNC_5, VAR_4,
      VAR_0));
 } else {
  FUNC_0(FUNC_5(VAR_5, VAR_6, VAR_4));
 }
 FUNC_4(VAR_6, VAR_1);
}
