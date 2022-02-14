
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int ) ;

tree
FUNC_10 (tree VAR_8, tree VAR_9, int VAR_10)
{
  tree VAR_11 = VAR_9;
  enum tree_code VAR_12 = FUNC_0 (VAR_8);

  if (VAR_12 == VAR_7)
    return (FUNC_7
     (FUNC_6 (VAR_8, VAR_11, VAR_1, VAR_2,
       VAR_5)));

  if (VAR_12 == VAR_6)
    return FUNC_7 (FUNC_5 (VAR_8, VAR_11));


  if (((FUNC_0 (FUNC_1 (VAR_11)) == VAR_6 && FUNC_0 (VAR_11) == VAR_0
 && FUNC_0 (FUNC_1 (VAR_11)) == VAR_6
 && FUNC_0 (FUNC_1 (FUNC_1 (VAR_11))) == VAR_4)
       || FUNC_8 (VAR_11)
       || FUNC_3 (FUNC_1 (VAR_11)))
      && FUNC_3 (VAR_8))

    return FUNC_4 (FUNC_2 (VAR_8), VAR_11, 1,
                     1);

  return FUNC_9 (VAR_8, VAR_11, VAR_1|VAR_10, VAR_3);
}
