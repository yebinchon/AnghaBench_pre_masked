
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sav_count; int * sav_vdevs; } ;
struct TYPE_7__ {int sav_count; int * sav_vdevs; } ;
struct TYPE_9__ {int spa_async_tasks; int spa_async_lock; int spa_async_cv; int * spa_async_thread_vd; TYPE_2__ spa_spares; TYPE_1__ spa_l2cache; int spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int *,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 spa_t *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_1(&VAR_3->spa_async_lock);
 VAR_4 = VAR_3->spa_async_tasks;
retry:
 VAR_3->spa_async_tasks &= ~VAR_1;
 FUNC_2(&VAR_3->spa_async_lock);




 if (VAR_4 & VAR_1) {
  FUNC_4(VAR_3, VAR_0);
  FUNC_3(VAR_3, VAR_3->spa_root_vdev);
  for (int VAR_5 = 0; VAR_5 < VAR_3->spa_l2cache.sav_count; VAR_5++)
   FUNC_3(VAR_3, VAR_3->spa_l2cache.sav_vdevs[VAR_5]);
  for (int VAR_6 = 0; VAR_6 < VAR_3->spa_spares.sav_count; VAR_6++)
   FUNC_3(VAR_3, VAR_3->spa_spares.sav_vdevs[VAR_6]);
  (void) FUNC_5(VAR_3, ((void*)0), 0);
 }




 FUNC_1(&VAR_3->spa_async_lock);
 VAR_4 = VAR_3->spa_async_tasks;
 if ((VAR_4 & VAR_1) != 0)
  goto retry;
 VAR_3->spa_async_thread_vd = ((void*)0);
 FUNC_0(&VAR_3->spa_async_cv);
 FUNC_2(&VAR_3->spa_async_lock);
 FUNC_6();
}
