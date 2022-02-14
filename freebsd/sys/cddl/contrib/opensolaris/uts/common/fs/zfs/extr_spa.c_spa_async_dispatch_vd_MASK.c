
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spa_async_tasks; int spa_async_lock; int * spa_async_thread_vd; int spa_async_suspended; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int *,int ,int ,TYPE_1__*,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_6)
{
 FUNC_0(&VAR_6->spa_async_lock);
 if ((VAR_6->spa_async_tasks & VAR_0) != 0 &&
     !VAR_6->spa_async_suspended &&
     VAR_6->spa_async_thread_vd == ((void*)0) &&
     VAR_4 != ((void*)0))
  VAR_6->spa_async_thread_vd = FUNC_2(((void*)0), 0,
      VAR_5, VAR_6, 0, &VAR_3, VAR_1, VAR_2);
 FUNC_1(&VAR_6->spa_async_lock);
}
