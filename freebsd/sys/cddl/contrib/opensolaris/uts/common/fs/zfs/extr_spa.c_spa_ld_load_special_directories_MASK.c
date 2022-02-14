
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_4__ {int spa_is_initializing; int spa_dsl_pool; int * spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(spa_t *VAR_4)
{
 int VAR_5 = 0;
 vdev_t *VAR_6 = VAR_4->spa_root_vdev;

 VAR_4->spa_is_initializing = VAR_1;
 VAR_5 = FUNC_0(VAR_4->spa_dsl_pool);
 VAR_4->spa_is_initializing = VAR_0;
 if (VAR_5 != 0) {
  FUNC_1(VAR_4, "dsl_pool_open failed [error=%d]", VAR_5);
  return (FUNC_2(VAR_6, VAR_3, VAR_2));
 }

 return (0);
}
