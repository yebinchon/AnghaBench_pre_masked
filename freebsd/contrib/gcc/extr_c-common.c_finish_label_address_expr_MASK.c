
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int TREE_USED ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;

tree
FUNC_3 (tree VAR_6)
{
  tree VAR_7;

  if (VAR_4)
    FUNC_2 ("taking the address of a label is non-standard");

  if (VAR_6 == VAR_2)
    return VAR_2;

  VAR_6 = FUNC_1 (VAR_6);
  if (VAR_6 == VAR_1)
    VAR_7 = VAR_3;
  else
    {
      TREE_USED (VAR_8) = 1;
      VAR_7 = FUNC_0 (VAR_0, VAR_5, VAR_8);



    }

  return VAR_7;
}
