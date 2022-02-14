
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int rtvec ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int,int ) ;

rtx
FUNC_6 (enum machine_mode VAR_0, rtvec VAR_1)
{
  enum machine_mode VAR_2 = FUNC_2 (VAR_0);
  int VAR_3 = FUNC_3 (VAR_0);
  rtx VAR_4;
  int VAR_5;


  VAR_4 = FUNC_4 (VAR_1, VAR_3 - 1);
  for (VAR_5 = VAR_3 - 2; VAR_5 >= 0; VAR_5--)
    if (FUNC_4 (VAR_1, VAR_5) != VAR_4)
      break;



  if (VAR_5 == -1)
    {
      if (VAR_4 == FUNC_0 (VAR_2))
 return FUNC_0 (VAR_0);
      else if (VAR_4 == FUNC_1 (VAR_2))
 return FUNC_1 (VAR_0);
    }

  return FUNC_5 (VAR_0, VAR_1);
}
