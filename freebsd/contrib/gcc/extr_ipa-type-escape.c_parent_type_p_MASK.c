
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_4, tree VAR_5)
{
  int VAR_6;
  tree VAR_7, VAR_8;
  if (FUNC_5 (VAR_4))
    for (VAR_7 = FUNC_5 (VAR_4), VAR_6 = 0;
  FUNC_0 (VAR_7, VAR_6, VAR_8); VAR_6++)
      {
 tree VAR_9 = FUNC_1 (VAR_8);
 if (VAR_9 == VAR_5)
   return 1;
 else if (FUNC_7 (VAR_9, VAR_5))
   return 1;
      }
  if (FUNC_3 (VAR_4) == VAR_3
      || FUNC_3 (VAR_4) == VAR_1)
    {
      tree VAR_10;


      for (VAR_10 = FUNC_6 (VAR_4);
    VAR_10;
    VAR_10 = FUNC_2 (VAR_10))
 {
   tree VAR_11;
   if (FUNC_3 (VAR_10) != VAR_0)
     continue;

   VAR_11 = FUNC_4 (VAR_10);
   if (VAR_11 == VAR_5)
     return 1;
 }



      for (VAR_10 = FUNC_6 (VAR_4);
    VAR_10;
    VAR_10 = FUNC_2 (VAR_10))
 {
   tree VAR_12;
   if (FUNC_3 (VAR_10) != VAR_0)
     continue;

   VAR_12 = FUNC_4 (VAR_10);
   if (FUNC_3 (VAR_12) == VAR_2
       || FUNC_3 (VAR_12) == VAR_1
       || FUNC_3 (VAR_12) == VAR_3)
     if (FUNC_7 (VAR_12, VAR_5))
       return 1;
 }
    }

  if (FUNC_3 (VAR_4) == VAR_2)
    {
      tree VAR_13;
      for (VAR_13 = FUNC_6 (VAR_4);
    VAR_13;
    VAR_13 = FUNC_2 (VAR_13))
 {
   tree VAR_14;
   if (FUNC_3 (VAR_13) != VAR_0)
     continue;

   VAR_14 = FUNC_4 (VAR_13);
   if (VAR_14 == VAR_5)
     return 1;


   if (FUNC_3 (VAR_14) == VAR_2
       || FUNC_3 (VAR_14) == VAR_1
       || FUNC_3 (VAR_14) == VAR_3)
     {
       if (FUNC_7 (VAR_14, VAR_5))
  return 1;
       else
  break;
     }
 }
    }
  return 0;
}
