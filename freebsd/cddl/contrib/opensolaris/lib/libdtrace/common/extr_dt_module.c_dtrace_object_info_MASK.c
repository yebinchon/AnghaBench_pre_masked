
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_objinfo_t ;
typedef int dtrace_hdl_t ;
typedef int dt_module_t ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(dtrace_hdl_t *VAR_4, const char *VAR_5, dtrace_objinfo_t *VAR_6)
{
 dt_module_t *VAR_7;

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1 ||
     VAR_5 == VAR_2 || VAR_6 == ((void*)0))
  return (FUNC_3(VAR_4, VAR_3));

 if ((VAR_7 = FUNC_0(VAR_4, VAR_5)) == ((void*)0))
  return (-1);

 if (FUNC_2(VAR_4, VAR_7) == -1)
  return (-1);

 (void) FUNC_1(VAR_7, VAR_6);
 return (0);
}
