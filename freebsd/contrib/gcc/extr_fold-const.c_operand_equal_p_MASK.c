
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
 scalar_t__ FUNC_0 (scalar_t__) ;



 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;





 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;


 int FUNC_6 (int ,int ) ;
 int VAR_6 ;

 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;






 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__) ;

 unsigned int FUNC_26 (scalar_t__) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ,int ,int ) ;
 int FUNC_29 (int) ;






 int FUNC_30 (scalar_t__,scalar_t__) ;

int
FUNC_31 (tree VAR_7, tree VAR_8, unsigned int VAR_9)
{

  if (FUNC_9 (VAR_7) == VAR_2 || FUNC_9 (VAR_8) == VAR_2)
    return 0;




  if (FUNC_25 (FUNC_20 (VAR_7)) != FUNC_25 (FUNC_20 (VAR_8)))
    return 0;



  if (FUNC_24 (FUNC_20 (VAR_7)) != FUNC_24 (FUNC_20 (VAR_8)))
    return 0;

  FUNC_7 (VAR_7);
  FUNC_7 (VAR_8);




  if (FUNC_9 (VAR_7) != FUNC_9 (VAR_8)
      && FUNC_0 (VAR_7)
      && FUNC_0 (VAR_8))
    {
      enum tree_code VAR_10 = FUNC_29 (FUNC_9 (VAR_8));

      if (FUNC_9 (VAR_7) == VAR_10)
 return FUNC_31 (FUNC_14 (VAR_7, 0),
           FUNC_14 (VAR_8, 1), VAR_9)
        && FUNC_31 (FUNC_14 (VAR_7, 1),
       FUNC_14 (VAR_8, 0), VAR_9);
    }

  if (FUNC_9 (VAR_7) != FUNC_9 (VAR_8)


      || FUNC_9 (FUNC_20 (VAR_7)) == VAR_2
      || FUNC_9 (FUNC_20 (VAR_8)) == VAR_2
      || FUNC_23 (FUNC_20 (VAR_7)) != FUNC_23 (FUNC_20 (VAR_8)))
    return 0;
  if (VAR_7 == VAR_8 && ! (VAR_9 & VAR_4)
      && (FUNC_9 (VAR_7) == VAR_6
   || (! FUNC_17 (VAR_7) && ! FUNC_17 (VAR_8))))
    return 1;



  if (FUNC_11 (VAR_7) && FUNC_11 (VAR_8))
    switch (FUNC_9 (VAR_7))
      {
      case 146:
 return (! FUNC_12 (VAR_7)
  && ! FUNC_12 (VAR_8)
  && FUNC_30 (VAR_7, VAR_8));

      case 142:
 return (! FUNC_12 (VAR_7)
  && ! FUNC_12 (VAR_8)
  && FUNC_6 (FUNC_16 (VAR_7),
       FUNC_16 (VAR_8)));

      case 134:
 {
   tree VAR_11, VAR_12;

   if (FUNC_12 (VAR_7)
       || FUNC_12 (VAR_8))
     return 0;

   VAR_11 = FUNC_22 (VAR_7);
   VAR_12 = FUNC_22 (VAR_8);
   while (VAR_11 && VAR_12)
     {
       if (!FUNC_31 (FUNC_21 (VAR_11), FUNC_21 (VAR_12),
        VAR_9))
  return 0;
       VAR_11 = FUNC_8 (VAR_11);
       VAR_12 = FUNC_8 (VAR_12);
     }

   return VAR_11 == VAR_12;
 }

      case 155:
 return (FUNC_31 (FUNC_15 (VAR_7), FUNC_15 (VAR_8),
     VAR_9)
  && FUNC_31 (FUNC_13 (VAR_7), FUNC_13 (VAR_8),
        VAR_9));

      case 141:
 return (FUNC_18 (VAR_7) == FUNC_18 (VAR_8)
  && ! FUNC_28 (FUNC_19 (VAR_7),
         FUNC_19 (VAR_8),
         FUNC_18 (VAR_7)));

      case 161:
 return FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0),
    0);
      default:
 break;
      }

  if (VAR_9 & VAR_4)
    return 0;
  switch (FUNC_10 (FUNC_9 (VAR_7)))
    {
    case 128:

      switch (FUNC_9 (VAR_7))
        {
        case 144:
        case 153:
        case 152:
        case 149:
        case 151:
        case 150:
   if (FUNC_25 (FUNC_20 (VAR_7))
       != FUNC_25 (FUNC_20 (VAR_8)))
     return 0;
   break;
 default:
   break;
 }

      return FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9);


    case 132:
    case 133:
      if (FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9) && FUNC_31 (FUNC_14 (VAR_7, 1), FUNC_14 (VAR_8, 1), VAR_9))
 return 1;


      return (FUNC_27 (FUNC_9 (VAR_7))
       && FUNC_31 (FUNC_14 (VAR_7, 0),
      FUNC_14 (VAR_8, 1), VAR_9)
       && FUNC_31 (FUNC_14 (VAR_7, 1),
      FUNC_14 (VAR_8, 0), VAR_9));

    case 129:


      if (FUNC_17 (VAR_7)
   || FUNC_17 (VAR_8))
 return 0;

      switch (FUNC_9 (VAR_7))
 {
 case 147:
 case 160:
 case 145:
 case 143:
 case 148:
   return FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9);

 case 158:
 case 159:



   return (FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9)
    && (FUNC_30 (FUNC_14 (VAR_7, 1),
       FUNC_14 (VAR_8, 1))
        || FUNC_31 (FUNC_14 (VAR_7, 1), FUNC_14 (VAR_8, 1), VAR_9))
    && ((!FUNC_14 (VAR_7, 2) || !FUNC_14 (VAR_8, 2)) ? FUNC_14 (VAR_7, 2) == FUNC_14 (VAR_8, 2) : FUNC_31 (FUNC_14 (VAR_7, 2), FUNC_14 (VAR_8, 2), VAR_9))
    && ((!FUNC_14 (VAR_7, 3) || !FUNC_14 (VAR_8, 3)) ? FUNC_14 (VAR_7, 3) == FUNC_14 (VAR_8, 3) : FUNC_31 (FUNC_14 (VAR_7, 3), FUNC_14 (VAR_8, 3), VAR_9)));

 case 154:


   return ((!FUNC_14 (VAR_7, 0) || !FUNC_14 (VAR_8, 0)) ? FUNC_14 (VAR_7, 0) == FUNC_14 (VAR_8, 0) : FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9))
   && FUNC_31 (FUNC_14 (VAR_7, 1), FUNC_14 (VAR_8, 1), VAR_9)
   && ((!FUNC_14 (VAR_7, 2) || !FUNC_14 (VAR_8, 2)) ? FUNC_14 (VAR_7, 2) == FUNC_14 (VAR_8, 2) : FUNC_31 (FUNC_14 (VAR_7, 2), FUNC_14 (VAR_8, 2), VAR_9));

 case 157:
   return FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9) && FUNC_31 (FUNC_14 (VAR_7, 1), FUNC_14 (VAR_8, 1), VAR_9) && FUNC_31 (FUNC_14 (VAR_7, 2), FUNC_14 (VAR_8, 2), VAR_9);

 default:
   return 0;
 }

    case 130:
      switch (FUNC_9 (VAR_7))
 {
 case 161:
 case 138:
   return FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9);

 case 140:
 case 137:
   return FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9) && FUNC_31 (FUNC_14 (VAR_7, 1), FUNC_14 (VAR_8, 1), VAR_9);

 case 139:
 case 136:
 case 135:
   if (FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9) && FUNC_31 (FUNC_14 (VAR_7, 1), FUNC_14 (VAR_8, 1), VAR_9))
     return 1;


   return (FUNC_31 (FUNC_14 (VAR_7, 0),
       FUNC_14 (VAR_8, 1), VAR_9)
    && FUNC_31 (FUNC_14 (VAR_7, 1),
          FUNC_14 (VAR_8, 0), VAR_9));

 case 156:


   if (!FUNC_31 (FUNC_14 (VAR_7, 0), FUNC_14 (VAR_8, 0), VAR_9))
     return 0;

   {
     unsigned int VAR_13 = FUNC_26 (VAR_7);
     if (VAR_9 & VAR_5)
       VAR_13 &= VAR_0 | VAR_1;
     else
       VAR_13 &= VAR_0;
     if (!VAR_13)
       return 0;
   }




   VAR_7 = FUNC_14 (VAR_7, 1);
   VAR_8 = FUNC_14 (VAR_8, 1);
   while (VAR_7 && VAR_8)
     {
       if (! FUNC_31 (FUNC_21 (VAR_7), FUNC_21 (VAR_8),
         VAR_9))
  return 0;

       VAR_7 = FUNC_8 (VAR_7);
       VAR_8 = FUNC_8 (VAR_8);
     }



   return ! (VAR_7 || VAR_8);

 default:
   return 0;
 }

    case 131:

      return (FUNC_9 (VAR_7) == VAR_3
       && FUNC_1 (VAR_7) && FUNC_1 (VAR_8)
       && FUNC_2 (VAR_7) == FUNC_2 (VAR_8)
       && FUNC_3 (VAR_7) == FUNC_3 (VAR_8));

    default:
      return 0;
    }



}
