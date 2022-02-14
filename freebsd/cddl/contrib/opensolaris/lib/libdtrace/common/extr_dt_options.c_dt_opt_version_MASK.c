
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_hdl_t ;
typedef int dt_version_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_3, const char *VAR_4, uintptr_t VAR_5)
{
 dt_version_t VAR_6;

 if (VAR_4 == ((void*)0))
  return (FUNC_1(VAR_3, VAR_0));

 if (FUNC_3(VAR_4, &VAR_6) == -1)
  return (FUNC_1(VAR_3, VAR_1));

 if (!FUNC_2(VAR_6))
  return (FUNC_1(VAR_3, VAR_2));

 return (FUNC_0(VAR_3, VAR_6));
}
