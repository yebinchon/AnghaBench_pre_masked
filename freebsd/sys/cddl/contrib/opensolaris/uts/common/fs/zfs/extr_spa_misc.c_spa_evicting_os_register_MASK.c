
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_evicting_os_lock; int spa_evicting_os_list; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(spa_t *VAR_0, objset_t *VAR_1)
{
 FUNC_1(&VAR_0->spa_evicting_os_lock);
 FUNC_0(&VAR_0->spa_evicting_os_list, VAR_1);
 FUNC_2(&VAR_0->spa_evicting_os_lock);
}
