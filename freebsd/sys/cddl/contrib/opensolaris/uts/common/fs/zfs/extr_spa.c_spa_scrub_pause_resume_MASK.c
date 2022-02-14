
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spa_dsl_pool; } ;
typedef TYPE_1__ spa_t ;
typedef int pool_scrub_cmd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ) ;

int
FUNC_5(spa_t *VAR_3, pool_scrub_cmd_t VAR_4)
{
 FUNC_0(FUNC_4(VAR_3, VAR_2, VAR_1) == 0);

 if (FUNC_2(VAR_3->spa_dsl_pool))
  return (FUNC_1(VAR_0));

 return (FUNC_3(VAR_3->spa_dsl_pool, VAR_4));
}
