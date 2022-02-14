
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;

int
FUNC_7 (rtx VAR_3)
{
  rtx VAR_4;

  if (!FUNC_1 (VAR_3) || ! FUNC_2 (VAR_3))
    return 0;


  for (VAR_4 = FUNC_0 (VAR_3); VAR_4; VAR_4 = FUNC_6 (VAR_4, 1))
    {
      rtx VAR_5, VAR_6;

      if (FUNC_3 (VAR_5 = FUNC_6 (VAR_4, 0)) == VAR_2
   && FUNC_5 (VAR_6 = FUNC_6 (VAR_5, 0)) && FUNC_4 (VAR_6) == VAR_0
   && FUNC_3 (FUNC_6 (VAR_6, 0)) == VAR_1)
 return 1;
    }

  return 0;
}
