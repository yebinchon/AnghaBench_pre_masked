
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spa_dsl_pool; int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef scalar_t__ pool_scan_func_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,int *,int *) ;

int
FUNC_6(spa_t *VAR_7, pool_scan_func_t VAR_8)
{
 FUNC_0(FUNC_4(VAR_7, VAR_5, VAR_4) == 0);

 if (VAR_8 >= VAR_1 || VAR_8 == VAR_2)
  return (FUNC_1(VAR_0));





 if (VAR_8 == VAR_3 &&
     !FUNC_5(VAR_7->spa_root_vdev, ((void*)0), ((void*)0))) {
  FUNC_3(VAR_7, VAR_6);
  return (0);
 }

 return (FUNC_2(VAR_7->spa_dsl_pool, VAR_8));
}
