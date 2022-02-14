
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef enum tree_code_class { ____Placeholder_tree_code_class } tree_code_class ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_2 ;

tree
FUNC_3 (tree VAR_3)
{
  enum tree_code_class VAR_4;
  enum tree_code VAR_5;
  tree VAR_6 = ((void*)0);

  if (VAR_3 == ((void*)0))
    return VAR_6;

  VAR_5 = FUNC_1 (VAR_3);
  VAR_4 = FUNC_2 (VAR_5);

  if (VAR_5 != VAR_0
      || VAR_4 != VAR_2)
    return VAR_6;

  VAR_6 = FUNC_0 (VAR_3);

  if (FUNC_1 (VAR_6) != VAR_1)
    VAR_6 = ((void*)0);

  return VAR_6;
}
