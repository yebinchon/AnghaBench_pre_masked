
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;

tree
FUNC_23 (tree VAR_9)
{
  tree VAR_10;
  enum tree_code VAR_11;

  VAR_10 = FUNC_4 (VAR_9);
  if (VAR_10 == VAR_8)
    return VAR_8;

  if (FUNC_22 (VAR_9))
    {
      FUNC_14 (VAR_9, FUNC_4 (VAR_9));
      return VAR_8;
    }

  VAR_9 = FUNC_16 (VAR_9);
  if (FUNC_18 (VAR_9))
    return VAR_8;



  VAR_11 = FUNC_1 (VAR_10);
  if (VAR_11 == VAR_7)
    {
      FUNC_17 ("void value not ignored as it ought to be");
      return VAR_8;
    }
  if (FUNC_19 (VAR_9))
    return VAR_8;
  if (VAR_11 == VAR_4 || FUNC_20 (VAR_9))
    return FUNC_10 (VAR_0, VAR_9, 0);
  if (VAR_11 == VAR_1)
    {
      tree VAR_12;
      tree VAR_13;

      if (FUNC_1 (VAR_9) == VAR_5)
 return FUNC_8 (FUNC_9 (FUNC_4 (VAR_10)),
     FUNC_2 (VAR_9, 0));

      if (FUNC_1 (VAR_9) == VAR_2)
 {
   tree VAR_14 = FUNC_23 (FUNC_2 (VAR_9, 1));
   return FUNC_6 (VAR_2, FUNC_4 (VAR_14),
    FUNC_2 (VAR_9, 0), VAR_14);
 }

      if (!FUNC_21 (VAR_9)
   && ! (FUNC_1 (VAR_9) == VAR_3 && FUNC_3 (VAR_9)))
 {
   FUNC_17 ("invalid use of non-lvalue array");
   return VAR_8;
 }

      VAR_13 = FUNC_9 (FUNC_4 (VAR_10));

      if (FUNC_1 (VAR_9) == VAR_6)
 {
   if (!FUNC_15 (VAR_9))
     return VAR_8;
   VAR_12 = FUNC_8 (VAR_13, FUNC_7 (VAR_9));
   return VAR_12;
 }


      VAR_12 = FUNC_10 (VAR_0, VAR_9, 1);
      return FUNC_12 (VAR_13, VAR_12);
    }
  VAR_9 = FUNC_11 (VAR_9);







  VAR_10 = FUNC_4 (VAR_9);
  if (!FUNC_0 (VAR_10) && FUNC_13 (VAR_10))
    VAR_9 = FUNC_8 (FUNC_5 (VAR_10), VAR_9);

  return VAR_9;
}
