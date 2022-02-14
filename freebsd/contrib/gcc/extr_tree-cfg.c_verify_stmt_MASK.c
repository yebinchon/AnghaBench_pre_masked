
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (scalar_t__*,int ,int *,int *) ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_1, bool VAR_2)
{
  tree VAR_3;

  if (FUNC_0 (VAR_1))
    {






      return 0;
    }

  if (!FUNC_3 (VAR_1))
    {
      FUNC_2 ("is not a valid GIMPLE statement");
      goto fail;
    }

  VAR_3 = FUNC_7 (&VAR_1, VAR_0, ((void*)0), ((void*)0));
  if (VAR_3)
    {
      FUNC_1 (VAR_3);
      return 1;
    }






  if (FUNC_4 (VAR_1) >= 0)
    {
      if (!FUNC_6 (VAR_1))
 {
   FUNC_2 ("statement marked for throw, but doesn%'t");
   goto fail;
 }
      if (!VAR_2 && FUNC_5 (VAR_1))
 {
   FUNC_2 ("statement marked for throw in middle of block");
   goto fail;
 }
    }

  return 0;

 fail:
  FUNC_1 (VAR_1);
  return 1;
}
