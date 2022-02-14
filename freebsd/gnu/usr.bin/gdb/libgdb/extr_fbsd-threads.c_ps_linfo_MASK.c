
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_lwpinfo {int dummy; } ;
struct ps_prochandle {int dummy; } ;
typedef int ps_err_e ;
typedef int lwpid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ,int ,void*,int) ;

ps_err_e
FUNC_2(struct ps_prochandle *VAR_4, lwpid_t VAR_5, void *VAR_6)
{
  if (VAR_3) {

    FUNC_0(VAR_6, 0, sizeof(struct ptrace_lwpinfo));
    return VAR_1;
  }

  if (FUNC_1 (VAR_2, VAR_5, VAR_6, sizeof(struct ptrace_lwpinfo)) == -1)
    return VAR_0;
  return VAR_1;
}
