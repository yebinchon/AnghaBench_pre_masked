
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_3__ {scalar_t__ (* signed_type ) (scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;



 int FUNC_0 (scalar_t__) ;

 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;


 int FUNC_2 (scalar_t__) ;

 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

 int const VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;

 int const FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

 int VAR_5 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (int const,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__,int,scalar_t__,int*) ;
 scalar_t__ FUNC_22 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_25 (scalar_t__) ;
 TYPE_2__ VAR_7 ;
 int FUNC_26 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_29 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_30 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_31 (tree VAR_11, tree VAR_12, enum tree_code VAR_13, tree VAR_14,
    bool *VAR_15)
{
  tree VAR_16 = FUNC_11 (VAR_11);
  enum tree_code VAR_17 = FUNC_4 (VAR_11);
  tree VAR_18 = (VAR_14 != 0 && (FUNC_3 (FUNC_13 (VAR_14))
       > FUNC_3 (FUNC_13 (VAR_16)))
  ? VAR_14 : VAR_16);
  tree VAR_19, VAR_20;
  int VAR_21 = VAR_17 == VAR_13;
  tree VAR_22 = VAR_3, VAR_23 = VAR_3;
  bool VAR_24;


  if (FUNC_25 (VAR_12))
    return VAR_3;

  if (FUNC_5 (VAR_17) == VAR_10)
    VAR_22 = FUNC_9 (VAR_11, 0);

  if (FUNC_5 (VAR_17) == VAR_9)
    VAR_22 = FUNC_9 (VAR_11, 0), VAR_23 = FUNC_9 (VAR_11, 1);



  switch (VAR_17)
    {
    case 140:


      if (VAR_13 == 135
   || FUNC_25 (FUNC_20 (VAR_5, VAR_11, VAR_12, 0)))
 return FUNC_20 (VAR_13, FUNC_24 (VAR_18, VAR_11),
       FUNC_24 (VAR_18, VAR_12), 0);
      break;

    case 143: case 133: case 132:

      if ((FUNC_1 (VAR_22)
    || FUNC_18 (VAR_22)
    || FUNC_0 (VAR_22)
    || FUNC_2 (VAR_22))


   && ((FUNC_17 (FUNC_11 (VAR_22))
        && ! (FUNC_4 (FUNC_11 (VAR_22)) == VAR_2
       && FUNC_12 (FUNC_11 (VAR_22)))
        && (FUNC_3 (FUNC_13 (VAR_18))
            > FUNC_3 (FUNC_13 (FUNC_11 (VAR_22)))))


       || (FUNC_3 (FUNC_13 (VAR_16))
    < FUNC_3 (FUNC_13 (FUNC_11 (VAR_22))))


       || (VAR_13 != 135
    && (FUNC_17 (VAR_18)
        != FUNC_17 (FUNC_11 (VAR_22))))))
 break;




      if ((VAR_20 = FUNC_24 (FUNC_11 (VAR_22), VAR_12)) != 0
   && FUNC_4 (VAR_20) == 140
   && ! FUNC_6 (VAR_20)
   && (0 != (VAR_19 = FUNC_21 (VAR_22, VAR_20, VAR_13,
      VAR_13 == 135
      ? VAR_18 : VAR_3,
      VAR_15))))
 return VAR_19;
      break;

    case 145:


      if (FUNC_17 (VAR_18) && !FUNC_17 (VAR_16))
        {
          tree VAR_25 = (*VAR_7.types.signed_type) (VAR_18);
          if ((VAR_19 = FUNC_21 (VAR_22, VAR_12, VAR_13, VAR_25, VAR_15))
       != 0)
            {
              VAR_19 = FUNC_22 (VAR_17, VAR_25, FUNC_24 (VAR_25, VAR_19));
              return FUNC_24 (VAR_18, VAR_19);
            }
          break;
        }

      if (FUNC_30 (VAR_12) == -1)
 break;

    case 134:
      if ((VAR_19 = FUNC_21 (VAR_22, VAR_12, VAR_13, VAR_14, VAR_15))
   != 0)
 return FUNC_22 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_19));
      break;

    case 136: case 138:


      if (FUNC_17 (VAR_18) != FUNC_17 (VAR_16))
 break;


      VAR_24 = 0;
      if ((VAR_19 = FUNC_21 (VAR_22, VAR_12, VAR_13, VAR_14,
    &VAR_24)) != 0
   && (VAR_20 = FUNC_21 (VAR_23, VAR_12, VAR_13, VAR_14,
       &VAR_24)) != 0)
 {
   if (FUNC_30 (VAR_12) < 0)
     VAR_17 = (VAR_17 == 136 ? 138 : 136);
   if (VAR_24)
     *VAR_15 = 1;
   return FUNC_23 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_19),
         FUNC_24 (VAR_18, VAR_20));
 }
      break;

    case 139: case 129:






      if (FUNC_4 (VAR_23) == 140
   && (VAR_17 == 129 || FUNC_17 (FUNC_11 (VAR_22)))


   && FUNC_16 (FUNC_11 (VAR_8)) > FUNC_8 (VAR_23)
   && FUNC_7 (VAR_23) == 0
   && 0 != (VAR_19 = FUNC_24 (VAR_18,
          FUNC_20 (139,
         VAR_8,
         VAR_23, 0)))
   && ! FUNC_10 (VAR_19))
 return FUNC_21 (FUNC_19 (VAR_17 == 139
           ? 135 : 141,
           VAR_18, FUNC_24 (VAR_18, VAR_22), VAR_19),
          VAR_12, VAR_13, VAR_14, VAR_15);
      break;

    case 131: case 137:




      VAR_24 = 0;
      VAR_19 = FUNC_21 (VAR_22, VAR_12, VAR_13, VAR_14, &VAR_24);
      VAR_20 = FUNC_21 (VAR_23, VAR_12, VAR_13, VAR_14, &VAR_24);
      if (VAR_19 != 0 && VAR_20 != 0
   && (VAR_13 == 135


       || (FUNC_26 (VAR_18, VAR_22, VAR_12)
           && FUNC_26 (VAR_18, VAR_23, VAR_12))))
 {
   if (VAR_24)
     *VAR_15 = 1;
   return FUNC_23 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_19),
         FUNC_24 (VAR_18, VAR_20));
 }



      if (VAR_17 == 137)
 VAR_17 = 131, VAR_23 = FUNC_27 (VAR_23);

      if (FUNC_4 (VAR_23) != 140)
 break;




      if (FUNC_30 (VAR_23) < 0 || FUNC_30 (VAR_12) < 0)
 {
   if (VAR_13 == 144)
     VAR_13 = 141;
   else if (VAR_13 == 141)
     VAR_13 = 144;
   else if (VAR_13 != 135
     && VAR_13 != VAR_0 && VAR_13 != VAR_1)
     break;
 }



      if (VAR_13 == 135
   || FUNC_25 (FUNC_20 (VAR_5, VAR_23, VAR_12, 0)))
 {
   VAR_23 = FUNC_20 (VAR_13, FUNC_24 (VAR_18, VAR_23),
        FUNC_24 (VAR_18, VAR_12), 0);

   if (VAR_23 == 0
       || (FUNC_10 (VAR_23) && !FUNC_15 (VAR_18)))
     break;
 }
      else
 break;




      if (FUNC_17 (VAR_18)
   && ! (FUNC_4 (VAR_18) == VAR_2 && FUNC_12 (VAR_18))
   && VAR_18 != VAR_16)
 break;



      if (VAR_19 != 0 && (FUNC_4 (VAR_19) != VAR_13 || VAR_13 == 135))
 return FUNC_23 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_19), VAR_23);




      if (VAR_13 == 135)
 return FUNC_23 (VAR_17, VAR_18,
       FUNC_23 (VAR_13, VAR_18,
      FUNC_24 (VAR_18, VAR_22),
      FUNC_24 (VAR_18, VAR_12)),
       VAR_23);

      break;

    case 135:


      if ((VAR_13 == VAR_5 || VAR_13 == VAR_0
    || VAR_13 == VAR_1 || VAR_13 == VAR_4)
   && FUNC_4 (FUNC_9 (VAR_11, 1)) == 140
   && FUNC_25 (FUNC_20 (VAR_5, VAR_23, VAR_12, 0)))
 return FUNC_28 (VAR_16, VAR_6, VAR_22);



    case 128: case 144: case 141:
    case 130: case 142:



      if (VAR_21
   && (VAR_19 = FUNC_21 (VAR_22, VAR_12, VAR_13, VAR_14,
       VAR_15)) != 0)
 return FUNC_23 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_19),
       FUNC_24 (VAR_18, VAR_23));
      else if (VAR_17 == 135 && VAR_13 == 135
        && (VAR_19 = FUNC_21 (VAR_23, VAR_12, VAR_13, VAR_14,
     VAR_15)) != 0)
 return FUNC_23 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_22),
       FUNC_24 (VAR_18, VAR_19));
      else if (FUNC_4 (VAR_23) != 140)
 return 0;



      if (VAR_17 == VAR_13
   && 0 != (VAR_19 = FUNC_20 (135, FUNC_24 (VAR_18, VAR_23),
         FUNC_24 (VAR_18, VAR_12), 0))
   && ! FUNC_10 (VAR_19))
 return FUNC_23 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_22), VAR_19);
      if ((FUNC_14 (VAR_18)
    || (FUNC_4 (VAR_18) == VAR_2 && FUNC_12 (VAR_18)))
   && ((VAR_13 == 135 && VAR_17 == 142)
       || (VAR_17 == 135
    && VAR_13 != VAR_5 && VAR_13 != VAR_0
    && VAR_13 != VAR_1 && VAR_13 != VAR_4)))
 {
   if (FUNC_25 (FUNC_20 (VAR_5, VAR_23, VAR_12, 0)))
     {
       if (FUNC_14 (VAR_18))
  *VAR_15 = 1;
       return FUNC_23 (VAR_17, VAR_18, FUNC_24 (VAR_18, VAR_22),
      FUNC_24 (VAR_18,
      FUNC_20 (128,
            VAR_23, VAR_12, 0)));
     }
   else if (FUNC_25 (FUNC_20 (VAR_5, VAR_12, VAR_23, 0)))
     {
       if (FUNC_14 (VAR_18))
  *VAR_15 = 1;
       return FUNC_23 (VAR_13, VAR_18, FUNC_24 (VAR_18, VAR_22),
      FUNC_24 (VAR_18,
      FUNC_20 (128,
            VAR_12, VAR_23, 0)));
     }
 }
      break;

    default:
      break;
    }

  return 0;
}
