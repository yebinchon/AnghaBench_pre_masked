
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
typedef unsigned int ULONGEST ;
typedef unsigned int LONGEST ;
typedef unsigned int DOUBLEST ;
 int FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct value*) ;
 struct type* FUNC_6 (struct value*) ;
 struct value* FUNC_7 (struct type*) ;
 struct type* VAR_9 ;
 struct type* VAR_10 ;
 struct type* VAR_11 ;
 struct type* VAR_12 ;
 struct type* VAR_13 ;
 struct type* VAR_14 ;
 struct type* VAR_15 ;
 struct type* FUNC_8 (struct type*) ;
 int VAR_16 ;
 int FUNC_9 (char*,...) ;
 unsigned int FUNC_10 (unsigned int,unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned int,unsigned int) ;
 int FUNC_13 (int ,struct type*,unsigned int) ;
 int FUNC_14 (int ,unsigned int,unsigned int) ;
 unsigned int FUNC_15 (struct value*) ;
 unsigned int FUNC_16 (struct value*) ;

struct value *
FUNC_17 (struct value *VAR_17, struct value *VAR_18, enum exp_opcode VAR_19)
{
  struct value *VAR_20;
  struct type *VAR_21, *VAR_22;

  FUNC_1 (VAR_17);
  FUNC_1 (VAR_18);
  FUNC_0 (VAR_17);
  FUNC_0 (VAR_18);
  VAR_21 = FUNC_8 (FUNC_6 (VAR_17));
  VAR_22 = FUNC_8 (FUNC_6 (VAR_18));

  if ((FUNC_2 (VAR_21) != VAR_6
       && FUNC_2 (VAR_21) != VAR_5
       && FUNC_2 (VAR_21) != VAR_7
       && FUNC_2 (VAR_21) != VAR_4
       && FUNC_2 (VAR_21) != VAR_8)
      ||
      (FUNC_2 (VAR_22) != VAR_6
       && FUNC_2 (VAR_22) != VAR_5
       && FUNC_2 (VAR_22) != VAR_7
       && FUNC_2 (VAR_22) != VAR_4
       && FUNC_2 (VAR_22) != VAR_8))
    FUNC_9 ("Argument to arithmetic operation not a number or boolean.");

  if (FUNC_2 (VAR_21) == VAR_6
      ||
      FUNC_2 (VAR_22) == VAR_6)
    {



      DOUBLEST VAR_23, VAR_24, VAR_25 = 0;
      VAR_23 = FUNC_15 (VAR_17);
      VAR_24 = FUNC_15 (VAR_18);
      switch (VAR_19)
 {
 case 146:
   VAR_25 = VAR_23 + VAR_24;
   break;

 case 128:
   VAR_25 = VAR_23 - VAR_24;
   break;

 case 132:
   VAR_25 = VAR_23 * VAR_24;
   break;

 case 142:
   VAR_25 = VAR_23 / VAR_24;
   break;

        case 140:
          VAR_25 = FUNC_10 (VAR_23, VAR_24);
          if (VAR_16)
            FUNC_9 ("Cannot perform exponentiation: %s", FUNC_11 (VAR_16));
          break;

 default:
   FUNC_9 ("Integer-only operation on floating point number.");
 }




      if (FUNC_3 (VAR_21) * 8 > VAR_1
   || FUNC_3 (VAR_22) * 8 > VAR_1)
 VAR_20 = FUNC_7 (VAR_12);
      else
 VAR_20 = FUNC_7 (VAR_9);

      FUNC_13 (FUNC_5 (VAR_20), FUNC_6 (VAR_20), VAR_25);
    }
  else if (FUNC_2 (VAR_21) == VAR_4
    &&
    FUNC_2 (VAR_22) == VAR_4)
    {
      LONGEST VAR_26, VAR_27, VAR_28 = 0;
      VAR_26 = FUNC_16 (VAR_17);
      VAR_27 = FUNC_16 (VAR_18);

      switch (VAR_19)
 {
 case 145:
   VAR_28 = VAR_26 & VAR_27;
   break;

 case 144:
   VAR_28 = VAR_26 | VAR_27;
   break;

 case 143:
   VAR_28 = VAR_26 ^ VAR_27;
          break;

        case 141:
          VAR_28 = VAR_26 == VAR_27;
          break;

        case 131:
          VAR_28 = VAR_26 != VAR_27;
   break;

 default:
   FUNC_9 ("Invalid operation on booleans.");
 }

      VAR_20 = FUNC_7 (VAR_21);
      FUNC_12 (FUNC_5 (VAR_20),
       FUNC_3 (VAR_21),
       VAR_28);
    }
  else




    {
      unsigned int VAR_29 = FUNC_3 (VAR_21);
      unsigned int VAR_30 = FUNC_3 (VAR_22);
      int VAR_31 = FUNC_4 (VAR_21);
      int VAR_32 = FUNC_4 (VAR_22);
      unsigned int VAR_33;
      int VAR_34;



      if (VAR_29 < FUNC_3 (VAR_10))
 {
   VAR_31 = 0;
   VAR_29 = FUNC_3 (VAR_10);
 }
      if (VAR_30 < FUNC_3 (VAR_10))
 {
   VAR_32 = 0;
   VAR_30 = FUNC_3 (VAR_10);
 }






      if (VAR_29 > VAR_30)
 {
   VAR_34 = VAR_31;
   VAR_33 = VAR_29;
 }
      else if (VAR_30 > VAR_29)
 {
   VAR_34 = VAR_32;
   VAR_33 = VAR_30;
 }
      else
 {
   VAR_34 = VAR_31 || VAR_32;
   VAR_33 = VAR_29;
 }

      if (VAR_34)
 {
   ULONGEST VAR_35, VAR_36, VAR_37 = 0;
   VAR_35 = (ULONGEST) FUNC_16 (VAR_17);
   VAR_36 = (ULONGEST) FUNC_16 (VAR_18);


   if (VAR_33 < sizeof (ULONGEST))
     {
       VAR_35 &= ((LONGEST) 1 << VAR_0 * VAR_33) - 1;
       VAR_36 &= ((LONGEST) 1 << VAR_0 * VAR_33) - 1;
     }

   switch (VAR_19)
     {
     case 146:
       VAR_37 = VAR_35 + VAR_36;
       break;

     case 128:
       VAR_37 = VAR_35 - VAR_36;
       break;

     case 132:
       VAR_37 = VAR_35 * VAR_36;
       break;

     case 142:
       VAR_37 = VAR_35 / VAR_36;
       break;

            case 140:
              VAR_37 = FUNC_10 (VAR_35, VAR_36);
              if (VAR_16)
                FUNC_9 ("Cannot perform exponentiation: %s", FUNC_11 (VAR_16));
              break;

     case 130:
       VAR_37 = VAR_35 % VAR_36;
       break;

     case 133:


       if (VAR_36 == 0)
  {
    VAR_37 = VAR_35;
  }
       else
  {
    VAR_37 = VAR_35 / VAR_36;

    VAR_37 = VAR_35 - (VAR_36 * VAR_37);
  }
       break;

     case 136:
       VAR_37 = VAR_35 << VAR_36;
       break;

     case 129:
       VAR_37 = VAR_35 >> VAR_36;
       break;

     case 145:
       VAR_37 = VAR_35 & VAR_36;
       break;

     case 144:
       VAR_37 = VAR_35 | VAR_36;
       break;

     case 143:
       VAR_37 = VAR_35 ^ VAR_36;
       break;

     case 138:
       VAR_37 = VAR_35 && VAR_36;
       break;

     case 137:
       VAR_37 = VAR_35 || VAR_36;
       break;

     case 134:
       VAR_37 = VAR_35 < VAR_36 ? VAR_35 : VAR_36;
       break;

     case 135:
       VAR_37 = VAR_35 > VAR_36 ? VAR_35 : VAR_36;
       break;

     case 141:
       VAR_37 = VAR_35 == VAR_36;
       break;

            case 131:
              VAR_37 = VAR_35 != VAR_36;
              break;

     case 139:
       VAR_37 = VAR_35 < VAR_36;
       break;

     default:
       FUNC_9 ("Invalid binary operation on numbers.");
     }
   VAR_20 = FUNC_7
     (VAR_33 > VAR_2 / VAR_0
      ? VAR_15
      : VAR_14);
   FUNC_14 (FUNC_5 (VAR_20),
      FUNC_3 (FUNC_6 (VAR_20)),
      VAR_37);
 }
      else
 {
   LONGEST VAR_38, VAR_39, VAR_40 = 0;
   VAR_38 = FUNC_16 (VAR_17);
   VAR_39 = FUNC_16 (VAR_18);

   switch (VAR_19)
     {
     case 146:
       VAR_40 = VAR_38 + VAR_39;
       break;

     case 128:
       VAR_40 = VAR_38 - VAR_39;
       break;

     case 132:
       VAR_40 = VAR_38 * VAR_39;
       break;

     case 142:
       VAR_40 = VAR_38 / VAR_39;
              break;

            case 140:
              VAR_40 = FUNC_10 (VAR_38, VAR_39);
              if (VAR_16)
                FUNC_9 ("Cannot perform exponentiation: %s", FUNC_11 (VAR_16));
       break;

     case 130:
       VAR_40 = VAR_38 % VAR_39;
       break;

     case 133:


       if (VAR_39 == 0)
  {
    VAR_40 = VAR_38;
  }
       else
  {
    VAR_40 = VAR_38 / VAR_39;

    if (VAR_3 && (VAR_40 < 0) && ((VAR_38 % VAR_39) != 0))
      {
        VAR_40--;
      }
    VAR_40 = VAR_38 - (VAR_39 * VAR_40);
  }
       break;

     case 136:
       VAR_40 = VAR_38 << VAR_39;
       break;

     case 129:
       VAR_40 = VAR_38 >> VAR_39;
       break;

     case 145:
       VAR_40 = VAR_38 & VAR_39;
       break;

     case 144:
       VAR_40 = VAR_38 | VAR_39;
       break;

     case 143:
       VAR_40 = VAR_38 ^ VAR_39;
       break;

     case 138:
       VAR_40 = VAR_38 && VAR_39;
       break;

     case 137:
       VAR_40 = VAR_38 || VAR_39;
       break;

     case 134:
       VAR_40 = VAR_38 < VAR_39 ? VAR_38 : VAR_39;
       break;

     case 135:
       VAR_40 = VAR_38 > VAR_39 ? VAR_38 : VAR_39;
       break;

     case 141:
       VAR_40 = VAR_38 == VAR_39;
       break;

     case 139:
       VAR_40 = VAR_38 < VAR_39;
       break;

     default:
       FUNC_9 ("Invalid binary operation on numbers.");
     }
   VAR_20 = FUNC_7
     (VAR_33 > VAR_2 / VAR_0
      ? VAR_13
      : VAR_11);
   FUNC_12 (FUNC_5 (VAR_20),
    FUNC_3 (FUNC_6 (VAR_20)),
    VAR_40);
 }
    }

  return VAR_20;
}
