
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int counter; int sema; scalar_t__ owner; scalar_t__ depth; } ;
typedef TYPE_1__ __gthread_recursive_mutex_t ;


 int FUNC_0 (int *,int ,int,int *) ;

void
FUNC_1 (__gthread_recursive_mutex_t *VAR_0)
{
  VAR_0->counter = -1;
  VAR_0->depth = 0;
  VAR_0->owner = 0;
  VAR_0->sema = FUNC_0 (((void*)0), 0, 65535, ((void*)0));
}
