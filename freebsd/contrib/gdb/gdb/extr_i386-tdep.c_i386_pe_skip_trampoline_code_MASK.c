
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int CORE_ADDR ;


 char* FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

CORE_ADDR
FUNC_4 (CORE_ADDR VAR_0, char *VAR_1)
{
  if (VAR_0 && FUNC_2 (VAR_0, 2) == 0x25ff)
    {
      unsigned long VAR_2 = FUNC_2 (VAR_0 + 2, 4);
      struct minimal_symbol *VAR_3 =
 VAR_2 ? FUNC_1 (VAR_2) : 0;
      char *VAR_4 = VAR_3 ? FUNC_0 (VAR_3) : 0;

      if (VAR_4)
 {
   if (FUNC_3 (VAR_4, "__imp_", 6) == 0
       || FUNC_3 (VAR_4, "_imp_", 5) == 0)
     return VAR_1 ? 1 : FUNC_2 (VAR_2, 4);
 }
    }
  return 0;
}
