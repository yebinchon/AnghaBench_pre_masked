
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef scalar_t__ TREE_NO_WARNING ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_6 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_9 (scalar_t__) ;

tree
FUNC_10 (tree VAR_10, enum tree_code VAR_11, tree VAR_12)
{

  bool VAR_13 = 0;

  if (VAR_9)
    return FUNC_5 (VAR_5, VAR_10,
    FUNC_5 (VAR_11, VAR_7, VAR_7), VAR_12);
  if (FUNC_1 (VAR_10) == VAR_0)
    {
      tree VAR_14 = FUNC_2 (VAR_10, 0);

      if (FUNC_1 (VAR_14) == VAR_2)
 {
   VAR_14 = FUNC_2 (VAR_14, 0);
   if (FUNC_1 (VAR_14) == VAR_0)
     {
       VAR_14 = FUNC_2 (VAR_14, 0);
       if (FUNC_1 (VAR_14) == VAR_8
    && FUNC_0 (VAR_14))
  {
    tree VAR_15 = VAR_12;

    VAR_12 = FUNC_9 (VAR_12);
    if (VAR_12 != VAR_15)

      VAR_13 = 1;
  }
     }
 }
    }


  if (VAR_11 != VAR_6)
    {
      tree VAR_16 = FUNC_7 (VAR_4, VAR_3, VAR_10, VAR_12,
    FUNC_8 (VAR_11),
                     ((void*)0));
      if (VAR_16)
 {

   if (VAR_13)
     VAR_16 = FUNC_4 (VAR_1, FUNC_3 (VAR_16), VAR_12, VAR_16);

   TREE_NO_WARNING (VAR_17) = 1;
   return VAR_17;
 }
    }
  VAR_10 = FUNC_6 (VAR_10, VAR_11, VAR_12);

  if (VAR_13)
    VAR_10 = FUNC_4 (VAR_1, FUNC_3 (VAR_10), VAR_12, VAR_10);

  return VAR_10;
}
