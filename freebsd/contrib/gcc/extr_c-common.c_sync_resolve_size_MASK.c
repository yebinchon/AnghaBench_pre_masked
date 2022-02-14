
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8 (tree VAR_1, tree VAR_2)
{
  tree VAR_3;
  int VAR_4;

  if (VAR_2 == ((void*)0))
    {
      FUNC_6 ("too few arguments to function %qE", VAR_1);
      return 0;
    }

  VAR_3 = FUNC_3 (FUNC_4 (VAR_2));
  if (FUNC_2 (VAR_3) != VAR_0)
    goto incompatible;

  VAR_3 = FUNC_3 (VAR_3);
  if (!FUNC_0 (VAR_3) && !FUNC_1 (VAR_3))
    goto incompatible;

  VAR_4 = FUNC_7 (FUNC_5 (VAR_3), 1);
  if (VAR_4 == 1 || VAR_4 == 2 || VAR_4 == 4 || VAR_4 == 8 || VAR_4 == 16)
    return VAR_4;

 incompatible:
  FUNC_6 ("incompatible type for argument %d of %qE", 1, VAR_1);
  return 0;
}
