
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int HARD_REG_SET ;
typedef int DECL_REGISTER ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_0, HARD_REG_SET *VAR_1)
{


  tree VAR_2 = FUNC_3 (VAR_0, VAR_1);

  if (VAR_2)
    {
      FUNC_2 ("asm-specifier for variable %qs conflicts with asm clobber list",
      FUNC_1 (FUNC_0 (VAR_2)));



      DECL_REGISTER (VAR_3) = 0;
      return 1;
    }

  return 0;
}
