
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
struct TYPE_3__ {scalar_t__ dp_empty_bpobj; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int,int,scalar_t__*,int *) ;

uint64_t
FUNC_10(objset_t *VAR_4, int VAR_5, dmu_tx_t *VAR_6)
{
 spa_t *VAR_7 = FUNC_5(VAR_4);
 dsl_pool_t *VAR_8 = FUNC_4(VAR_4);

 if (FUNC_8(VAR_7, VAR_2)) {
  if (!FUNC_7(VAR_7, VAR_2)) {
   FUNC_1(VAR_8->dp_empty_bpobj);
   VAR_8->dp_empty_bpobj =
       FUNC_3(VAR_4, VAR_3, VAR_6);
   FUNC_2(FUNC_9(VAR_4,
       VAR_0,
       VAR_1, sizeof (uint64_t), 1,
       &VAR_8->dp_empty_bpobj, VAR_6) == 0);
  }
  FUNC_6(VAR_7, VAR_2, VAR_6);
  FUNC_0(VAR_8->dp_empty_bpobj != 0);
  return (VAR_8->dp_empty_bpobj);
 } else {
  return (FUNC_3(VAR_4, VAR_5, VAR_6));
 }
}
