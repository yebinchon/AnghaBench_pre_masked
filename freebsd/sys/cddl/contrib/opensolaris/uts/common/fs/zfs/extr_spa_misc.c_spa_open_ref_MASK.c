
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ spa_minref; int spa_refcount; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,void*) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(spa_t *VAR_1, void *VAR_2)
{
 FUNC_0(FUNC_3(&VAR_1->spa_refcount) >= VAR_1->spa_minref ||
     FUNC_1(&VAR_0));
 (void) FUNC_2(&VAR_1->spa_refcount, VAR_2);
}
