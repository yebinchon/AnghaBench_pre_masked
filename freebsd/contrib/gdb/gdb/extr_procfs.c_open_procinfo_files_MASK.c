
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* pathname; int tid; int ctl_fd; int as_fd; int status_fd; int pid; } ;
typedef TYPE_1__ procinfo ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5 (procinfo *VAR_5, int VAR_6)
{



  int VAR_7;
  if (VAR_5->tid == 0)
    {
      VAR_7 = FUNC_2 (VAR_5->pathname, VAR_2);
      if (VAR_7 <= 0)
 return 0;
    }
  else
    {
      return 0;

    }

  VAR_5->ctl_fd = VAR_5->as_fd = VAR_5->status_fd = VAR_7;


  return 1;
}
