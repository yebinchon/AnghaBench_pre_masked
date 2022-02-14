
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_trim_lock; int spa_trim_cv; int * spa_trim_thread; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void
FUNC_3(spa_t *VAR_1)
{

 if (!VAR_0)
  return;
 if (VAR_1->spa_trim_thread == ((void*)0))
  return;

 FUNC_1(&VAR_1->spa_trim_lock);
 FUNC_0(&VAR_1->spa_trim_cv);
 FUNC_2(&VAR_1->spa_trim_lock);
}
