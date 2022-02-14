
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_8__ {int ddha_name; } ;
typedef TYPE_1__ dsl_destroy_head_arg_t ;
struct TYPE_9__ {int ds_dbuf; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_10__ {int ds_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_2__**) ;
 TYPE_5__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,char*,int *,char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_destroy_head_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_2(VAR_3);
 dsl_dataset_t *VAR_6;

 FUNC_0(FUNC_3(VAR_5, VAR_4->ddha_name, VAR_1, &VAR_6));


 FUNC_1(VAR_6->ds_dbuf, VAR_3);
 FUNC_4(VAR_6)->ds_flags |= VAR_0;

 FUNC_6(VAR_6, "destroy begin", VAR_3, "");
 FUNC_5(VAR_6, VAR_1);
}
