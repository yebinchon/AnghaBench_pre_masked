
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8 (tree VAR_4, tree VAR_5)
{
  tree VAR_6;
  tree VAR_7;

  if (VAR_4 == VAR_5)
    return 1;

  for (VAR_6 = VAR_4, VAR_7 = VAR_5;
       VAR_6 != VAR_0 && VAR_7 != VAR_0;
       VAR_6 = FUNC_0 (VAR_6), VAR_7 = FUNC_0 (VAR_7))
    {
      tree VAR_8 = FUNC_3 (VAR_6);
      tree VAR_9 = FUNC_3 (VAR_7);
      int VAR_10;

      FUNC_6 (FUNC_1 (VAR_8) == VAR_2);
      FUNC_6 (FUNC_1 (VAR_9) == VAR_2);

      if (FUNC_5 (VAR_8) != FUNC_5 (VAR_9))
 return 0;

      for (VAR_10 = 0; VAR_10 < FUNC_5 (VAR_9); ++VAR_10)
 {
          tree VAR_11 = FUNC_3 (FUNC_4 (VAR_8, VAR_10));
          tree VAR_12 = FUNC_3 (FUNC_4 (VAR_9, VAR_10));



          if (VAR_11 == VAR_3 || VAR_12 == VAR_3)
            return 1;

   if (FUNC_1 (VAR_11) != FUNC_1 (VAR_12))
     return 0;

   if (FUNC_1 (VAR_11) == VAR_1)
     continue;
   else if (!FUNC_7 (FUNC_2 (VAR_11), FUNC_2 (VAR_12)))
     return 0;
 }
    }

  if ((VAR_6 != VAR_0) != (VAR_7 != VAR_0))


    return 0;

  return 1;
}
