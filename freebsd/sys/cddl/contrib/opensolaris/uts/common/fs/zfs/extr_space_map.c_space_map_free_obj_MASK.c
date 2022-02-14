
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_3__ {scalar_t__ doi_bonus_size; } ;
typedef TYPE_1__ dmu_object_info_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;

void
FUNC_6(objset_t *VAR_2, uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 spa_t *VAR_5 = FUNC_3(VAR_2);
 if (FUNC_5(VAR_5, VAR_1)) {
  dmu_object_info_t VAR_6;

  FUNC_0(FUNC_2(VAR_2, VAR_3, &VAR_6));
  if (VAR_6.doi_bonus_size != VAR_0) {
   FUNC_4(VAR_5,
       VAR_1, VAR_4);
  }
 }

 FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4));
}
