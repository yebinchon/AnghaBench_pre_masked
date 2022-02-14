
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_evicting_os_lock; int spa_evicting_os_cv; int spa_evicting_os_list; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(spa_t *VAR_0)
{
 FUNC_3(&VAR_0->spa_evicting_os_lock);
 while (!FUNC_2(&VAR_0->spa_evicting_os_list))
  FUNC_0(&VAR_0->spa_evicting_os_cv, &VAR_0->spa_evicting_os_lock);
 FUNC_4(&VAR_0->spa_evicting_os_lock);

 FUNC_1();
}
