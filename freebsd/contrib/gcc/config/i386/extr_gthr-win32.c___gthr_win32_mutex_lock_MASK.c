
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int counter; int sema; } ;
typedef TYPE_1__ __gthread_mutex_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;

int
FUNC_3 (__gthread_mutex_t *VAR_2)
{
  if (FUNC_1 (&VAR_2->counter) == 0 ||
      FUNC_2 (VAR_2->sema, VAR_0) == VAR_1)
    return 0;
  else
    {


      FUNC_0 (&VAR_2->counter);
      return 1;
    }
}
