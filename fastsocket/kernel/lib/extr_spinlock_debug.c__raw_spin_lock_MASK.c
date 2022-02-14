
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int raw_lock; } ;
typedef TYPE_1__ spinlock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(spinlock_t *VAR_0)
{
 FUNC_3(VAR_0);
 if (FUNC_4(!FUNC_0(&VAR_0->raw_lock)))
  FUNC_1(VAR_0);
 FUNC_2(VAR_0);
}
