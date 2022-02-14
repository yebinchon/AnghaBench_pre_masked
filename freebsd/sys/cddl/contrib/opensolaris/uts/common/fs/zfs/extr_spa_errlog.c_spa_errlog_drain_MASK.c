
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_errlist_lock; int spa_errlist_scrub; int spa_errlist_last; } ;
typedef TYPE_1__ spa_t ;
typedef int spa_error_entry_t ;


 int * FUNC_0 (int *,void**) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(spa_t *VAR_0)
{
 spa_error_entry_t *VAR_1;
 void *VAR_2;

 FUNC_2(&VAR_0->spa_errlist_lock);

 VAR_2 = ((void*)0);
 while ((VAR_1 = FUNC_0(&VAR_0->spa_errlist_last,
     &VAR_2)) != ((void*)0))
  FUNC_1(VAR_1, sizeof (spa_error_entry_t));
 VAR_2 = ((void*)0);
 while ((VAR_1 = FUNC_0(&VAR_0->spa_errlist_scrub,
     &VAR_2)) != ((void*)0))
  FUNC_1(VAR_1, sizeof (spa_error_entry_t));

 FUNC_3(&VAR_0->spa_errlist_lock);
}
