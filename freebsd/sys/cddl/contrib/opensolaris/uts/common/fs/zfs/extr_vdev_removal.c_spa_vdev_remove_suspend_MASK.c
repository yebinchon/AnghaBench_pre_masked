
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int svr_lock; int svr_thread_exit; int svr_cv; int * svr_thread; } ;
typedef TYPE_1__ spa_vdev_removal_t ;
struct TYPE_5__ {TYPE_1__* spa_vdev_removal; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(spa_t *VAR_2)
{
 spa_vdev_removal_t *VAR_3 = VAR_2->spa_vdev_removal;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_1(&VAR_3->svr_lock);
 VAR_3->svr_thread_exit = VAR_1;
 while (VAR_3->svr_thread != ((void*)0))
  FUNC_0(&VAR_3->svr_cv, &VAR_3->svr_lock);
 VAR_3->svr_thread_exit = VAR_0;
 FUNC_2(&VAR_3->svr_lock);
}
