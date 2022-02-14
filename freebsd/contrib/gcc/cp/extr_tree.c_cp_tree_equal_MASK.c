
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;




 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;





 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;


 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

 int FUNC_9 (int ,int ) ;







 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;

 scalar_t__ FUNC_20 (scalar_t__,int) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__,unsigned int) ;
 unsigned int FUNC_29 (scalar_t__) ;
 int FUNC_30 (scalar_t__) ;


 int FUNC_31 () ;
 int FUNC_32 (int ,int ,int ) ;
 int FUNC_33 (scalar_t__,scalar_t__) ;
bool
FUNC_34 (tree VAR_4, tree VAR_5)
{
  enum tree_code VAR_6, VAR_7;

  if (VAR_4 == VAR_5)
    return 1;
  if (!VAR_4 || !VAR_5)
    return 0;

  for (VAR_6 = FUNC_14 (VAR_4);
       VAR_6 == VAR_2 || VAR_6 == VAR_0
  || VAR_6 == VAR_1;
       VAR_6 = FUNC_14 (VAR_4))
    VAR_4 = FUNC_20 (VAR_4, 0);
  for (VAR_7 = FUNC_14 (VAR_5);
       VAR_7 == VAR_2 || VAR_7 == VAR_0
  || VAR_6 == VAR_1;
       VAR_7 = FUNC_14 (VAR_5))
    VAR_5 = FUNC_20 (VAR_5, 0);


  if (VAR_4 == VAR_5)
    return 1;

  if (VAR_6 != VAR_7)
    return 0;

  switch (VAR_6)
    {
    case 150:
      return FUNC_19 (VAR_4) == FUNC_19 (VAR_5)
 && FUNC_18 (VAR_4) == FUNC_18 (VAR_5);

    case 146:
      return FUNC_9 (FUNC_23 (VAR_4), FUNC_23 (VAR_5));

    case 142:
      return FUNC_24 (VAR_4) == FUNC_24 (VAR_5)
 && !FUNC_32 (FUNC_25 (VAR_4), FUNC_25 (VAR_5),
      FUNC_24 (VAR_4));

    case 156:
      return FUNC_34 (FUNC_22 (VAR_4), FUNC_22 (VAR_5))
 && FUNC_34 (FUNC_17 (VAR_4), FUNC_17 (VAR_5));

    case 154:



      if (!(FUNC_33 (FUNC_26 (VAR_4), FUNC_26 (VAR_5))

     && FUNC_20 (VAR_4, 0) == FUNC_20 (VAR_5, 0)))
 return 0;
      return FUNC_34 (FUNC_20 (VAR_4, 1), FUNC_20 (VAR_5, 1));

    case 137:
      if (!FUNC_34 (FUNC_21 (VAR_4), FUNC_21 (VAR_5)))
 return 0;
      if (!FUNC_34 (FUNC_27 (VAR_4), FUNC_27 (VAR_5)))
 return 0;
      return FUNC_34 (FUNC_13 (VAR_4), FUNC_13 (VAR_5));

    case 145:
      return FUNC_34 (FUNC_20 (VAR_4, 0), FUNC_20 (VAR_5, 0));

    case 157:
      if (!FUNC_34 (FUNC_20 (VAR_4, 0), FUNC_20 (VAR_5, 0)))
 return 0;
      return FUNC_34 (FUNC_20 (VAR_4, 1), FUNC_20 (VAR_5, 1));

    case 141:
      {
 tree VAR_8 = FUNC_20 (VAR_4, 0);
 tree VAR_9 = FUNC_20 (VAR_5, 0);





 if (FUNC_14 (VAR_8) == 136 && FUNC_3 (VAR_8) == VAR_3
     && !FUNC_4 (VAR_8))
          ;
 else if (FUNC_14 (VAR_9) == 136 && FUNC_3 (VAR_9) == VAR_3
   && !FUNC_4 (VAR_9))
          ;
 else if (!FUNC_34 (VAR_8, VAR_9))
   return 0;

 return FUNC_34 (FUNC_20 (VAR_4, 1), FUNC_20 (VAR_5, 1));
      }

    case 135:
      if (!FUNC_34 (FUNC_20 (VAR_4, 0), FUNC_20 (VAR_5, 0)))
 return 0;
      return FUNC_34 (FUNC_20 (VAR_4, 1), FUNC_20 (VAR_4, 1));

    case 155:
      if (FUNC_20 (VAR_4, 1) != FUNC_20 (VAR_5, 1))
 return 0;
      return FUNC_34 (FUNC_20 (VAR_4, 0), FUNC_20 (VAR_5, 0));

    case 136:
    case 148:
    case 153:
    case 152:
    case 140:
    case 151:
    case 143:
      return 0;

    case 158:
      return (FUNC_1 (VAR_4) == FUNC_1 (VAR_5)
       && FUNC_0 (VAR_4) == FUNC_0 (VAR_5)
       && FUNC_34 (FUNC_2 (VAR_4),
    FUNC_2 (VAR_5)));

    case 138:
      return (FUNC_11 (VAR_4) == FUNC_11 (VAR_5)
       && FUNC_12 (VAR_4) == FUNC_12 (VAR_5)
       && FUNC_33 (FUNC_26 (FUNC_10 (VAR_4)),
         FUNC_26 (FUNC_10 (VAR_5))));

    case 139:
      {
 unsigned VAR_10;
 tree VAR_11, VAR_12;

 if (!FUNC_34 (FUNC_20 (VAR_4, 0), FUNC_20 (VAR_5, 0)))
   return 0;
 VAR_11 = FUNC_20 (VAR_4, 1);
 VAR_12 = FUNC_20 (VAR_5, 1);

 if (!VAR_11 || !VAR_12)
   return !VAR_11 && !VAR_12;

 if (FUNC_29 (VAR_11) != FUNC_29 (VAR_12))
   return 0;

 for (VAR_10 = FUNC_29 (VAR_11); VAR_10--;)
   if (!FUNC_34 (FUNC_28 (VAR_11, VAR_10),
         FUNC_28 (VAR_12, VAR_10)))
     return 0;

 return 1;
      }

    case 144:
    case 159:
      {
 tree VAR_13 = FUNC_20 (VAR_4, 0);
 tree VAR_14 = FUNC_20 (VAR_5, 0);

 if (FUNC_14 (VAR_13) != FUNC_14 (VAR_14))
   return 0;
 if (FUNC_30 (VAR_13))
   return FUNC_33 (VAR_13, VAR_14);
 else
   return FUNC_34 (VAR_13, VAR_14);
      }

    case 147:


      if (FUNC_8 (VAR_4) != FUNC_8 (VAR_5))
 return 0;

      return FUNC_33 (FUNC_7 (VAR_4), FUNC_7 (VAR_5));

    case 149:
      if (FUNC_6 (VAR_4) != FUNC_6 (VAR_5))
 return 0;
      return FUNC_34 (FUNC_5 (VAR_4), FUNC_5 (VAR_5));

    default:
      break;
    }

  switch (FUNC_15 (VAR_6))
    {
    case 128:
    case 134:
    case 133:
    case 132:
    case 131:
    case 130:
      {
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < FUNC_16 (VAR_6); ++VAR_15)
   if (!FUNC_34 (FUNC_20 (VAR_4, VAR_15), FUNC_20 (VAR_5, VAR_15)))
     return 0;

 return 1;
      }

    case 129:
      return FUNC_33 (VAR_4, VAR_5);
    default:
      FUNC_31 ();
    }

  return 0;
}
