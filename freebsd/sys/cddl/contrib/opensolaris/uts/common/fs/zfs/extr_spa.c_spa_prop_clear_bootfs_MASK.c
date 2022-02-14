
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ spa_bootfs; scalar_t__ spa_pool_props_object; int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(spa_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 if (VAR_1->spa_bootfs == VAR_2 && VAR_1->spa_pool_props_object != 0) {
  FUNC_0(FUNC_1(VAR_1->spa_meta_objset,
      VAR_1->spa_pool_props_object,
      FUNC_2(VAR_0), VAR_3) == 0);
  VAR_1->spa_bootfs = 0;
 }
}
