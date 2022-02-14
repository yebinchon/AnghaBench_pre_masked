
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum reg_note { ____Placeholder_reg_note } reg_note ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;

rtx
FUNC_5 (rtx VAR_0, enum reg_note VAR_1, rtx VAR_2)
{
  rtx VAR_3;

  FUNC_4 (VAR_0);


  if (! FUNC_0 (VAR_0))
    return 0;
  if (VAR_2 == 0)
    {
      for (VAR_3 = FUNC_1 (VAR_0); VAR_3; VAR_3 = FUNC_3 (VAR_3, 1))
 if (FUNC_2 (VAR_3) == VAR_1)
   return VAR_3;
      return 0;
    }

  for (VAR_3 = FUNC_1 (VAR_0); VAR_3; VAR_3 = FUNC_3 (VAR_3, 1))
    if (FUNC_2 (VAR_3) == VAR_1 && VAR_2 == FUNC_3 (VAR_3, 0))
      return VAR_3;
  return 0;
}
