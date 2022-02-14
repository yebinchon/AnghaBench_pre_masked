
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_3__ {int spa_suspend_lock; int * spa_suspend_zio_root; int spa_suspend_cv; int spa_suspended; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(spa_t *VAR_1)
{
 zio_t *VAR_2;




 FUNC_1(&VAR_1->spa_suspend_lock);
 VAR_1->spa_suspended = VAR_0;
 FUNC_0(&VAR_1->spa_suspend_cv);
 VAR_2 = VAR_1->spa_suspend_zio_root;
 VAR_1->spa_suspend_zio_root = ((void*)0);
 FUNC_2(&VAR_1->spa_suspend_lock);

 if (VAR_2 == ((void*)0))
  return (0);

 FUNC_3(VAR_2);
 return (FUNC_4(VAR_2));
}
