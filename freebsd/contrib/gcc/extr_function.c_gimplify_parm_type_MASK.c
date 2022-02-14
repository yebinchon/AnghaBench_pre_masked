
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int **) ;

__attribute__((used)) static tree
FUNC_6 (tree *VAR_0, int *VAR_1, void *VAR_2)
{
  tree VAR_3 = *VAR_0;

  *VAR_1 = 0;
  if (FUNC_2 (VAR_3))
    {
      if (FUNC_0 (VAR_3))
 *VAR_1 = 1;
      else if (FUNC_3 (VAR_3) && !FUNC_1 (FUNC_3 (VAR_3))
        && !FUNC_4 (VAR_3))
 {
   FUNC_5 (VAR_3, (tree *) VAR_2);
   *VAR_1 = 1;
 }
    }

  return ((void*)0);
}
