
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_3__ {scalar_t__ (* type_for_mode ) (int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;







 scalar_t__ VAR_1 ;

 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 () ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_20 (scalar_t__) ;
 TYPE_2__ VAR_6 ;
 int FUNC_21 (int*,scalar_t__*,scalar_t__*,int,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (int const,scalar_t__,scalar_t__,int,scalar_t__,int) ;
 scalar_t__ FUNC_24 (int ,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_25 (scalar_t__,scalar_t__) ;
 int FUNC_26 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_27 (tree VAR_11, int *VAR_12, tree *VAR_13, tree *VAR_14,
     bool *VAR_15)
{
  enum tree_code VAR_16;
  tree VAR_17 = VAR_1, VAR_18 = VAR_1;
  tree VAR_19 = VAR_1, VAR_20 = VAR_1;
  int VAR_21, VAR_22;
  tree VAR_23, VAR_24, VAR_25, VAR_26;







  VAR_21 = 0;
  VAR_23 = VAR_24 = FUNC_14 (FUNC_7 (VAR_11), 0);

  while (1)
    {
      VAR_16 = FUNC_2 (VAR_11);
      VAR_19 = FUNC_7 (VAR_11);

      if (FUNC_1 (FUNC_3 (VAR_16)))
 {
   if (FUNC_4 (VAR_16) > 0)
     VAR_17 = FUNC_5 (VAR_11, 0);
   if (FUNC_3 (VAR_16) == VAR_8
       || FUNC_3 (VAR_16) == VAR_10
       || FUNC_3 (VAR_16) == VAR_7)
     VAR_20 = FUNC_7 (VAR_17);
   if (FUNC_3 (VAR_16) == VAR_7
       || FUNC_3 (VAR_16) == VAR_8
       || (FUNC_3 (VAR_16) == VAR_9
    && FUNC_4 (VAR_16) > 1))
     VAR_18 = FUNC_5 (VAR_11, 1);
 }

      switch (VAR_16)
 {
 case 128:
   VAR_21 = ! VAR_21, VAR_11 = VAR_17;
   continue;

 case 139: case 132:
 case 135: case 136: case 138: case 137:





   if (VAR_23 == 0 || VAR_24 == 0
       || ! FUNC_20 (VAR_23) || ! FUNC_20 (VAR_24)
       || FUNC_2 (VAR_18) != VAR_0)
     break;

   switch (VAR_16)
     {
     case 132:
       VAR_23 = VAR_24 = VAR_18;
       break;
     case 139:
       VAR_21 = ! VAR_21, VAR_23 = VAR_24 = VAR_18;
       break;
     case 137:
       VAR_23 = 0, VAR_24 = VAR_18;
       break;
     case 138:
       VAR_21 = ! VAR_21, VAR_23 = VAR_18, VAR_24 = 0;
       break;
     case 135:
       VAR_23 = VAR_18, VAR_24 = 0;
       break;
     case 136:
       VAR_21 = ! VAR_21, VAR_23 = 0, VAR_24 = VAR_18;
       break;
     default:
       FUNC_17 ();
     }






   if (FUNC_12 (VAR_20) && (VAR_23 == 0 || VAR_24 == 0))
     {
       if (! FUNC_21 (&VAR_22, &VAR_25, &VAR_26,
      VAR_21, VAR_23, VAR_24, 1,
      FUNC_14 (VAR_20, 0),
      VAR_1))
  break;

       VAR_21 = VAR_22, VAR_23 = VAR_25, VAR_24 = VAR_26;




       if (VAR_24 == 0 && VAR_23 && ! FUNC_20 (VAR_23))
  {
    VAR_21 = ! VAR_21;
    VAR_24 = FUNC_23 (134, VAR_1, VAR_23, 0,
          VAR_3, 0);
    VAR_23 = FUNC_14 (VAR_20, 0);
  }
     }

   VAR_11 = VAR_17;
   continue;

 case 133:

   VAR_25 = FUNC_23 (134, VAR_19,
          FUNC_14 (VAR_19, 0),
          0, VAR_24, 1);
   VAR_26 = FUNC_23 (134, VAR_19,
    FUNC_14 (VAR_19, 0),
    0, VAR_23, 0);
   VAR_23 = VAR_25, VAR_24 = VAR_26;
   VAR_11 = VAR_17;
   continue;

 case 141:

   VAR_11 = FUNC_13 (134, VAR_19, FUNC_22 (VAR_17),
   FUNC_14 (VAR_19, 1));
   continue;

 case 129: case 134:
   if (FUNC_2 (VAR_18) != VAR_0)
     break;



   if (!FUNC_12 (VAR_20)
       && !FUNC_10 (VAR_20))
     break;





   VAR_25 = FUNC_23 (VAR_16 == 134 ? 129 : 134,
          VAR_20, VAR_23, 0, VAR_18, 0);
   VAR_26 = FUNC_23 (VAR_16 == 134 ? 129 : 134,
    VAR_20, VAR_24, 1, VAR_18, 0);
   if ((VAR_25 != 0 && FUNC_6 (VAR_25))
       || (VAR_26 != 0 && FUNC_6 (VAR_26)))
     break;

   if (FUNC_10 (VAR_20))
     *VAR_15 = 1;



   if (VAR_25 && VAR_26 && FUNC_26 (VAR_26, VAR_25))
     {
       VAR_23 = FUNC_23 (129, VAR_20, VAR_26, 0,
     VAR_3, 0);
       VAR_24 = FUNC_23 (134, VAR_20, VAR_25, 0,
      VAR_3, 0);





       if (FUNC_25 (VAR_25, VAR_23)
    && FUNC_25 (VAR_26, VAR_24))
  VAR_23 = VAR_24 = 0;
       else
  VAR_21 = ! VAR_21;
     }
   else
     VAR_23 = VAR_25, VAR_24 = VAR_26;

   VAR_11 = VAR_17;
   continue;

 case 130: case 131: case 140:
   if (FUNC_11 (VAR_20) > FUNC_11 (VAR_19))
     break;

   if (! FUNC_0 (VAR_20)
       || (VAR_23 != 0 && ! FUNC_18 (VAR_23, VAR_20))
       || (VAR_24 != 0 && ! FUNC_18 (VAR_24, VAR_20)))
     break;

   VAR_25 = VAR_23, VAR_26 = VAR_24;

   if (VAR_25 != 0)
     VAR_25 = FUNC_16 (VAR_20, VAR_25);

   if (VAR_26 != 0)
     VAR_26 = FUNC_16 (VAR_20, VAR_26);
   if (!FUNC_12 (VAR_19) && FUNC_12 (VAR_20))
     {
       tree VAR_27;
       tree VAR_28 = VAR_6.types.type_for_mode
  (FUNC_9 (VAR_20), 1);




       VAR_27
  = FUNC_8 (VAR_28) ? FUNC_8 (VAR_28)
  : FUNC_8 (VAR_20);

       if (FUNC_11 (VAR_19) == FUNC_11 (VAR_20))
  VAR_27 = FUNC_15 (VAR_2, VAR_20,
          FUNC_16 (VAR_20,
          VAR_27),
          FUNC_16 (VAR_20,
          VAR_3));




       if (VAR_23 != 0)
  {
    if (! FUNC_21 (&VAR_22, &VAR_25, &VAR_26,
          1, VAR_25, VAR_26, 1,
          FUNC_16 (VAR_20,
          VAR_5),
          VAR_27))
      break;

    VAR_21 = (VAR_22 == VAR_21);
  }
       else
  {


    if (! FUNC_21 (&VAR_22, &VAR_25, &VAR_26,
          0, VAR_25, VAR_26, 1,
          FUNC_16 (VAR_20,
          VAR_5),
          VAR_27))
      break;

    VAR_21 = (VAR_21 != VAR_22);
  }
     }

   VAR_11 = VAR_17;
   VAR_23 = VAR_25, VAR_24 = VAR_26;
   continue;

 default:
   break;
 }

      break;
    }


  if (FUNC_2 (VAR_11) == VAR_0)
    {
      VAR_21 = VAR_21 == (FUNC_19 (FUNC_23 (138, VAR_4,
       VAR_11, 0, VAR_23, 0))
        && FUNC_19 (FUNC_23 (136, VAR_4,
          VAR_11, 1, VAR_24, 1)));
      VAR_23 = VAR_24 = 0;
      VAR_11 = 0;
    }

  *VAR_12 = VAR_21, *VAR_13 = VAR_23, *VAR_14 = VAR_24;
  return VAR_11;
}
