
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {scalar_t__ (* merge_type_attributes ) (scalar_t__,scalar_t__) ;} ;





 scalar_t__ VAR_0 ;



 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__,int) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 int FUNC_25 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

tree
FUNC_28 (tree VAR_4, tree VAR_5)
{
  enum tree_code VAR_6;
  enum tree_code VAR_7;
  tree VAR_8;


  if (VAR_4 == VAR_5)
    return VAR_4;
  if (FUNC_26 (VAR_4) == FUNC_26 (VAR_5))
    return VAR_4;


  if (VAR_4 == VAR_1)
    return VAR_5;
  if (VAR_5 == VAR_1)
    return VAR_4;


  VAR_8 = (*VAR_2.merge_type_attributes) (VAR_4, VAR_5);

  if (FUNC_8 (VAR_4))
    VAR_4 = FUNC_7 (VAR_4);
  if (FUNC_8 (VAR_5))
    VAR_5 = FUNC_7 (VAR_5);

  VAR_6 = FUNC_1 (VAR_4);
  VAR_7 = FUNC_1 (VAR_5);

  switch (VAR_6)
    {
    case 130:
    case 129:

      {
 tree VAR_9 = FUNC_28 (FUNC_2 (VAR_4), FUNC_2 (VAR_5));
 int VAR_10 = FUNC_25 (VAR_4);

 if (VAR_6 == 130)
   VAR_4 = FUNC_17 (VAR_9);
 else
   VAR_4 = FUNC_20 (VAR_9);
 VAR_4 = FUNC_21 (VAR_4, VAR_8);
 VAR_4 = FUNC_23 (VAR_4, VAR_10);

 if (FUNC_1 (VAR_9) == 132)
   VAR_4 = FUNC_19 (VAR_4);

 return VAR_4;
      }

    case 131:
      {
 int VAR_11;
 tree VAR_12;
 VAR_11 = FUNC_25 (VAR_4);
 VAR_12 = FUNC_28 (FUNC_10 (VAR_4),
          FUNC_10 (VAR_5));
 VAR_4 = FUNC_18 (FUNC_9 (VAR_4),
    VAR_12);
 VAR_4 = FUNC_23 (VAR_4, VAR_11);
 break;
      }

    case 134:
      {
 tree VAR_13 = FUNC_28 (FUNC_2 (VAR_4), FUNC_2 (VAR_5));

 if (VAR_13 == FUNC_2 (VAR_4) && FUNC_6 (VAR_4))
   return FUNC_21 (VAR_4, VAR_8);
 if (VAR_13 == FUNC_2 (VAR_5) && FUNC_6 (VAR_5))
   return FUNC_21 (VAR_5, VAR_8);

 VAR_4 = FUNC_13
   (VAR_13, FUNC_6 (FUNC_6 (VAR_4) ? VAR_4 : VAR_5));
 break;
      }

    case 133:


      {
 tree VAR_14 = FUNC_28 (FUNC_2 (VAR_4), FUNC_2 (VAR_5));
 tree VAR_15 = FUNC_4 (VAR_4);
 tree VAR_16 = FUNC_4 (VAR_5);
 tree VAR_17, VAR_18;


 if (VAR_14 == FUNC_2 (VAR_4) && ! VAR_16)
   return FUNC_24 (VAR_4, VAR_8);
 if (VAR_14 == FUNC_2 (VAR_5) && ! VAR_15)
   return FUNC_24 (VAR_5, VAR_8);


 if (VAR_15 == VAR_0 || FUNC_3 (VAR_15) == VAR_3)
   {
     VAR_17 = FUNC_15 (VAR_14, VAR_16);
     if ((VAR_18 = FUNC_11 (VAR_5)))
       VAR_17 = FUNC_14 (VAR_17, VAR_18);
     return FUNC_24 (VAR_17, VAR_8);
   }
 VAR_18 = FUNC_11 (VAR_4);
 if (VAR_16 == VAR_0 || FUNC_3 (VAR_16) == VAR_3)
   {
     VAR_17 = FUNC_15 (VAR_14, VAR_15);
     if (VAR_18)
       VAR_17 = FUNC_14 (VAR_17, VAR_18);
     return FUNC_24 (VAR_17, VAR_8);
   }

 VAR_17 = FUNC_15 (VAR_14, FUNC_22 (VAR_15, VAR_16));
 VAR_4 = FUNC_14 (VAR_17, VAR_18);
 break;
      }

    case 132:
      {


 tree VAR_19 = FUNC_2 (FUNC_3 (FUNC_4 (VAR_5)));
 tree VAR_20 = FUNC_11 (VAR_4);
 tree VAR_21;




 VAR_4 = FUNC_15 (FUNC_2 (VAR_4),
      FUNC_0 (FUNC_4 (VAR_4)));
 VAR_5 = FUNC_15 (FUNC_2 (VAR_5),
      FUNC_0 (FUNC_4 (VAR_5)));
 VAR_21 = FUNC_28 (VAR_4, VAR_5);
 VAR_21 = FUNC_16 (VAR_19, FUNC_2 (VAR_21),
      FUNC_4 (VAR_21));
 VAR_4 = FUNC_14 (VAR_21, VAR_20);
 break;
      }

    case 128:



      return VAR_4;

    default:;
    }

  if (FUNC_12 (FUNC_5 (VAR_4), VAR_8))
    return VAR_4;
  else if (FUNC_12 (FUNC_5 (VAR_5), VAR_8))
    return VAR_5;
  else
    return FUNC_24 (VAR_4, VAR_8);
}
