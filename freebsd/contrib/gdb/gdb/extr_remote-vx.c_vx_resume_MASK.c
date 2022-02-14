
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptrace_out ;
typedef int ptrace_in ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_6__ {int status; int errno_num; } ;
struct TYPE_5__ {int addr; int pid; } ;
typedef TYPE_1__ Rptrace ;
typedef TYPE_2__ Ptrace_return ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (char*,char,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8 (ptid_t VAR_8, int VAR_9, enum target_signal VAR_10)
{
  int VAR_11;
  Rptrace VAR_12;
  Ptrace_return VAR_13;
  CORE_ADDR VAR_14;

  if (FUNC_6 (VAR_8, VAR_4))
    VAR_8 = VAR_3;

  if (VAR_10 != 0 && VAR_10 != VAR_7)
    FUNC_1 ("Cannot send signals to VxWorks processes");
  VAR_14 = FUNC_7 (VAR_0);
  if (VAR_14 == VAR_6)
    VAR_14 = 1;

  FUNC_2 ((char *) &VAR_12, '\0', sizeof (VAR_12));
  FUNC_2 ((char *) &VAR_13, '\0', sizeof (VAR_13));

  VAR_12.pid = FUNC_0 (VAR_8);
  VAR_12.addr = VAR_14;

  if (VAR_9)
    VAR_11 = FUNC_4 ();
  else
    VAR_11 = FUNC_3 (VAR_1, &VAR_12, &VAR_13);

  if (VAR_11)
    FUNC_1 (VAR_5);
  if (VAR_13.status == -1)
    {
      VAR_2 = VAR_13.errno_num;
      FUNC_5 ("Resuming remote process");
    }
}
