
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
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (int ,TYPE_1__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 char* VAR_4 ;

__attribute__((used)) static void
FUNC_9 (char *VAR_5, int VAR_6)
{
  Rptrace VAR_7;
  Ptrace_return VAR_8;
  int VAR_9 = 0;
  int VAR_10;

  if (VAR_5)
    FUNC_2 ("Argument given to VxWorks \"detach\".");

  if (VAR_6)
    FUNC_8 ("Detaching pid %s.\n",
         FUNC_3 (
           (unsigned long) FUNC_0 (VAR_2)));

  if (VAR_5)
    VAR_9 = FUNC_1 (VAR_5);

  FUNC_4 ((char *) &VAR_7, '\0', sizeof (VAR_7));
  FUNC_4 ((char *) &VAR_8, '\0', sizeof (VAR_8));
  VAR_7.pid = FUNC_0 (VAR_2);

  VAR_10 = FUNC_5 (VAR_0, &VAR_7, &VAR_8);
  if (VAR_10 == -1)
    FUNC_2 (VAR_4);
  if (VAR_8.status == -1)
    {
      VAR_1 = VAR_8.errno_num;
      FUNC_6 ("Detaching VxWorks process");
    }

  VAR_2 = VAR_3;
  FUNC_7 ();
}
