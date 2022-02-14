
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_10 (tree VAR_2, tree VAR_3)
{
  tree VAR_4;

  if (FUNC_7 (VAR_2))
    VAR_4 = VAR_2;
  else if (FUNC_9 (VAR_2))
    return 0;
  else
    VAR_4 = FUNC_4 (VAR_2);



  if (FUNC_2 (VAR_4))
    {
      if (FUNC_8 (VAR_4, VAR_3))
 return 1;

      if (FUNC_5 (VAR_4))
 {
   tree VAR_5, VAR_6;
   int VAR_7;

   for (VAR_5 = FUNC_5 (VAR_4), VAR_7 = 0;
        FUNC_0 (VAR_5, VAR_7, VAR_6);
        VAR_7++)
     if (FUNC_8 (FUNC_1 (VAR_6), VAR_3))
       return 1;
 }
    }



  if ((FUNC_2 (VAR_4)
       || FUNC_3 (VAR_4) == VAR_1
       || FUNC_3 (VAR_4) == VAR_0)
      && FUNC_6 (VAR_4)
      && FUNC_2 (FUNC_6 (VAR_4))
      && FUNC_8 (FUNC_6 (VAR_4), VAR_3))
    return 1;

  return 0;
}
