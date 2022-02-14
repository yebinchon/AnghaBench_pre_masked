
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int double_int ;






 scalar_t__ FUNC_0 (int ) ;



 int const FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int const) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static double_int
FUNC_19 (tree VAR_0, tree VAR_1)
{
  tree VAR_2 = FUNC_3 (VAR_0);
  tree VAR_3, VAR_4, VAR_5, VAR_6;
  double_int VAR_7, VAR_8, VAR_9, VAR_10;

  if (FUNC_0 (VAR_2))
    VAR_6 = FUNC_4 (VAR_2);
  else
    VAR_6 = FUNC_18 (VAR_2, VAR_2);

  VAR_8 = FUNC_17 (VAR_6);

  switch (FUNC_1 (VAR_0))
    {
    case 131:
      return FUNC_17 (VAR_0);

    case 129:
    case 134:
      VAR_3 = FUNC_2 (VAR_0, 0);
      VAR_5 = FUNC_3 (VAR_3);
      if (!FUNC_6 (VAR_5)


   && FUNC_6 (VAR_2)
   && !FUNC_15 (VAR_1, VAR_3))
 {



   return VAR_8;
 }



      VAR_7 = FUNC_19 (VAR_3, VAR_1);



      if (FUNC_12 (VAR_8, VAR_7) < 0)
 return VAR_8;

      return VAR_7;

    case 128:
    case 130:
      VAR_3 = FUNC_2 (VAR_0, 0);
      VAR_4 = FUNC_2 (VAR_0, 1);

      if (FUNC_1 (VAR_4) != 131
   || !FUNC_15 (VAR_1, VAR_3))
 return VAR_8;




      VAR_10 = FUNC_17 (VAR_4);
      VAR_10 = FUNC_10 (VAR_10, FUNC_5 (VAR_2));
      if (FUNC_1 (VAR_0) == 128)
 VAR_10 = FUNC_8 (VAR_10);

      VAR_7 = FUNC_19 (VAR_3, VAR_1);

      if (FUNC_9 (VAR_10))
 {
   VAR_10 = FUNC_8 (VAR_10);

   if (FUNC_9 (VAR_10))
     return VAR_8;;




   VAR_9 = FUNC_7 (VAR_8, FUNC_8 (VAR_10));
   if (FUNC_12 (VAR_7, VAR_9) > 0)
     return VAR_8;

   return FUNC_7 (VAR_7, VAR_10);
 }
      else
 {
   if (FUNC_12 (VAR_7, VAR_10) < 0)
     return VAR_8;

   if (FUNC_6 (VAR_2)
       && !FUNC_14 (VAR_1,
    VAR_3, FUNC_11 (VAR_2, VAR_10)))
     return VAR_8;

   VAR_7 = FUNC_7 (VAR_7, FUNC_8 (VAR_10));
 }

      return VAR_7;

    case 132:
    case 133:
      VAR_3 = FUNC_2 (VAR_0, 0);
      VAR_4 = FUNC_2 (VAR_0, 1);
      if (FUNC_1 (VAR_4) != 131
   || FUNC_16 (VAR_4))
 return VAR_8;

      VAR_7 = FUNC_19 (VAR_3, VAR_1);
      return FUNC_13 (VAR_7, FUNC_17 (VAR_4), 132);

    default:
      return VAR_8;
    }
}
