
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tid; struct TYPE_5__* next; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ lwpid_t ;
struct TYPE_7__ {TYPE_1__* head; } ;
struct TYPE_6__ {TYPE_1__* head; } ;


 TYPE_4__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static thread_info *
FUNC_0 (lwpid_t VAR_2)
{
  thread_info *VAR_3;

  for (VAR_3 = VAR_1.head; VAR_3; VAR_3 = VAR_3->next)
    {
      if (VAR_3->tid == VAR_2)
 {
   return VAR_3;
 }
    }

  for (VAR_3 = VAR_0.head; VAR_3; VAR_3 = VAR_3->next)
    {
      if (VAR_3->tid == VAR_2)
 {
   return VAR_3;
 }
    }

  return ((void*)0);
}
