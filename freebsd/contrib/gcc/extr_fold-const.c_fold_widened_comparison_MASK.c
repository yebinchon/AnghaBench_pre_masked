
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_13 (enum tree_code VAR_9, tree VAR_10, tree VAR_11, tree VAR_12)
{
  tree VAR_13 = FUNC_7 (VAR_11, VAR_5);
  tree VAR_14;
  tree VAR_15, VAR_16;
  tree VAR_17, VAR_18;
  bool VAR_19, VAR_20;

  if (VAR_13 == VAR_11)
    return VAR_5;
  VAR_15 = FUNC_1 (VAR_13);
  if (FUNC_2 (FUNC_1 (VAR_11)) <= FUNC_2 (VAR_15))
    return VAR_5;

  VAR_14 = FUNC_7 (VAR_12, VAR_5);


  if ((VAR_9 == 133 || VAR_9 == 128
       || FUNC_3 (FUNC_1 (VAR_11)) == FUNC_3 (VAR_15))
      && (FUNC_1 (VAR_14) == VAR_15
   || (FUNC_2 (VAR_15)
       >= FUNC_2 (FUNC_1 (VAR_14)))
   || (FUNC_0 (VAR_14) == VAR_3
       && (FUNC_0 (VAR_15) == VAR_4
    || FUNC_0 (VAR_15) == VAR_0)
       && FUNC_8 (VAR_14, VAR_15))))
    return FUNC_4 (VAR_9, VAR_10, VAR_13,
         FUNC_5 (VAR_15, VAR_14));

  if (FUNC_0 (VAR_14) != VAR_3
      || FUNC_0 (VAR_15) != VAR_4
      || !FUNC_8 (VAR_14, VAR_15))
    return VAR_5;



  VAR_16 = FUNC_1 (VAR_14);
  VAR_17 = FUNC_10 (VAR_16, VAR_15);
  VAR_18 = FUNC_12 (VAR_16, VAR_15);

  VAR_19 = FUNC_9 (FUNC_6 (129, VAR_10,
         VAR_18, VAR_14));
  VAR_20 = FUNC_9 (FUNC_6 (129, VAR_10,
         VAR_14, VAR_17));

  switch (VAR_9)
    {
    case 133:
      if (VAR_19 || VAR_20)
 return FUNC_11 (VAR_10, VAR_8, VAR_11);
      break;

    case 128:
      if (VAR_19 || VAR_20)
 return FUNC_11 (VAR_10, VAR_7, VAR_11);
      break;

    case 129:
    case 130:
      if (VAR_19)
 return FUNC_11 (VAR_10, VAR_7, VAR_11);
      else if (VAR_20)
 return FUNC_11 (VAR_10, VAR_8, VAR_11);

    case 131:
    case 132:
      if (VAR_19)
 return FUNC_11 (VAR_10, VAR_8, VAR_11);
      else if (VAR_20)
 return FUNC_11 (VAR_10, VAR_7, VAR_11);

    default:
      break;
    }

  return VAR_5;
}
