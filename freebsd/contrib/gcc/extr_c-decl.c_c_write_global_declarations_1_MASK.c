
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int TREE_NO_WARNING ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void
FUNC_10 (tree VAR_1)
{
  tree VAR_2;
  bool VAR_3;


  for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_3 (VAR_2))
    {



      if (FUNC_4 (VAR_2) == VAR_0
   && FUNC_2 (VAR_2) == 0
   && FUNC_1 (VAR_2)
   && !FUNC_5 (VAR_2)
   && FUNC_0 (VAR_2))
 {
   FUNC_7 ("%q+F used but never defined", VAR_2);
   TREE_NO_WARNING (VAR_4) = 1;
 }

      FUNC_8 (VAR_2);
    }

  do
    {
      VAR_3 = 0;
      for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_3 (VAR_2))
 VAR_3 |= FUNC_9 (VAR_2);
    }
  while (VAR_3);

  for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_3 (VAR_2))
    FUNC_6 (VAR_2);
}
