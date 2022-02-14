
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (char*,char const) ;
 char* FUNC_2 (char const*,char*) ;
 char* FUNC_3 (struct type*) ;

const char *
FUNC_4 (struct type *VAR_1)
{
  if (VAR_1 != ((void*)0) && FUNC_0 (VAR_1) == VAR_0)
    {
      const char *VAR_2 = FUNC_3 (VAR_1);
      const char *VAR_3 = (VAR_2 == ((void*)0)) ? ((void*)0) : FUNC_2 (VAR_2, "___XR");
      if (VAR_3 == ((void*)0)
   || (VAR_3[5] != '\000' && FUNC_1 ("PES_", VAR_3[5]) == ((void*)0)))
 return ((void*)0);
      else
 return VAR_3 + 3;
    }
  else
    return ((void*)0);
}
