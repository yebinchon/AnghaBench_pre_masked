
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int
FUNC_5 (rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4 = FUNC_1 (VAR_2);
  int VAR_5;

  if (FUNC_0 (VAR_4) == VAR_1
      && FUNC_4 (VAR_4, VAR_3))
    return 1;
  else if (FUNC_0 (VAR_4) == VAR_0)
    {
      for (VAR_5 = 0; VAR_5 < FUNC_3 (VAR_4, 0); VAR_5++)
 {
   if (FUNC_4 (FUNC_2 (VAR_4, 0, VAR_5), VAR_3))
     return 1;
 }
    }
  return 0;
}
