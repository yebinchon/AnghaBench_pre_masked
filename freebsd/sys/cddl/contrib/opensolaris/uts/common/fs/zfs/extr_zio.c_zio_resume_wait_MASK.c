
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spa_suspend_lock; int spa_suspend_cv; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void
FUNC_4(spa_t *VAR_0)
{
 FUNC_1(&VAR_0->spa_suspend_lock);
 while (FUNC_3(VAR_0))
  FUNC_0(&VAR_0->spa_suspend_cv, &VAR_0->spa_suspend_lock);
 FUNC_2(&VAR_0->spa_suspend_lock);
}
