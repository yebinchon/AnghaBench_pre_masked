
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptrace_out ;
typedef int ptrace_in ;
struct TYPE_6__ {int status; int errno_num; } ;
struct TYPE_5__ {scalar_t__ pid; } ;
typedef TYPE_1__ Rptrace ;
typedef TYPE_2__ Ptrace_return ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  Rptrace VAR_5;
  Ptrace_return VAR_6;
  int VAR_7;

  FUNC_6 ("Killing pid %s.\n", FUNC_1 ((unsigned long) FUNC_0 (VAR_2)));

  FUNC_2 ((char *) &VAR_5, '\0', sizeof (VAR_5));
  FUNC_2 ((char *) &VAR_6, '\0', sizeof (VAR_6));
  VAR_5.pid = FUNC_0 (VAR_2);

  VAR_7 = FUNC_3 (VAR_0, &VAR_5, &VAR_6);
  if (VAR_7 == -1)
    FUNC_7 (VAR_4);
  else if (VAR_6.status == -1)
    {
      VAR_1 = VAR_6.errno_num;
      FUNC_4 ("Killing VxWorks process");
    }



  VAR_2 = VAR_3;
  FUNC_5 ();
}
