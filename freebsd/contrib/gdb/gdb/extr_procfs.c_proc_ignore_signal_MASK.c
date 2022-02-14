
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tid; int pid; } ;
typedef TYPE_1__ procinfo ;
typedef int gdb_sigset_t ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

int
FUNC_4 (procinfo *VAR_0, int VAR_1)
{
  gdb_sigset_t VAR_2;
  if (VAR_0->tid != 0)
    VAR_0 = FUNC_0 (VAR_0->pid, 0);

  if (VAR_0)
    {
      if (FUNC_2 (VAR_0, &VAR_2))
 {
   FUNC_1 (&VAR_2, VAR_1);
   return FUNC_3 (VAR_0, &VAR_2);
 }
    }

  return 0;
}
