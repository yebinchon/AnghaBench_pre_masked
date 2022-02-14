
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spa_async_tasks; int spa_async_lock; int spa_name; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ,int) ;

void
FUNC_4(spa_t *VAR_0, int VAR_1)
{
 FUNC_3("spa=%s async request task=%u", VAR_0->spa_name, VAR_1);
 FUNC_0(&VAR_0->spa_async_lock);
 VAR_0->spa_async_tasks |= VAR_1;
 FUNC_1(&VAR_0->spa_async_lock);
 FUNC_2(VAR_0);
}
