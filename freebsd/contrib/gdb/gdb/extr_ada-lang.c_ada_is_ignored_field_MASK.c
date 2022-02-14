
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;

int
FUNC_3 (struct type *VAR_0, int VAR_1)
{
  if (VAR_1 < 0 || VAR_1 > FUNC_2 (VAR_0))
    return 1;
  else
    {
      const char *VAR_2 = FUNC_1 (VAR_0, VAR_1);
      return (VAR_2 == ((void*)0)
       || (VAR_2[0] == '_' && !FUNC_0 (VAR_2, "_parent", 7)));
    }
}
