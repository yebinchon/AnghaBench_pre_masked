
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_10__ {int ds_prev; int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_11__ {int ddra_result; int ddra_fsname; } ;
typedef TYPE_2__ dsl_dataset_rollback_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_5 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int ,char*,char*) ;
 int VAR_3 ;

void
FUNC_11(void *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_dataset_rollback_arg_t *VAR_6 = VAR_4;
 dsl_pool_t *VAR_7 = FUNC_1(VAR_5);
 dsl_dataset_t *VAR_8, *VAR_9;
 uint64_t VAR_10;
 char VAR_11[VAR_2];

 FUNC_0(FUNC_4(VAR_7, VAR_6->ddra_fsname, VAR_1, &VAR_8));

 FUNC_6(VAR_8->ds_prev, VAR_11);
 FUNC_10(VAR_6->ddra_result, "target", VAR_11);

 VAR_10 = FUNC_3(VAR_8->ds_dir, "%rollback",
     VAR_8->ds_prev, VAR_0, VAR_3, VAR_5);

 FUNC_0(FUNC_5(VAR_7, VAR_10, VAR_1, &VAR_9));

 FUNC_2(VAR_9, VAR_8, VAR_5);
 FUNC_8(VAR_8, VAR_5);

 FUNC_9(VAR_9, VAR_5);

 FUNC_7(VAR_9, VAR_1);
 FUNC_7(VAR_8, VAR_1);
}
