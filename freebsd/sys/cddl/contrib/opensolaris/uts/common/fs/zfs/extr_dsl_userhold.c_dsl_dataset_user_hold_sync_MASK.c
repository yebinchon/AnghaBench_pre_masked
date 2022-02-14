
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_6__ {scalar_t__ dduha_minor; int dduha_chkholds; } ;
typedef TYPE_2__ dsl_dataset_user_hold_arg_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ,scalar_t__,int ,int *) ;
 int FUNC_5 (int ,int *,scalar_t__) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(void *VAR_1, dmu_tx_t *VAR_2)
{
 dsl_dataset_user_hold_arg_t *VAR_3 = VAR_1;
 dsl_pool_t *VAR_4 = FUNC_1(VAR_2);
 nvlist_t *VAR_5;
 uint64_t VAR_6 = FUNC_8();

 if (VAR_3->dduha_minor != 0)
  VAR_5 = FUNC_6();
 else
  VAR_5 = ((void*)0);
 for (nvpair_t *VAR_7 = FUNC_9(VAR_3->dduha_chkholds, ((void*)0));
     VAR_7 != ((void*)0);
     VAR_7 = FUNC_9(VAR_3->dduha_chkholds, VAR_7)) {
  dsl_dataset_t *VAR_8;

  FUNC_0(FUNC_2(VAR_4, FUNC_10(VAR_7), VAR_0, &VAR_8));
  FUNC_4(VAR_5, VAR_8,
      FUNC_7(VAR_7), VAR_3->dduha_minor, VAR_6, VAR_2);
  FUNC_3(VAR_8, VAR_0);
 }
 FUNC_5(VAR_4->dp_spa, VAR_5, VAR_3->dduha_minor);
}
