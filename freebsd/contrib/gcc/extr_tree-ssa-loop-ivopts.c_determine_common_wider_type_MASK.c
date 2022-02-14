
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static tree
FUNC_4 (tree *VAR_2, tree *VAR_3)
{
  tree VAR_4 = ((void*)0);
  tree VAR_5, VAR_6;
  tree VAR_7 = FUNC_2 (*VAR_2);

  if ((FUNC_0 (*VAR_2) == VAR_1
       || FUNC_0 (*VAR_2) == VAR_0))
    {
      VAR_5 = FUNC_1 (*VAR_2, 0);
      VAR_4 = FUNC_2 (VAR_5);
      if (FUNC_3 (VAR_4) < FUNC_3 (VAR_7))
 return VAR_7;
    }
  else
    return VAR_7;

  if ((FUNC_0 (*VAR_3) == VAR_1
       || FUNC_0 (*VAR_3) == VAR_0))
    {
      VAR_6 = FUNC_1 (*VAR_3, 0);
      if (FUNC_3 (VAR_4) != FUNC_3 (FUNC_2 (VAR_6)))
 return VAR_7;
    }
  else
    return VAR_7;

  *VAR_2 = VAR_5;
  *VAR_3 = VAR_6;
  return VAR_4;
}
