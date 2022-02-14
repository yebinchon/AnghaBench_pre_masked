
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* pathname; int pid; } ;
typedef TYPE_1__ procinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (procinfo *VAR_3, char *VAR_4, int VAR_5)
{
  char VAR_6[80];

  if (VAR_3->pathname)
    {
      FUNC_3 (VAR_3->pathname, VAR_2);
    }
  else
    {
      FUNC_4 (VAR_6, "process %d", VAR_3->pid);
      FUNC_3 (VAR_6, VAR_2);
    }
  if (VAR_5 == VAR_0)
    FUNC_2 (VAR_3->pid, VAR_1);

  FUNC_0 (VAR_3);
  FUNC_1 (VAR_4);
}
