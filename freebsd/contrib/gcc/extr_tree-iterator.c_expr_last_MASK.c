
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct tree_statement_list_node {scalar_t__ stmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tree_statement_list_node* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

tree
FUNC_3 (tree VAR_3)
{
  if (VAR_3 == VAR_1)
    return VAR_3;

  if (FUNC_1 (VAR_3) == VAR_2)
    {
      struct tree_statement_list_node *VAR_4 = FUNC_0 (VAR_3);
      return VAR_4 ? VAR_4->stmt : VAR_1;
    }

  while (FUNC_1 (VAR_3) == VAR_0)
    VAR_3 = FUNC_2 (VAR_3, 1);
  return VAR_3;
}
