
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int pause_sc; TYPE_1__* inf; } ;
struct TYPE_2__ {scalar_t__ pause_sc; } ;


 struct proc* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct proc *VAR_2 = FUNC_0 ();
  int VAR_3 = VAR_2->pause_sc;
  VAR_2->pause_sc = FUNC_2 (VAR_0, "set thread pause");
  if (VAR_3 == 0 && VAR_2->pause_sc != 0 && VAR_2->inf->pause_sc == 0)


    FUNC_1 (VAR_2->inf);
}
