
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_prochandle {int dummy; } ;
typedef int ps_err_e ;
typedef int lwpid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

ps_err_e
FUNC_1(struct ps_prochandle *VAR_3, lwpid_t VAR_4)
{
  if (FUNC_0 (VAR_2, VAR_4, 0, 0) == -1)
    return VAR_0;
  return VAR_1;
}
