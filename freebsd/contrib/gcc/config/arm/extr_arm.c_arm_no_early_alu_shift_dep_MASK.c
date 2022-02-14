
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6 (rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5 = FUNC_2 (VAR_3);
  rtx VAR_6 = FUNC_2 (VAR_4);
  rtx VAR_7;

  if (FUNC_1 (VAR_5) == VAR_0)
    VAR_5 = FUNC_0 (VAR_5);
  if (FUNC_1 (VAR_5) == VAR_1)
    VAR_5 = FUNC_4 (VAR_5, 0, 0);
  VAR_5 = FUNC_3 (VAR_5, 0);
  if (FUNC_1 (VAR_6) == VAR_0)
    VAR_6 = FUNC_0 (VAR_6);
  if (FUNC_1 (VAR_6) == VAR_1)
    VAR_6 = FUNC_4 (VAR_6, 0, 0);
  VAR_6 = FUNC_3 (VAR_6, 1);

  VAR_7 = FUNC_3 (VAR_6, 0);



  if (FUNC_1 (VAR_7) == VAR_2)
    VAR_7 = VAR_6;

  return !FUNC_5 (VAR_5, VAR_7);
}
