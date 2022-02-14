
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

tree
FUNC_9 (tree VAR_2, tree VAR_3)
{
  tree VAR_4;

  for (VAR_4 = FUNC_7 (VAR_2); VAR_4; VAR_4 = FUNC_3 (VAR_4))
    {
      if (FUNC_5 (VAR_4))
 continue;
      if (FUNC_4 (VAR_4) != VAR_0 || FUNC_1 (VAR_4))
 continue;


      if (FUNC_2 (VAR_4) == VAR_1
   && VAR_3 == FUNC_8 (FUNC_6 (VAR_4)))
 {
   return VAR_4;
 }


      if (FUNC_2 (VAR_4) == VAR_1
   && FUNC_0 (FUNC_6 (VAR_4)))
 {
   tree VAR_5 = FUNC_9 (FUNC_6 (VAR_4), VAR_3);
   if (VAR_5)
     return VAR_5;
 }
    }
  return VAR_1;
}
