
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

int
FUNC_6 (rtx VAR_1, rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4;

  if (VAR_2 == VAR_3)
    return 0;

  for (VAR_4 = FUNC_2 (VAR_2); VAR_4 != VAR_3; VAR_4 = FUNC_2 (VAR_4))
    if (FUNC_1 (VAR_4)
 && (FUNC_5 (VAR_1, FUNC_3 (VAR_4))
    || (FUNC_0 (VAR_4) && FUNC_4 (VAR_4, VAR_0, VAR_1))))
      return 1;
  return 0;
}
