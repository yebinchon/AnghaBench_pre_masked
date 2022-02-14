
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

tree
FUNC_14 (tree VAR_4)
{
  tree VAR_5 = FUNC_6 (VAR_4);
  enum tree_code VAR_6 = FUNC_4 (VAR_5);

  FUNC_13 (FUNC_2 (VAR_5));



  if (VAR_6 == VAR_1)
    {
      VAR_5 = FUNC_9 (FUNC_3 (FUNC_7 (VAR_5),
       FUNC_7 (VAR_2)),
         ((FUNC_7 (VAR_5)
           >= FUNC_7 (VAR_2))
          && FUNC_8 (VAR_5)));

      return FUNC_12 (VAR_5, VAR_4);
    }



  if (FUNC_4 (VAR_4) == VAR_0
      && FUNC_0 (FUNC_5 (VAR_4, 1))


      && 0 > FUNC_11 (FUNC_1 (FUNC_5 (VAR_4, 1)),
          FUNC_7 (VAR_2)))
    return FUNC_12 (VAR_2, VAR_4);

  if (FUNC_10 (VAR_5))
    {

      if (FUNC_8 (VAR_5)
   && FUNC_7 (VAR_5) == FUNC_7 (VAR_2))
 return FUNC_12 (VAR_3, VAR_4);

      return FUNC_12 (VAR_2, VAR_4);
    }

  return VAR_4;
}
