
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_12 (tree VAR_5, tree VAR_6)
{

  int VAR_7 = 1;
  int VAR_8 = 0;

  while (1)
    {
      tree VAR_9, VAR_10, VAR_11, VAR_12;
      if (VAR_5 == 0 && VAR_6 == 0)
 return VAR_7;


      if (VAR_5 == 0 || VAR_6 == 0)
 return 0;
      VAR_10 = VAR_9 = FUNC_3 (VAR_5);
      VAR_12 = VAR_11 = FUNC_3 (VAR_6);
      if (VAR_10 && VAR_10 != VAR_4 && FUNC_1 (VAR_10) != VAR_0)
 VAR_10 = FUNC_5 (VAR_10);
      if (VAR_12 && VAR_12 != VAR_4 && FUNC_1 (VAR_12) != VAR_0)
 VAR_12 = FUNC_5 (VAR_12);




      if (VAR_9 == 0)
 {
   if (FUNC_9 (VAR_11) != VAR_11)
     return 0;
 }
      else if (VAR_11 == 0)
 {
   if (FUNC_9 (VAR_9) != VAR_9)
     return 0;
 }

      else if (FUNC_1 (VAR_9) == VAR_1
        || FUNC_1 (VAR_11) == VAR_1)
 ;
      else if (!(VAR_8 = FUNC_10 (VAR_10, VAR_12)))
 {


   if (FUNC_1 (VAR_9) == VAR_3
       && (FUNC_6 (VAR_9) == 0
    || FUNC_8 (VAR_9))
       && FUNC_1 (FUNC_7 (VAR_9)) == VAR_2
       && FUNC_11 (FUNC_7 (VAR_9),
         FUNC_7 (VAR_11)))
     {
       tree VAR_13;
       for (VAR_13 = FUNC_4 (VAR_9);
     VAR_13; VAR_13 = FUNC_0 (VAR_13))
  {
    tree VAR_14 = FUNC_2 (VAR_13);
    if (VAR_14 && VAR_14 != VAR_4
        && FUNC_1 (VAR_14) != VAR_0)
      VAR_14 = FUNC_5 (VAR_14);
    if (FUNC_10 (VAR_14, VAR_12))
      break;
  }
       if (VAR_13 == 0)
  return 0;
     }
   else if (FUNC_1 (VAR_11) == VAR_3
     && (FUNC_6 (VAR_11) == 0
         || FUNC_8 (VAR_11))
     && FUNC_1 (FUNC_7 (VAR_11)) == VAR_2
     && FUNC_11 (FUNC_7 (VAR_11),
       FUNC_7 (VAR_9)))
     {
       tree VAR_15;
       for (VAR_15 = FUNC_4 (VAR_11);
     VAR_15; VAR_15 = FUNC_0 (VAR_15))
  {
    tree VAR_16 = FUNC_2 (VAR_15);
    if (VAR_16 && VAR_16 != VAR_4
        && FUNC_1 (VAR_16) != VAR_0)
      VAR_16 = FUNC_5 (VAR_16);
    if (FUNC_10 (VAR_16, VAR_10))
      break;
  }
       if (VAR_15 == 0)
  return 0;
     }
   else
     return 0;
 }


      if (VAR_8 > VAR_7)
 VAR_7 = VAR_8;

      VAR_5 = FUNC_0 (VAR_5);
      VAR_6 = FUNC_0 (VAR_6);
    }
}
