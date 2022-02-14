
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;


 size_t VAR_0 ;

 size_t VAR_1 ;

 size_t VAR_2 ;

 size_t VAR_3 ;

 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_9 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,int ,int ,int ,int ,int ) ;

tree
FUNC_14 (tree VAR_10, tree VAR_11, tree VAR_12, bool VAR_13,
    enum built_in_function VAR_14)
{
  tree VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

  if (!FUNC_13 (VAR_11,
    VAR_7,
    VAR_14 == 128
    ? VAR_4 : VAR_7,
    VAR_4, VAR_4, VAR_8))
    return 0;

  VAR_15 = FUNC_2 (VAR_11);

  VAR_16 = FUNC_2 (FUNC_0 (VAR_11));
  VAR_17 = FUNC_2 (FUNC_0 (FUNC_0 (VAR_11)));
  VAR_18 = FUNC_2 (FUNC_0 (FUNC_0 (FUNC_0 (VAR_11))));



  if (VAR_14 != 128 && FUNC_10 (VAR_16, VAR_15, 0))
    {
      if (VAR_14 != 129)
 return FUNC_9 (FUNC_1 (FUNC_1 (VAR_10)), VAR_15, VAR_17);
      else
 {
   tree VAR_20 = FUNC_6 (FUNC_1 (VAR_15), VAR_17);
   VAR_20 = FUNC_5 (VAR_6, FUNC_1 (VAR_15), VAR_15, VAR_20);
   return FUNC_6 (FUNC_1 (FUNC_1 (VAR_10)), VAR_20);
 }
    }

  if (! FUNC_7 (VAR_18, 1))
    return 0;

  if (! FUNC_8 (VAR_18))
    {
      if (! FUNC_7 (VAR_17, 1))
 {



   if (VAR_12 == VAR_5 || ! FUNC_7 (VAR_12, 1))
     {
       if (VAR_14 == 129 && VAR_13)
  {


    VAR_19 = VAR_9[131];
    if (!VAR_19)
      return 0;

    return FUNC_3 (VAR_19, VAR_11);
  }
       return 0;
     }
 }
      else
 VAR_12 = VAR_17;

      if (FUNC_12 (VAR_18, VAR_12))
 return 0;
    }

  VAR_11 = FUNC_4 (VAR_5, VAR_17);
  VAR_11 = FUNC_11 (VAR_5, VAR_16, VAR_11);
  VAR_11 = FUNC_11 (VAR_5, VAR_15, VAR_11);

  VAR_19 = VAR_5;


  switch (VAR_14)
    {
    case 131:
      VAR_19 = VAR_9[VAR_0];
      break;
    case 129:
      VAR_19 = VAR_9[VAR_2];
      break;
    case 130:
      VAR_19 = VAR_9[VAR_1];
      break;
    case 128:
      VAR_19 = VAR_9[VAR_3];
      break;
    default:
      break;
    }

  if (!VAR_19)
    return 0;

  return FUNC_3 (VAR_19, VAR_11);
}
