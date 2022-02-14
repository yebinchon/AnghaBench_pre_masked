
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int ps_err_e ;
typedef int gdb_ps_prochandle_t ;
typedef int gdb_ps_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (char const*,int *,int *) ;

ps_err_e
FUNC_2 (gdb_ps_prochandle_t VAR_2, const char *VAR_3,
     const char *VAR_4, gdb_ps_addr_t * VAR_5)
{
  struct minimal_symbol *VAR_6;

  VAR_6 = FUNC_1 (VAR_4, ((void*)0), ((void*)0));

  if (!VAR_6)
    return VAR_0;

  *VAR_5 = FUNC_0 (VAR_6);

  return VAR_1;
}
