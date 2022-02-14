
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * spa_vdev_removal; } ;
typedef TYPE_1__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {TYPE_1__* dp_spa; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, dmu_tx_t *VAR_2)
{
 spa_t *VAR_3 = FUNC_0(VAR_2)->dp_spa;

 if (VAR_3->spa_vdev_removal == ((void*)0))
  return (VAR_0);
 return (0);
}
