
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ,int *) ;

tree
FUNC_4 (tree VAR_4, tree VAR_5, bool VAR_6, bool VAR_7)
{
  tree VAR_8;
  tree VAR_9;

  if (FUNC_1 (FUNC_0 (VAR_4)))
    {
      VAR_9 = FUNC_0 (FUNC_0 (VAR_4));
      VAR_5 = FUNC_0 (VAR_5);
    }
  else
    VAR_9 = FUNC_0 (VAR_4);

  VAR_8 = FUNC_3 (VAR_9, VAR_5,
         VAR_6 ? VAR_1 : VAR_2,
         ((void*)0));
  if (!VAR_8 || VAR_8 == VAR_3)
    return VAR_3;

  return FUNC_2 (VAR_0, VAR_4, VAR_8, VAR_7);
}
