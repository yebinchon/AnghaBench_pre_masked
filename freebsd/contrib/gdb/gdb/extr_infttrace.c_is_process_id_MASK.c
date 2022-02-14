
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pid; struct TYPE_4__* next; int am_pseudo; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ lwpid_t ;
struct TYPE_5__ {TYPE_1__* head; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int
FUNC_2 (int VAR_1)
{
  lwpid_t VAR_2;
  thread_info *VAR_3;
  pid_t VAR_4;
  int VAR_5;



  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 <= 0)
    return 0;

  VAR_3 = FUNC_0 (VAR_2);



  if (!VAR_3->am_pseudo)
    return 0;





  VAR_4 = VAR_3->pid;
  VAR_5 = 0;
  for (VAR_3 = VAR_0.head; VAR_3; VAR_3 = VAR_3->next)
    {
      if (VAR_3->pid == VAR_4)
 VAR_5++;
    }

  return (VAR_5 == 1);
}
