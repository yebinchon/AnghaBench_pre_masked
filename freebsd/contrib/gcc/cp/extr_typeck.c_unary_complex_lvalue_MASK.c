
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int TREE_NO_WARNING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (scalar_t__,int,int,int) ;
 int FUNC_7 (scalar_t__,int ,int,int ,int *) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int,int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int) ;

tree
FUNC_13 (enum tree_code VAR_18, tree VAR_19)
{



  if (VAR_17)
    return VAR_11;


  if (FUNC_1 (VAR_19) == VAR_2)
    {
      tree VAR_20 = FUNC_10 (VAR_18, FUNC_2 (VAR_19, 1), 0);
      return FUNC_6 (VAR_2, FUNC_4 (VAR_20),
       FUNC_2 (VAR_19, 0), VAR_20);
    }


  if (FUNC_1 (VAR_19) == VAR_3
      || FUNC_1 (VAR_19) == VAR_9 || FUNC_1 (VAR_19) == VAR_7)
    return FUNC_11 (VAR_18, VAR_19);


  if (FUNC_1 (VAR_19) == VAR_10
      || FUNC_1 (VAR_19) == VAR_14
      || FUNC_1 (VAR_19) == VAR_13)
    {
      tree VAR_21 = FUNC_2 (VAR_19, 0);
      if (FUNC_3 (VAR_21))
 {
   VAR_21 = FUNC_12 (VAR_21);
   VAR_19 = FUNC_6 (FUNC_1 (VAR_19), FUNC_4 (VAR_19),
   VAR_21, FUNC_2 (VAR_19, 1));
 }
      return FUNC_13
 (VAR_18, FUNC_6 (VAR_2, FUNC_4 (VAR_21), VAR_19, VAR_21));
    }

  if (VAR_18 != VAR_0)
    return VAR_11;


  if (FUNC_1 (VAR_19) == VAR_10
      || FUNC_1 (VAR_19) == VAR_6)
    {
      tree VAR_22 = FUNC_10 (VAR_18, FUNC_2 (VAR_19, 0), 0);
      VAR_19 = FUNC_6 (VAR_2, FUNC_4 (VAR_22),
      VAR_19, VAR_22);
      TREE_NO_WARNING (VAR_23) = 1;
      return VAR_23;
    }

  if (FUNC_1 (FUNC_4 (VAR_19)) == VAR_4
      || FUNC_1 (FUNC_4 (VAR_19)) == VAR_8
      || FUNC_1 (VAR_19) == VAR_12)
    return VAR_11;



  {
    tree VAR_24 = VAR_19;

    if (FUNC_1 (VAR_24) == VAR_15)
      VAR_24 = FUNC_2 (VAR_24, 0);

    if (FUNC_1 (VAR_24) == VAR_1 && FUNC_0 (FUNC_4 (VAR_24)))
      {
 if (FUNC_1 (VAR_19) == VAR_15)
   VAR_24 = VAR_19;
 else
   VAR_24 = FUNC_8 (FUNC_4 (VAR_19), VAR_19);
 return FUNC_5 (VAR_0, FUNC_9 (FUNC_4 (VAR_19)), VAR_24);
      }

    if (FUNC_1 (VAR_19) == VAR_15 && FUNC_1 (VAR_24) == VAR_5)
      return FUNC_7 (VAR_15, FUNC_9 (FUNC_4 (VAR_19)),
       FUNC_2 (VAR_24, 0), VAR_16, ((void*)0));
  }


  return VAR_11;
}
