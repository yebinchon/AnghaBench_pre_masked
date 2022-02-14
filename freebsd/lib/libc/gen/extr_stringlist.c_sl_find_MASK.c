
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t sl_cur; char** sl_str; } ;
typedef TYPE_1__ StringList ;


 scalar_t__ FUNC_0 (char*,char const*) ;

char *
FUNC_1(StringList *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->sl_cur; VAR_2++)
  if (FUNC_0(VAR_0->sl_str[VAR_2], VAR_1) == 0)
   return VAR_0->sl_str[VAR_2];

 return ((void*)0);
}
