
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_0)
{
  tree VAR_1 = FUNC_2 (VAR_0);
  if (!FUNC_3 (VAR_1, VAR_0))
    return 0;




  else if (FUNC_1 (VAR_1) && FUNC_0 (VAR_1))
    {
      FUNC_4 ("expression %qE of abstract class type %qT cannot "
      "be used in throw-expression", VAR_0, VAR_1);
      return 0;
    }

  return 1;
}
