
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char,char const*) ;

__attribute__((used)) static bool
FUNC_6 (tree VAR_1, tree VAR_2)
{
  if (VAR_1 || VAR_2)
    {
      tree VAR_3 = FUNC_1 (VAR_1 ? VAR_1 : VAR_2);
      int VAR_4
 = FUNC_5 (',', FUNC_2 (FUNC_3 (VAR_3)));
      tree VAR_5 = VAR_2;

      if (VAR_4 + 1 > VAR_0)
 {
   FUNC_4 ("too many alternatives in %<asm%>");
   return 0;
 }

      VAR_3 = VAR_1;
      while (VAR_3)
 {
   const char *VAR_6
     = FUNC_2 (FUNC_3 (FUNC_1 (VAR_3)));

   if (FUNC_5 (',', VAR_6) != VAR_4)
     {
       FUNC_4 ("operand constraints for %<asm%> differ "
       "in number of alternatives");
       return 0;
     }

   if (FUNC_0 (VAR_3))
     VAR_3 = FUNC_0 (VAR_3);
   else
     VAR_3 = VAR_5, VAR_5 = 0;
 }
    }

  return 1;
}
