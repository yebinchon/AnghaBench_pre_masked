
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ TREE_ASM_WRITTEN ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2 (tree VAR_0, tree *VAR_1)
{
  int VAR_2 = 0;

  while (VAR_0)
    {
      TREE_ASM_WRITTEN (VAR_3) = 0;


      if (VAR_1)
 VAR_1[VAR_2] = VAR_3;

      ++VAR_2;


      VAR_2 += FUNC_2 (FUNC_1 (VAR_3),
         VAR_1 ? VAR_1 + VAR_2 : 0);
      VAR_3 = FUNC_0 (VAR_3);
    }

  return VAR_2;
}
