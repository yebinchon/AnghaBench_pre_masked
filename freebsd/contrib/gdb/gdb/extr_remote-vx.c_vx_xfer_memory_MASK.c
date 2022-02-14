
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int ptrace_out ;
typedef int ptrace_in ;
typedef enum ptracereq { ____Placeholder_ptracereq } ptracereq ;
typedef void* caddr_t ;
struct TYPE_12__ {int len; void* bytes; } ;
struct TYPE_9__ {void* more_data; } ;
struct TYPE_11__ {int status; int errno_num; TYPE_2__ info; } ;
struct TYPE_8__ {void* more_data; int ttype; } ;
struct TYPE_10__ {int addr; int data; TYPE_1__ info; int pid; } ;
typedef TYPE_3__ Rptrace ;
typedef TYPE_4__ Ptrace_return ;
typedef TYPE_5__ C_bytes ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,TYPE_3__*,TYPE_4__*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5 (CORE_ADDR VAR_7, char *VAR_8, int VAR_9, int VAR_10,
  struct mem_attrib *VAR_11, struct target_ops *VAR_12)
{
  int VAR_13;
  Rptrace VAR_14;
  Ptrace_return VAR_15;
  C_bytes VAR_16;
  enum ptracereq VAR_17;
  int VAR_18, VAR_19;

  FUNC_2 ((char *) &VAR_14, '\0', sizeof (VAR_14));
  FUNC_2 ((char *) &VAR_15, '\0', sizeof (VAR_15));

  VAR_14.pid = FUNC_0 (VAR_5);
  VAR_14.addr = (int) VAR_7;
  VAR_14.data = VAR_9;

  if (VAR_10)
    {
      VAR_14.info.ttype = VAR_0;
      VAR_14.info.more_data = (caddr_t) & VAR_16;

      VAR_16.bytes = (caddr_t) VAR_8;
      VAR_16.len = VAR_9;
      VAR_17 = VAR_2;
    }
  else
    {
      VAR_15.info.more_data = (caddr_t) & VAR_16;
      VAR_17 = VAR_1;
    }




  VAR_18 = VAR_9;
  VAR_13 = 0;

  while (VAR_18 > 0 && VAR_13 == 0)
    {
      VAR_19 = FUNC_3 (VAR_18, VAR_3);

      VAR_14.addr = (int) VAR_7;
      VAR_14.data = VAR_19;
      VAR_16.bytes = (caddr_t) VAR_8;
      VAR_16.len = VAR_19;




      if (FUNC_4 (VAR_17, &VAR_14, &VAR_15))
 FUNC_1 (VAR_6);

      VAR_13 = VAR_15.status;
      if (VAR_13 == 0)
 {
   VAR_7 += VAR_19;
   VAR_8 += VAR_19;
   VAR_18 -= VAR_19;
 }
      else
 {




   VAR_4 = VAR_15.errno_num;
 }
    }



  return (VAR_9 - VAR_18);
}
