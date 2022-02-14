
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static tree
FUNC_11 (enum tree_code VAR_2, tree VAR_3, tree VAR_4, tree VAR_5)
{
  tree VAR_6, VAR_7, VAR_8, VAR_9;
  tree VAR_10 = VAR_1, VAR_11 = VAR_1, VAR_12;







  if (FUNC_0 (VAR_4) == VAR_0)
    {
      VAR_6 = FUNC_2 (VAR_4, 0);
      VAR_7 = FUNC_2 (VAR_4, 1);
    }
  else
    {
      VAR_6 = VAR_4;
      VAR_7 = FUNC_5 (VAR_3);
    }
  if (FUNC_0 (VAR_5) == VAR_0)
    {
      VAR_8 = FUNC_2 (VAR_5, 0);
      VAR_9 = FUNC_2 (VAR_5, 1);
    }
  else
    {
      VAR_8 = VAR_5;
      VAR_9 = FUNC_5 (VAR_3);
    }
  VAR_12 = VAR_1;

  if (FUNC_10 (VAR_7, VAR_9, 0))
    VAR_12 = VAR_7, VAR_10 = VAR_6, VAR_11 = VAR_8;
  else if (FUNC_10 (VAR_6, VAR_8, 0))
    VAR_12 = VAR_6, VAR_10 = VAR_7, VAR_11 = VAR_9;
  else if (FUNC_10 (VAR_6, VAR_9, 0))
    VAR_12 = VAR_6, VAR_10 = VAR_7, VAR_11 = VAR_8;
  else if (FUNC_10 (VAR_7, VAR_8, 0))
    VAR_12 = VAR_7, VAR_10 = VAR_6, VAR_11 = VAR_9;




  else if (FUNC_9 (VAR_7, 0)
    && FUNC_9 (VAR_9, 0))
    {
      HOST_WIDE_INT VAR_13, VAR_14, VAR_15;
      bool VAR_16 = 0;
      tree VAR_17;
      VAR_13 = FUNC_1 (VAR_7);
      VAR_14 = FUNC_1 (VAR_9);


      if ((VAR_13 >= 0 ? VAR_13 : -VAR_13)
   < (VAR_14 >= 0 ? VAR_14 : -VAR_14))
        {
   VAR_15 = VAR_13, VAR_13 = VAR_14, VAR_14 = VAR_15;
   VAR_10 = VAR_6, VAR_6 = VAR_8, VAR_8 = VAR_10;
   VAR_17 = VAR_7;
   VAR_16 = 1;
 }
      else
 VAR_17 = VAR_9;

      if (FUNC_6 (VAR_14) > 0 && VAR_13 % VAR_14 == 0)
        {
   VAR_10 = FUNC_7 (VAR_0, FUNC_3 (VAR_6), VAR_6,
         FUNC_4 (FUNC_3 (VAR_6),
          VAR_13 / VAR_14));
   VAR_11 = VAR_8;
   VAR_12 = VAR_17;
   if (VAR_16)
     VAR_17 = VAR_10, VAR_10 = VAR_11, VAR_11 = VAR_17;
 }
    }

  if (VAR_12)
    return FUNC_7 (VAR_0, VAR_3,
   FUNC_7 (VAR_2, VAR_3,
         FUNC_8 (VAR_3, VAR_10),
         FUNC_8 (VAR_3, VAR_11)),
   FUNC_8 (VAR_3, VAR_12));

  return VAR_1;
}
