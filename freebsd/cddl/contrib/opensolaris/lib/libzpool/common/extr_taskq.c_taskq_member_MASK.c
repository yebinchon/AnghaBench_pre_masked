
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct TYPE_3__ {int tq_nthreads; scalar_t__* tq_threadlist; } ;
typedef TYPE_1__ taskq_t ;


 scalar_t__ VAR_0 ;

int
FUNC_0(taskq_t *VAR_1, void *VAR_2)
{
 int VAR_3;

 if (VAR_0)
  return (1);

 for (VAR_3 = 0; VAR_3 < VAR_1->tq_nthreads; VAR_3++)
  if (VAR_1->tq_threadlist[VAR_3] == (thread_t)(uintptr_t)VAR_2)
   return (1);

 return (0);
}
