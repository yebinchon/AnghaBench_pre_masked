
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_prochandle {int dummy; } ;
struct minimal_symbol {int dummy; } ;
typedef int psaddr_t ;
typedef int ps_err_e ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct minimal_symbol*) ;
 int VAR_2 ;
 struct minimal_symbol* FUNC_1 (char const*,int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;

ps_err_e
FUNC_3 (struct ps_prochandle *VAR_3, const char *VAR_4,
   const char *VAR_5, psaddr_t *VAR_6)
{
  struct minimal_symbol *VAR_7;
  CORE_ADDR VAR_8;

  VAR_7 = FUNC_1 (VAR_5, ((void*)0), ((void*)0));
  if (VAR_7 == ((void*)0))
    return VAR_0;

  VAR_8 = FUNC_0 (VAR_7);
  FUNC_2(VAR_6, VAR_2, VAR_8);
  return VAR_1;
}
