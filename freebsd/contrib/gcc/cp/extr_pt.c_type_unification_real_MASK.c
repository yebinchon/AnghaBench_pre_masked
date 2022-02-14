
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const unification_kind_t ;
typedef scalar_t__ tree ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int const,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const,int) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_18 (tree VAR_12,
         tree VAR_13,
         tree VAR_14,
         tree VAR_15,
         int VAR_16,
         unification_kind_t VAR_17,
         int VAR_18)
{
  tree VAR_19, VAR_20;
  int VAR_21;
  int VAR_22 = FUNC_6 (VAR_12);
  int VAR_23;
  int VAR_24 = 0;
  tree VAR_25, VAR_26;

  FUNC_9 (FUNC_1 (VAR_12) == VAR_3);
  FUNC_9 (VAR_14 == VAR_0 || FUNC_1 (VAR_14) == VAR_2);
  FUNC_9 (!VAR_15 || FUNC_1 (VAR_15) == VAR_2);
  FUNC_9 (VAR_22 > 0);

  switch (VAR_17)
    {
    case 130:
      VAR_23 = (VAR_8 | VAR_6
      | VAR_4);
      break;

    case 129:
      VAR_23 = VAR_5;
      break;

    case 128:
      VAR_23 = VAR_7;
      break;

    default:
      FUNC_10 ();
    }

 again:
  VAR_25 = VAR_14;
  VAR_26 = VAR_15;

  while (VAR_25 && VAR_25 != VAR_11
  && VAR_26 && VAR_26 != VAR_11)
    {
      VAR_19 = FUNC_4 (VAR_25);
      VAR_25 = FUNC_0 (VAR_25);
      VAR_20 = FUNC_4 (VAR_26);
      VAR_26 = FUNC_0 (VAR_26);

      if (VAR_20 == VAR_9)
 return 1;
      if (VAR_20 == VAR_10)


 continue;





      if (!FUNC_17 (VAR_19))
 {
   tree VAR_27;

   if (!FUNC_7 (VAR_20))
     VAR_27 = FUNC_3 (VAR_20);
   else
     VAR_27 = VAR_20;

   if (FUNC_13 (VAR_19, VAR_27))
     continue;
   if (VAR_17 != 128
       && FUNC_8 (VAR_19, VAR_27, FUNC_7 (VAR_20) ? VAR_0 : VAR_20,
      VAR_18))
     continue;

   return 1;
 }

      if (!FUNC_7 (VAR_20))
 {
   FUNC_9 (FUNC_3 (VAR_20) != VAR_0);
   if (FUNC_14 (VAR_20))
     {







       if (FUNC_12
    (VAR_12, VAR_13, VAR_19, VAR_20, VAR_17, VAR_23))
  continue;

       return 1;
     }
   VAR_20 = FUNC_16 (VAR_20);
   if (VAR_20 == VAR_9)
     return 1;
 }

      {
 int VAR_28 = VAR_23;

 if (!VAR_16)
   VAR_28 |= FUNC_11 (VAR_17, &VAR_19, &VAR_20);

 if (FUNC_15 (VAR_12, VAR_13, VAR_19, VAR_20, VAR_28))
   return 1;
      }
    }



  if (VAR_26 && VAR_26 != VAR_11 && VAR_25 == VAR_11)
    return 1;

  if (VAR_25 && VAR_25 != VAR_11
      && FUNC_2 (VAR_25) == VAR_0)
    return 1;

  if (!VAR_16)
    for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++)
      if (!FUNC_5 (VAR_13, VAR_21))
 {
   tree VAR_29;

          if (FUNC_5 (VAR_12, VAR_21) == VAR_9)
            continue;

          VAR_29 = FUNC_4 (FUNC_5 (VAR_12, VAR_21));





   if (FUNC_1 (VAR_29) == VAR_1
       && FUNC_17 (FUNC_3 (VAR_29))
       && !VAR_24++)
     goto again;

   return 2;
 }

  return 0;
}
