
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;

rtx
FUNC_5 (rtx VAR_2)
{
  rtx VAR_3;

  if (!FUNC_0 (VAR_2))
    return 0;
  for (VAR_3 = FUNC_1 (VAR_2); VAR_3; VAR_3 = FUNC_3 (VAR_3, 1))
    if (FUNC_2 (VAR_3) == VAR_0
 || FUNC_2 (VAR_3) == VAR_1)
      {
 if (FUNC_4 (VAR_2) == 0)
   return 0;
 return VAR_3;
      }
  return ((void*)0);
}
