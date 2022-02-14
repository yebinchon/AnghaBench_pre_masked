
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

int
FUNC_18 (tree VAR_3, tree VAR_4)
{
  int VAR_5;
  tree VAR_6;
  tree VAR_7;

  if (VAR_4 == VAR_1 || VAR_3 == VAR_1)
    return 0;

  VAR_5 = FUNC_5 (VAR_4);

  if (VAR_5)

    {
      tree VAR_8 = FUNC_2 (FUNC_14 (VAR_3));
      tree VAR_9 = FUNC_4 (VAR_4);

      for (; VAR_8 ; VAR_8 = FUNC_8 (VAR_8))
 {
   if (VAR_9 == FUNC_7 (VAR_8))
     {
       tree VAR_10 = FUNC_6 (VAR_8);
       for (; VAR_10 ; VAR_10 = FUNC_8 (VAR_10))
  {
    tree VAR_11 = FUNC_11 (VAR_10);

    if (VAR_11 == VAR_1)
      continue;

    if (VAR_4 == VAR_11)
      return 1;

    if (FUNC_16 (VAR_4, VAR_11))
      return 1;
  }
       break;
     }
 }
    }
  else

    {
      if (FUNC_17 (VAR_4, VAR_3))
 return 1;

      VAR_6 = FUNC_0 (FUNC_10 (FUNC_14 (VAR_3)));
      for (; VAR_6 ; VAR_6 = FUNC_8 (VAR_6))
 {
   tree VAR_12 = FUNC_11 (VAR_6);

   if (FUNC_9 (VAR_12) == VAR_2 ?
       FUNC_16 (FUNC_14 (VAR_4), VAR_12) :
       FUNC_17 (VAR_4, VAR_12))
     return 1;
 }
    }

  if (VAR_5)
    {
      if (FUNC_3 (VAR_4))
 VAR_7 = FUNC_1 (VAR_4);
      else
 VAR_7 = VAR_1;
    }
  else
    {
      if (FUNC_12 (VAR_4))


 VAR_7 = FUNC_13 (VAR_4);
      else

 VAR_7 = FUNC_15 (FUNC_14 (VAR_4));
    }


  if (VAR_7 && FUNC_9 (VAR_7) == VAR_0)
    VAR_7 = VAR_1;

  if (VAR_7)
    return FUNC_18 (VAR_3, VAR_7);

  return 0;
}
