
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {scalar_t__ (* merge_type_attributes ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_11 ;
 scalar_t__ FUNC_12 (scalar_t__) ;

tree
FUNC_13 (tree VAR_12, tree VAR_13)
{
  enum tree_code VAR_14 = FUNC_1 (VAR_12);
  enum tree_code VAR_15 = FUNC_1 (VAR_13);
  tree VAR_16;


  FUNC_9 (FUNC_0 (VAR_12)
       || FUNC_1 (VAR_12) == VAR_3
       || FUNC_1 (VAR_12) == VAR_1);
  FUNC_9 (FUNC_0 (VAR_13)
       || FUNC_1 (VAR_13) == VAR_3
       || FUNC_1 (VAR_13) == VAR_1);




  VAR_16 = (*VAR_11.merge_type_attributes) (VAR_12, VAR_13);




  if (VAR_14 == VAR_0 || VAR_15 == VAR_0)
    {
      tree VAR_17 = VAR_14 == VAR_0 ? FUNC_2 (VAR_12) : VAR_12;
      tree VAR_18 = VAR_15 == VAR_0 ? FUNC_2 (VAR_13) : VAR_13;
      tree VAR_19
 = FUNC_13 (VAR_17, VAR_18);

      if (VAR_14 == VAR_0 && FUNC_2 (VAR_12) == VAR_19)
 return FUNC_8 (VAR_12, VAR_16);
      else if (VAR_15 == VAR_0 && FUNC_2 (VAR_13) == VAR_19)
 return FUNC_8 (VAR_13, VAR_16);
      else
 return FUNC_8 (FUNC_7 (VAR_19),
          VAR_16);
    }

  if (VAR_14 == VAR_3)
    {


      if (FUNC_6 (VAR_12))
 return FUNC_8 (VAR_12, VAR_16);
      else
 return FUNC_8 (VAR_13, VAR_16);
    }


  if (VAR_14 == VAR_2 && VAR_15 != VAR_2)
    return FUNC_8 (VAR_12, VAR_16);
  if (VAR_15 == VAR_2 && VAR_14 != VAR_2)
    return FUNC_8 (VAR_13, VAR_16);


  if (VAR_14 != VAR_2)
    {
      VAR_12 = FUNC_12 (VAR_12);
      VAR_13 = FUNC_12 (VAR_13);
    }


  if (FUNC_5 (VAR_12) > FUNC_5 (VAR_13))
    return FUNC_8 (VAR_12, VAR_16);
  else if (FUNC_5 (VAR_13) > FUNC_5 (VAR_12))
    return FUNC_8 (VAR_13, VAR_16);


  if (FUNC_4 (VAR_12) == FUNC_4 (VAR_13))
    return FUNC_8 (VAR_12, VAR_16);

  if (VAR_14 != VAR_2)
    {

      if (FUNC_3 (VAR_12) > FUNC_3 (VAR_13))
 return FUNC_8 (VAR_12, VAR_16);
      if (FUNC_3 (VAR_13) > FUNC_3 (VAR_12))
 return FUNC_8 (VAR_13, VAR_16);



      if (FUNC_10 (FUNC_4 (VAR_12), VAR_9)
   || FUNC_10 (FUNC_4 (VAR_13), VAR_9))
 return FUNC_8 (VAR_9,
          VAR_16);
      if (FUNC_10 (FUNC_4 (VAR_12), VAR_8)
   || FUNC_10 (FUNC_4 (VAR_13), VAR_8))
 {
   tree VAR_20 = ((FUNC_6 (VAR_12) || FUNC_6 (VAR_13))
      ? VAR_9
      : VAR_8);
   return FUNC_8 (VAR_20, VAR_16);
 }


      if (FUNC_10 (FUNC_4 (VAR_12), VAR_10)
   || FUNC_10 (FUNC_4 (VAR_13), VAR_10))
 return FUNC_8 (VAR_10,
          VAR_16);
      if (FUNC_10 (FUNC_4 (VAR_12), VAR_7)
   || FUNC_10 (FUNC_4 (VAR_13), VAR_7))
 {
   tree VAR_21 = ((FUNC_6 (VAR_12) || FUNC_6 (VAR_13))
      ? VAR_10 : VAR_7);
   return FUNC_8 (VAR_21, VAR_16);
 }

      if (FUNC_6 (VAR_12))
 return FUNC_8 (VAR_12, VAR_16);
      else
 return FUNC_8 (VAR_13, VAR_16);
    }
  else
    {
      if (FUNC_10 (FUNC_4 (VAR_12), VAR_6)
   || FUNC_10 (FUNC_4 (VAR_13), VAR_6))
 return FUNC_8 (VAR_6,
          VAR_16);
      if (FUNC_10 (FUNC_4 (VAR_12), VAR_4)
   || FUNC_10 (FUNC_4 (VAR_13), VAR_4))
 return FUNC_8 (VAR_4,
          VAR_16);
      if (FUNC_10 (FUNC_4 (VAR_12), VAR_5)
   || FUNC_10 (FUNC_4 (VAR_13), VAR_5))
 return FUNC_8 (VAR_5,
          VAR_16);






      return FUNC_8 (VAR_12, VAR_16);
    }
}
