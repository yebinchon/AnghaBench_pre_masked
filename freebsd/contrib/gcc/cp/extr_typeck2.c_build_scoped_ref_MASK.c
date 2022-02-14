
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,int *) ;

tree
FUNC_4 (tree VAR_4, tree VAR_5, tree* VAR_6)
{
  tree VAR_7;

  if (VAR_4 == VAR_3)
    return VAR_3;
  if (*VAR_6)
    VAR_7 = *VAR_6;
  else
    VAR_7 = FUNC_3 (FUNC_0 (VAR_4), VAR_5, VAR_2, ((void*)0));

  if (!VAR_7 || VAR_7 == VAR_3)
    {
      *VAR_6 = VAR_0;
      if (!VAR_7)
 FUNC_2 (VAR_5, FUNC_0 (VAR_4));
      return VAR_3;
    }

  *VAR_6 = VAR_7;
  return FUNC_1 (VAR_1, VAR_4, VAR_7, 1);
}
