
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int t_bool ;
struct loop {int num; } ;



 int FUNC_0 (int ) ;





 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int const FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int const,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_8 (struct loop*,int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static t_bool
FUNC_9 (struct loop *VAR_4, tree VAR_5, tree VAR_6,
   tree VAR_7, tree *VAR_8, int VAR_9)
{
  t_bool VAR_10 = VAR_2;
  tree VAR_11, VAR_12;
  tree VAR_13 = FUNC_5 (VAR_6);
  tree VAR_14;
  switch (FUNC_3 (VAR_6))
    {
    case 130:

      VAR_10 = FUNC_9 (VAR_4, VAR_5, FUNC_4 (VAR_6, 0),
        VAR_7, VAR_8, VAR_9);
      *VAR_8 = FUNC_7 (FUNC_5 (VAR_6),
       *VAR_8, VAR_5);
      break;

    case 132:

      VAR_10 = VAR_2;
      break;

    case 128:

      VAR_10 = FUNC_8
 (VAR_4, FUNC_1 (VAR_6), VAR_7, VAR_8, VAR_9);
      break;

    case 129:

      VAR_11 = FUNC_4 (VAR_6, 0);
      VAR_12 = FUNC_4 (VAR_6, 1);
      FUNC_2 (VAR_11);
      FUNC_2 (VAR_12);

      if (FUNC_3 (VAR_11) == 128)
 {
   if (FUNC_3 (VAR_12) == 128)
     {


       VAR_14 = *VAR_8;
       VAR_10 = FUNC_8
  (VAR_4, FUNC_1 (VAR_11), VAR_7,
   &VAR_14, VAR_9);

       if (VAR_10 == VAR_3)
  *VAR_8 = FUNC_6
    (VAR_4->num,
     FUNC_7 (VAR_13, VAR_14, VAR_5),
     129, VAR_12, VAR_5);

       else if (VAR_10 == VAR_2)
  {
    VAR_10 = FUNC_8
      (VAR_4, FUNC_1 (VAR_12), VAR_7,
       VAR_8, VAR_9);

    if (VAR_10 == VAR_3)
      *VAR_8 = FUNC_6
        (VAR_4->num,
         FUNC_7 (VAR_13, *VAR_8, VAR_5),
         129, VAR_11, VAR_5);

    else if (VAR_10 == VAR_1)
      *VAR_8 = VAR_0;
  }

       else if (VAR_10 == VAR_1)
  *VAR_8 = VAR_0;
     }

   else
     {


       VAR_10 = FUNC_8
  (VAR_4, FUNC_1 (VAR_11), VAR_7,
   VAR_8, VAR_9);
       if (VAR_10 == VAR_3)
  *VAR_8 = FUNC_6
    (VAR_4->num, FUNC_7 (VAR_13, *VAR_8,
          VAR_5),
     129, VAR_12, VAR_5);

       else if (VAR_10 == VAR_1)
  *VAR_8 = VAR_0;
     }
 }

      else if (FUNC_3 (VAR_12) == 128)
 {


   VAR_10 = FUNC_8
     (VAR_4, FUNC_1 (VAR_12), VAR_7,
      VAR_8, VAR_9);
   if (VAR_10 == VAR_3)
     *VAR_8 = FUNC_6
       (VAR_4->num, FUNC_7 (VAR_13, *VAR_8,
      VAR_5),
        129, VAR_11, VAR_5);

   else if (VAR_10 == VAR_1)
     *VAR_8 = VAR_0;
 }

      else



 VAR_10 = VAR_2;

      break;

    case 131:

      VAR_11 = FUNC_4 (VAR_6, 0);
      VAR_12 = FUNC_4 (VAR_6, 1);
      FUNC_2 (VAR_11);
      FUNC_2 (VAR_12);

      if (FUNC_3 (VAR_11) == 128)
 {


   VAR_10 = FUNC_8 (VAR_4, FUNC_1 (VAR_11), VAR_7,
     VAR_8, VAR_9);
   if (VAR_10 == VAR_3)
     *VAR_8 = FUNC_6
       (VAR_4->num, FUNC_7 (VAR_13, *VAR_8, VAR_5),
        131, VAR_12, VAR_5);

   else if (VAR_10 == VAR_1)
     *VAR_8 = VAR_0;
 }
      else



 VAR_10 = VAR_2;

      break;

    case 133:
      {


 tree VAR_15 = FUNC_0 (VAR_6);
 if (FUNC_3 (VAR_15) == 128)
   VAR_10 = FUNC_8 (VAR_4, FUNC_1 (VAR_15),
     VAR_7, VAR_8, VAR_9);
 else
   VAR_10 = VAR_2;
 break;
      }


    default:
      VAR_10 = VAR_2;
      break;
    }

  return VAR_10;
}
