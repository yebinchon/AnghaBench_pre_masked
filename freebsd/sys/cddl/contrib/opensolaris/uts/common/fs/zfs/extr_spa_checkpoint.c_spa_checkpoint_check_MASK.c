
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ spa_checkpoint_txg; int * spa_vdev_removal; } ;
typedef TYPE_1__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {TYPE_1__* dp_spa; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_6, dmu_tx_t *VAR_7)
{
 spa_t *VAR_8 = FUNC_1(VAR_7)->dp_spa;

 if (!FUNC_3(VAR_8, VAR_1))
  return (FUNC_0(VAR_0));

 if (!FUNC_4(VAR_8))
  return (FUNC_0(VAR_5));

 if (VAR_8->spa_vdev_removal != ((void*)0))
  return (FUNC_0(VAR_3));

 if (VAR_8->spa_checkpoint_txg != 0)
  return (FUNC_0(VAR_2));

 if (FUNC_2(VAR_8, VAR_1))
  return (FUNC_0(VAR_4));

 return (0);
}
