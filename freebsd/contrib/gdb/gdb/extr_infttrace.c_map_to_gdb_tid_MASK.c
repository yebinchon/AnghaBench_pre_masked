
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tid; scalar_t__ pid; scalar_t__ am_pseudo; struct TYPE_4__* next; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ lwpid_t ;
struct TYPE_6__ {TYPE_1__* head; } ;
struct TYPE_5__ {TYPE_1__* head; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static lwpid_t
FUNC_0 (lwpid_t VAR_2)
{
  thread_info *VAR_3;

  for (VAR_3 = VAR_1.head; VAR_3; VAR_3 = VAR_3->next)
    {
      if (VAR_3->tid == VAR_2)
 {
   if (VAR_3->am_pseudo)
     return VAR_3->pid;
   else
     return VAR_2;
 }
    }

  for (VAR_3 = VAR_0.head; VAR_3; VAR_3 = VAR_3->next)
    {
      if (VAR_3->tid == VAR_2)
 if (VAR_3->am_pseudo)
   return VAR_3->pid;
 else
   return VAR_2;
    }

  return 0;
}
