
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spa_trim_lock; int spa_trim_thread; int spa_trim_cv; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ,TYPE_1__*,int ,int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_5(spa_t *VAR_7)
{

 if (!VAR_6)
  return;

 FUNC_3(&VAR_7->spa_trim_lock, ((void*)0), VAR_1, ((void*)0));
 FUNC_0(&VAR_7->spa_trim_cv, ((void*)0), VAR_0, ((void*)0));
 FUNC_1(&VAR_7->spa_trim_lock);
 VAR_7->spa_trim_thread = FUNC_4(((void*)0), 0, VAR_5, VAR_7, 0, &VAR_4,
     VAR_2, VAR_3);
 FUNC_2(&VAR_7->spa_trim_lock);
}
