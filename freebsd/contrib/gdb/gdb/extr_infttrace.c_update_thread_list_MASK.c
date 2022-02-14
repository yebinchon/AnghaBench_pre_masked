
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seen; scalar_t__ pid; int tid; scalar_t__ am_pseudo; struct TYPE_3__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_4__ {TYPE_1__* head; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  thread_info *VAR_4;
  thread_info *VAR_5;

  VAR_5 = ((void*)0);
  for (VAR_4 = VAR_1.head; VAR_4; VAR_4 = VAR_4->next)
    {
      if ((!VAR_4->seen) && VAR_4->am_pseudo && VAR_2
   && (VAR_4->pid != VAR_3))
 VAR_4->seen = 1;

      if (!VAR_4->seen)
 {







   FUNC_0 (VAR_4->tid);
 }
    }
}
