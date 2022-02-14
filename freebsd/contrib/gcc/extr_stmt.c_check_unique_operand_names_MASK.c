
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_0, tree VAR_1)
{
  tree VAR_2, VAR_3;

  for (VAR_2 = VAR_0; VAR_2 ; VAR_2 = FUNC_0 (VAR_2))
    {
      tree VAR_4 = FUNC_1 (FUNC_1 (VAR_2));
      if (! VAR_4)
 continue;

      for (VAR_3 = FUNC_0 (VAR_2); VAR_3 ; VAR_3 = FUNC_0 (VAR_3))
 if (FUNC_4 (VAR_4, FUNC_1 (FUNC_1 (VAR_3))))
   goto failure;
    }

  for (VAR_2 = VAR_1; VAR_2 ; VAR_2 = FUNC_0 (VAR_2))
    {
      tree VAR_5 = FUNC_1 (FUNC_1 (VAR_2));
      if (! VAR_5)
 continue;

      for (VAR_3 = FUNC_0 (VAR_2); VAR_3 ; VAR_3 = FUNC_0 (VAR_3))
 if (FUNC_4 (VAR_5, FUNC_1 (FUNC_1 (VAR_3))))
   goto failure;
      for (VAR_3 = VAR_0; VAR_3 ; VAR_3 = FUNC_0 (VAR_3))
 if (FUNC_4 (VAR_5, FUNC_1 (FUNC_1 (VAR_3))))
   goto failure;
    }

  return 1;

 failure:
  FUNC_3 ("duplicate asm operand name %qs",
  FUNC_2 (FUNC_1 (FUNC_1 (VAR_2))));
  return 0;
}
