
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int ptrace_out ;
typedef int ptrace_in ;
typedef scalar_t__ caddr_t ;
struct TYPE_12__ {char* bytes; int len; } ;
struct TYPE_9__ {scalar_t__ more_data; } ;
struct TYPE_11__ {int status; int errno_num; TYPE_2__ info; } ;
struct TYPE_8__ {int ttype; } ;
struct TYPE_10__ {TYPE_1__ info; int pid; } ;
typedef TYPE_3__ Rptrace ;
typedef TYPE_4__ Ptrace_return ;
typedef TYPE_5__ C_bytes ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (scalar_t__,TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (char*,char*,char*) ;

void
FUNC_6 (char *VAR_5, int VAR_6, u_long VAR_7)
{
  int VAR_8;
  Rptrace VAR_9;
  Ptrace_return VAR_10;
  C_bytes VAR_11;
  char VAR_12[100];

  FUNC_2 ((char *) &VAR_9, '\0', sizeof (VAR_9));
  FUNC_2 ((char *) &VAR_10, '\0', sizeof (VAR_10));



  VAR_9.pid = FUNC_0 (VAR_3);
  VAR_9.info.ttype = VAR_0;



  VAR_11.bytes = VAR_5;
  VAR_11.len = VAR_6;
  VAR_10.info.more_data = (caddr_t) & VAR_11;



  VAR_8 = FUNC_3 (VAR_7, &VAR_9, &VAR_10);
  if (VAR_8)
    FUNC_1 (VAR_4);
  if (VAR_10.status == -1)
    {
      VAR_2 = VAR_10.errno_num;
      FUNC_5 (VAR_12, "reading %s registers", (VAR_7 == VAR_1)
        ? "general-purpose"
        : "floating-point");
      FUNC_4 (VAR_12);
    }
}
