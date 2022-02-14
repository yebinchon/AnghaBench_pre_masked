
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct z_candidate {int dummy; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;






 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;



 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;




 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;




 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;



 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct z_candidate**,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_20 (struct z_candidate **VAR_5, enum tree_code VAR_6,
   enum tree_code VAR_7, tree VAR_8, tree *VAR_9,
   int VAR_10)
{
  int VAR_11, VAR_12;
  int VAR_13 = 0;
  tree VAR_14, VAR_15[3];




  tree VAR_16[2];

  for (VAR_12 = 0; VAR_12 < 3; ++VAR_12)
    {
      if (VAR_9[VAR_12])
 VAR_15[VAR_12] = FUNC_13 (VAR_9[VAR_12]);
      else
 VAR_15[VAR_12] = VAR_2;
    }

  switch (VAR_6)
    {





    case 133:
    case 131:
    case 134:
    case 132:
    case 136:
      VAR_11 = 1;
      break;






    case 129:
      FUNC_10
 (VAR_5, VAR_8, VAR_4,
  VAR_2, VAR_9, VAR_15, VAR_10);
      return;

    case 128:
    case 130:
      FUNC_10
 (VAR_5, VAR_8, VAR_4,
  VAR_4, VAR_9, VAR_15, VAR_10);
      return;

    case 145:
    case 143:
    case 144:
      return;

    case 142:
    case 141:
    case 135:
    case 137:
    case 138:
    case 139:
    case 140:
      VAR_13 = 1;


    default:
      VAR_11 = 0;
    }

  VAR_16[0] = VAR_16[1] = VAR_2;

  for (VAR_12 = 0; VAR_12 < 2; ++VAR_12)
    {
      if (! VAR_9[VAR_12])
 ;
      else if (FUNC_2 (VAR_15[VAR_12]))
 {
   tree VAR_17;

   if (VAR_12 == 0 && VAR_6 == 136 && VAR_7 == VAR_1)
     return;

   VAR_17 = FUNC_12 (VAR_15[VAR_12]);

   if (VAR_6 == 142)
     {
       if (FUNC_15 (VAR_9[VAR_12]))
  VAR_16[VAR_12] = FUNC_16
    (VAR_2, FUNC_11 (VAR_15[VAR_12]), VAR_16[VAR_12]);

       VAR_16[VAR_12] = FUNC_16
  (VAR_2, FUNC_8 (VAR_15[VAR_12]), VAR_16[VAR_12]);
     }

   else if (! VAR_17)
     return;

   for (; VAR_17; VAR_17 = FUNC_4 (VAR_17))
     {
       VAR_14 = FUNC_6 (FUNC_6 (FUNC_3 (FUNC_7 (VAR_17))));

       if (VAR_12 == 0 && VAR_11
    && (FUNC_5 (VAR_14) != VAR_3
        || FUNC_0 (FUNC_6 (VAR_14))))
  continue;

       if (VAR_6 == 142 && FUNC_5 (VAR_14) == VAR_3)
  VAR_16[VAR_12] = FUNC_16 (VAR_2, VAR_14, VAR_16[VAR_12]);

       VAR_14 = FUNC_14 (VAR_14);
       if (VAR_12 != 0 || ! VAR_11)
  {
    VAR_14 = FUNC_8 (FUNC_17 (VAR_14));
    if (VAR_13 && FUNC_5 (VAR_14) == VAR_0)
      VAR_16[VAR_12] = FUNC_16 (VAR_2, VAR_14, VAR_16[VAR_12]);
    if (FUNC_1 (VAR_14))
      VAR_14 = FUNC_18 (VAR_14);
  }

       if (! FUNC_19 (VAR_14, VAR_16[VAR_12]))
  VAR_16[VAR_12] = FUNC_16 (VAR_2, VAR_14, VAR_16[VAR_12]);
     }
 }
      else
 {
   if (VAR_6 == 142 && FUNC_15 (VAR_9[VAR_12]))
     VAR_16[VAR_12] = FUNC_16
       (VAR_2, FUNC_11 (VAR_15[VAR_12]), VAR_16[VAR_12]);
   VAR_14 = FUNC_14 (VAR_15[VAR_12]);
   if (VAR_12 != 0 || ! VAR_11)
     {
       VAR_14 = FUNC_8 (FUNC_17 (VAR_14));
       if (VAR_13 && FUNC_5 (VAR_14) == VAR_0)
  VAR_16[VAR_12] = FUNC_16 (VAR_2, VAR_14, VAR_16[VAR_12]);
       if (FUNC_1 (VAR_14))
  VAR_14 = FUNC_18 (VAR_14);
     }
   VAR_16[VAR_12] = FUNC_16 (VAR_2, VAR_14, VAR_16[VAR_12]);
 }
    }



  for (; VAR_16[0]; VAR_16[0] = FUNC_4 (VAR_16[0]))
    {
      if (VAR_16[1])
 for (VAR_14 = VAR_16[1]; VAR_14; VAR_14 = FUNC_4 (VAR_14))
   FUNC_9
     (VAR_5, VAR_6, VAR_7, VAR_8, FUNC_7 (VAR_16[0]),
      FUNC_7 (VAR_14), VAR_9, VAR_15, VAR_10);
      else
 FUNC_9
   (VAR_5, VAR_6, VAR_7, VAR_8, FUNC_7 (VAR_16[0]),
    VAR_2, VAR_9, VAR_15, VAR_10);
    }
}
