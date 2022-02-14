
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_2__ {char* ddsa_name; int ddsa_defer; } ;
typedef TYPE_1__ dsl_destroy_snapshot_arg_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;

void
FUNC_5(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_destroy_snapshot_arg_t *VAR_4 = VAR_2;
 const char *VAR_5 = VAR_4->ddsa_name;
 boolean_t VAR_6 = VAR_4->ddsa_defer;

 dsl_pool_t *VAR_7 = FUNC_1(VAR_3);
 dsl_dataset_t *VAR_8;

 int VAR_9 = FUNC_2(VAR_7, VAR_5, VAR_1, &VAR_8);
 if (VAR_9 == VAR_0)
  return;
 FUNC_0(VAR_9);
 FUNC_4(VAR_8, VAR_6, VAR_3);
 FUNC_3(VAR_8, VAR_1);
}
