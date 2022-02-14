
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_hdl_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_3, const char *VAR_4, uintptr_t VAR_5)
{
 static int VAR_6 = 0;

 if (VAR_4 != ((void*)0))
  return (FUNC_1(VAR_3, VAR_0));

 if (VAR_6++ || FUNC_0(VAR_1) == 0)
  return (0);

 return (FUNC_1(VAR_3, VAR_2));
}
