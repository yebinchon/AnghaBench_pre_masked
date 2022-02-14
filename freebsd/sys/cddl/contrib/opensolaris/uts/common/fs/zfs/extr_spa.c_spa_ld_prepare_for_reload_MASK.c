
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spa_mode; int spa_async_suspended; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_0)
{
 int VAR_1 = VAR_0->spa_mode;
 int VAR_2 = VAR_0->spa_async_suspended;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_1);






 VAR_0->spa_async_suspended = VAR_2;
}
