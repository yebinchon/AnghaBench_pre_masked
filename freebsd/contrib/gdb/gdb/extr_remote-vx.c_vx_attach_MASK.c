
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptrace_out ;
typedef int ptrace_in ;
struct TYPE_6__ {int status; int errno_num; } ;
struct TYPE_5__ {unsigned long pid; } ;
typedef TYPE_1__ Rptrace ;
typedef TYPE_2__ Ptrace_return ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 char* VAR_3 ;
 unsigned long FUNC_9 (char*,char**,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_6, int VAR_7)
{
  unsigned long VAR_8;
  char *VAR_9 = 0;
  Rptrace VAR_10;
  Ptrace_return VAR_11;
  int VAR_12;

  if (!VAR_6)
    FUNC_1 ("process-id to attach");

  VAR_8 = FUNC_9 (VAR_6, &VAR_9, 0);
  if ((VAR_9 == VAR_6) || (*VAR_9 != '\0'))
    FUNC_0 ("Invalid process-id -- give a single number in decimal or 0xhex");

  if (VAR_7)
    FUNC_7 ("Attaching pid %s.\n",
         FUNC_2 ((unsigned long) VAR_8));

  FUNC_3 ((char *) &VAR_10, '\0', sizeof (VAR_10));
  FUNC_3 ((char *) &VAR_11, '\0', sizeof (VAR_11));
  VAR_10.pid = VAR_8;

  VAR_12 = FUNC_4 (VAR_0, &VAR_10, &VAR_11);
  if (VAR_12 == -1)
    FUNC_0 (VAR_3);
  if (VAR_11.status == -1)
    {
      VAR_1 = VAR_11.errno_num;
      FUNC_5 ("Attaching remote process");
    }



  VAR_2 = FUNC_6 (VAR_8);
  FUNC_8 (&VAR_4);

  if (VAR_5)
    FUNC_10 (VAR_5);
  VAR_5 = 0;
}
