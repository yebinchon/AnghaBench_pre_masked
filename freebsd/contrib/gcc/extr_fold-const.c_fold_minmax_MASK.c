
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static tree
FUNC_6 (enum tree_code VAR_3, tree VAR_4, tree VAR_5, tree VAR_6)
{
  enum tree_code VAR_7;

  if (VAR_3 == VAR_1)
    VAR_7 = VAR_0;
  else if (VAR_3 == VAR_0)
    VAR_7 = VAR_1;
  else
    FUNC_2 ();


  if (FUNC_0 (VAR_5) == VAR_7
      && FUNC_4 (FUNC_1 (VAR_5, 1), VAR_6, 0))
    return FUNC_3 (VAR_4, VAR_6, FUNC_1 (VAR_5, 0));


  if (FUNC_0 (VAR_5) == VAR_7
      && FUNC_4 (FUNC_1 (VAR_5, 0), VAR_6, 0)
      && FUNC_5 (FUNC_1 (VAR_5, 1), VAR_6))
    return FUNC_3 (VAR_4, VAR_6, FUNC_1 (VAR_5, 1));


  if (FUNC_0 (VAR_6) == VAR_7
      && FUNC_4 (VAR_5, FUNC_1 (VAR_6, 0), 0)
      && FUNC_5 (VAR_5, FUNC_1 (VAR_6, 1)))
    return FUNC_3 (VAR_4, VAR_5, FUNC_1 (VAR_6, 1));


  if (FUNC_0 (VAR_6) == VAR_7
      && FUNC_4 (VAR_5, FUNC_1 (VAR_6, 1), 0)
      && FUNC_5 (VAR_5, FUNC_1 (VAR_6, 0)))
    return FUNC_3 (VAR_4, VAR_5, FUNC_1 (VAR_6, 0));

  return VAR_2;
}
