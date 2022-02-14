
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int tid; TYPE_1__* inf; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct proc*) ;
 int FUNC_3 (char*,char*,int,...) ;

char *
FUNC_4 (struct proc *VAR_0)
{
  static char VAR_1[80];
  if (FUNC_2 (VAR_0))
    FUNC_3 (VAR_1, "process %d", VAR_0->inf->pid);
  else
    FUNC_3 (VAR_1, "thread %d.%d",
      VAR_0->inf->pid, FUNC_1 (FUNC_0 (VAR_0->tid, 0)));
  return VAR_1;
}
