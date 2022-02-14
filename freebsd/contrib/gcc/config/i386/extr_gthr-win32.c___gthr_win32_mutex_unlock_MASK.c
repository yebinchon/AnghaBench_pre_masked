
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sema; int counter; } ;
typedef TYPE_1__ __gthread_mutex_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int,int *) ;

int
FUNC_2 (__gthread_mutex_t *VAR_0)
{
  if (FUNC_0 (&VAR_0->counter) >= 0)
    return FUNC_1 (VAR_0->sema, 1, ((void*)0)) ? 0 : 1;
  else
    return 0;
}
