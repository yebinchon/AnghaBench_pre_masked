
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;







 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;

int
FUNC_9 (rtx VAR_4, enum machine_mode VAR_5)
{
  rtx VAR_6;
  enum machine_mode VAR_7;

  VAR_6 = FUNC_2 (VAR_4);
  if (FUNC_0 (VAR_6) == VAR_1)
    VAR_6 = FUNC_6 (VAR_6, 0, 0);
  FUNC_7 (FUNC_0 (VAR_6) == VAR_2);
  FUNC_7 (FUNC_0 (FUNC_4 (VAR_6)) == VAR_0);

  VAR_7 = FUNC_1 (FUNC_3 (VAR_6));
  switch (VAR_7)
    {
    case 130:
      if (VAR_5 != 130
   && (VAR_5 != 128
       || FUNC_5 (FUNC_4 (VAR_6), 1) != VAR_3))
 return 0;
      break;
    case 128:
      if (VAR_5 == 132)
 return 0;

    case 132:
      if (VAR_5 == 131 || VAR_5 == 130)
 return 0;

    case 131:
      if (VAR_5 == 129)
 return 0;

    case 129:
      break;

    default:
      FUNC_8 ();
    }

  return (FUNC_1 (FUNC_4 (VAR_6)) == VAR_7);
}
