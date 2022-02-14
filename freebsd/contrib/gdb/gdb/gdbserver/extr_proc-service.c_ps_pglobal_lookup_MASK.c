
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ps_err_e ;
typedef scalar_t__ paddr_t ;
typedef int gdb_ps_prochandle_t ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__*) ;

ps_err_e
FUNC_1 (gdb_ps_prochandle_t VAR_2, const char *VAR_3,
     const char *VAR_4, paddr_t *VAR_5)
{
  CORE_ADDR VAR_6;

  if (FUNC_0 (VAR_4, &VAR_6) == 0)
    return VAR_0;

  *VAR_5 = (paddr_t) (unsigned long) VAR_6;
  return VAR_1;
}
