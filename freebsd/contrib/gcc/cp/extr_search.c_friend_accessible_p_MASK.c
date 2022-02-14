
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_13 (tree VAR_2, tree VAR_3, tree VAR_4)
{
  tree VAR_5;
  tree VAR_6;

  if (!VAR_2)
    return 0;

  if (FUNC_8 (VAR_2) == VAR_0
      || FUNC_4 (VAR_2))
    VAR_5 = FUNC_1 (VAR_2);
  else if (FUNC_11 (VAR_2))
    VAR_5 = FUNC_0 (VAR_2);
  else
    return 0;

  for (VAR_6 = VAR_5; VAR_6; VAR_6 = FUNC_7 (VAR_6))
    if (FUNC_12 (VAR_3, FUNC_9 (VAR_6), VAR_4))
      return 1;



  if (FUNC_11 (VAR_2))
    for (VAR_6 = FUNC_10 (VAR_2); VAR_6 && FUNC_11 (VAR_6); VAR_6 = FUNC_10 (VAR_6))
      if (FUNC_12 (VAR_3, VAR_6, VAR_4))
 return 1;

  if (FUNC_8 (VAR_2) == VAR_0
      || FUNC_4 (VAR_2))
    {


      if (FUNC_2 (VAR_2)
   && FUNC_13 (FUNC_3 (VAR_2), VAR_3, VAR_4))
 return 1;


      if (FUNC_5 (VAR_2))
 {
   int VAR_7;


   ++VAR_1;
   VAR_7 = FUNC_13 (FUNC_6 (VAR_2), VAR_3, VAR_4);
   --VAR_1;
   return VAR_7;
 }
    }

  return 0;
}
