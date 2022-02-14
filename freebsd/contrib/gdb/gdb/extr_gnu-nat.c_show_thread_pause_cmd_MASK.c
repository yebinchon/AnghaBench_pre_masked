
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int pause_sc; TYPE_1__* inf; } ;
struct TYPE_2__ {scalar_t__ pause_sc; } ;


 int FUNC_0 (char*,char*) ;
 struct proc* FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int FUNC_3 (struct proc*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{
  struct proc *VAR_2 = FUNC_1 ();
  int VAR_3 = VAR_2->pause_sc;
  FUNC_0 (VAR_0, "show task pause");
  FUNC_2 ("Thread %s %s suspended while gdb has control%s.\n",
       FUNC_3 (VAR_2),
       VAR_3 ? "is" : "isn't",
       !VAR_3 && VAR_2->inf->pause_sc ? " (but the task is)" : "");
}
