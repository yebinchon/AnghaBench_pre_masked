
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;



 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_3 ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;

int
FUNC_17 (tree VAR_4, tree VAR_5, int VAR_6)
{
  tree VAR_7 = FUNC_5 (VAR_4);
  tree VAR_8 = FUNC_5 (VAR_5);
  tree VAR_9 = FUNC_14 (FUNC_3 (VAR_4));
  tree VAR_10 = FUNC_14 (FUNC_3 (VAR_5));
  tree VAR_11 = FUNC_1 (VAR_4);
  tree VAR_12 = FUNC_1 (VAR_5);
  tree VAR_13 = FUNC_10 (FUNC_8 (VAR_7));
  tree VAR_14 = FUNC_10 (FUNC_8 (VAR_8));
  int VAR_15 = 0;
  int VAR_16 = 0;







  if (FUNC_2 (VAR_7))
    {
      VAR_6--;
      VAR_13 = FUNC_6 (VAR_13);
      if (!FUNC_4 (VAR_8))
 VAR_14 = FUNC_6 (VAR_14);
    }
  else if (FUNC_2 (VAR_8))
    {
      VAR_14 = FUNC_6 (VAR_14);
      if (!FUNC_4 (VAR_7))
 {
   VAR_6--;
   VAR_13 = FUNC_6 (VAR_13);
 }
    }


  if (FUNC_0 (VAR_7) != FUNC_0 (VAR_8))
    return 0;


  if (FUNC_0 (VAR_7))
    {
      VAR_13 = FUNC_15 (VAR_0, FUNC_8 (FUNC_8 (VAR_7)), VAR_13);
      VAR_14 = FUNC_15 (VAR_0, FUNC_8 (FUNC_8 (VAR_8)), VAR_14);
      VAR_6++;
    }

  VAR_3++;

  while (VAR_6--)
    {
      tree VAR_17 = FUNC_9 (VAR_13);
      tree VAR_18 = FUNC_9 (VAR_14);
      int VAR_19, VAR_20;
      int VAR_21 = -1;
      int VAR_22 = -1;

      if (FUNC_7 (VAR_17) == VAR_1)
 {
   VAR_17 = FUNC_8 (VAR_17);
   VAR_21 = FUNC_13 (VAR_17);
 }

      if (FUNC_7 (VAR_18) == VAR_1)
 {
   VAR_18 = FUNC_8 (VAR_18);
   VAR_22 = FUNC_13 (VAR_18);
 }

      if ((VAR_21 < 0) != (VAR_22 < 0))
 {






   if (VAR_21 >= 0)
     {
       switch (FUNC_7 (VAR_17))
  {
  case 129:
    VAR_17 = FUNC_8 (VAR_17);

  case 128:
    VAR_17 = FUNC_12 (VAR_17);
    break;

  default:
    break;
  }
     }
   else
     {
       switch (FUNC_7 (VAR_18))
  {
  case 129:
    VAR_18 = FUNC_8 (VAR_18);

  case 128:
    VAR_18 = FUNC_12 (VAR_18);
    break;

  default:
    break;
  }
     }
 }

      VAR_17 = FUNC_11 (VAR_17);
      VAR_18 = FUNC_11 (VAR_18);

      VAR_19 = !FUNC_16 (VAR_11, VAR_9, VAR_17, VAR_18, VAR_2);
      VAR_20 = !FUNC_16 (VAR_12, VAR_10, VAR_18, VAR_17, VAR_2);

      if (!VAR_19)
 VAR_16 = -1;
      if (!VAR_20)
 VAR_15 = -1;
      if (VAR_15 < 0 && VAR_16 < 0)


 break;

      if (VAR_19 && VAR_20 && VAR_21 >= 0 && VAR_22 >= 0)
 {


   if ((VAR_21 & VAR_22) == VAR_22)
     VAR_19 = 0;
   if ((VAR_21 & VAR_22) == VAR_21)
     VAR_20 = 0;
 }
      if (VAR_19 && !VAR_20 && !VAR_16)
 VAR_16 = 1;
      if (VAR_20 && !VAR_19 && !VAR_15)
 VAR_15 = 1;

      VAR_13 = FUNC_6 (VAR_13);
      VAR_14 = FUNC_6 (VAR_14);
    }

  VAR_3--;

  return (VAR_15 > 0) - (VAR_16 > 0);
}
