
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_10 (tree VAR_9, tree VAR_10)
{
  bool VAR_11;
  tree VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  enum tree_code VAR_18 = FUNC_0 (VAR_10);

  if (VAR_18 == VAR_2)
    return VAR_10;

  if (VAR_18 == VAR_6
      || VAR_18 == VAR_5
      || VAR_18 == VAR_0)
    {
      VAR_11 = 0;

      VAR_14 = FUNC_10 (VAR_9, FUNC_1 (VAR_10, 0));
      if (FUNC_1 (VAR_10, 0) != VAR_14)
 VAR_11 = 1;

      VAR_15 = FUNC_10 (VAR_9, FUNC_1 (VAR_10, 1));
      if (FUNC_1 (VAR_10, 1) != VAR_15)
 VAR_11 = 1;

      if (VAR_18 == VAR_0)
 {
   VAR_16 = FUNC_10 (VAR_9, FUNC_1 (VAR_10, 2));
   if (FUNC_1 (VAR_10, 2) != VAR_16)
     VAR_11 = 1;
 }
      else
 VAR_16 = VAR_4;

      if (VAR_11)
 {
   if (VAR_18 == VAR_0)
     VAR_10 = FUNC_5 (VAR_18, VAR_8, VAR_14, VAR_15, VAR_16);
   else
     VAR_10 = FUNC_4 (VAR_18, VAR_8, VAR_14, VAR_15);
 }

      return VAR_10;
    }




  if (FUNC_0 (VAR_9) == VAR_1)
    {
      VAR_14 = FUNC_1 (VAR_9, 0);
      VAR_15 = FUNC_1 (VAR_9, 1);



      VAR_12 = FUNC_8 (VAR_10, VAR_14, VAR_15);
      if (FUNC_9 (VAR_12) || FUNC_7 (VAR_12))
 return VAR_12;

      VAR_12 = FUNC_8 (VAR_10, VAR_15, VAR_14);
      if (FUNC_9 (VAR_12) || FUNC_7 (VAR_12))
 return VAR_12;
    }
  if (FUNC_0 (VAR_10) == VAR_1)
    {
      VAR_14 = FUNC_1 (VAR_10, 0);
      VAR_15 = FUNC_1 (VAR_10, 1);


      VAR_12 = FUNC_8 (VAR_9, VAR_14, VAR_15);
      if (FUNC_9 (VAR_12))
 return VAR_12;
      VAR_12 = FUNC_8 (VAR_9, VAR_15, VAR_14);
      if (FUNC_9 (VAR_12))
 return VAR_12;
    }
  if (FUNC_0 (VAR_10) == VAR_3)
    {
      VAR_14 = FUNC_1 (VAR_10, 0);
      VAR_15 = FUNC_1 (VAR_10, 1);


      VAR_12 = FUNC_8 (VAR_9, VAR_14, VAR_15);
      if (FUNC_9 (VAR_12))
 return VAR_7;
      VAR_12 = FUNC_8 (VAR_9, VAR_15, VAR_14);
      if (FUNC_9 (VAR_12))
 return VAR_7;
    }

  VAR_13 = FUNC_2 (VAR_10);


  VAR_17 = FUNC_6 (VAR_9);
  VAR_12 = FUNC_3 (VAR_6, VAR_8, VAR_17, VAR_13);
  if (FUNC_7 (VAR_12))
    return VAR_12;


  VAR_12 = FUNC_3 (VAR_5, VAR_8, VAR_9, VAR_13);
  if (VAR_12 && FUNC_9 (VAR_12))
    return VAR_12;

  return VAR_10;
}
