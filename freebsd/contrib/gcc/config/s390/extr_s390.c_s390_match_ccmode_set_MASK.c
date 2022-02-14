
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;




 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_4, enum machine_mode VAR_5)
{
  enum machine_mode VAR_6;

  FUNC_6 (FUNC_1 (VAR_4) == VAR_3);

  if (FUNC_1 (FUNC_4 (VAR_4)) != VAR_2 || !FUNC_0 (FUNC_3 (FUNC_4 (VAR_4))))
    return 1;

  VAR_6 = FUNC_2 (FUNC_4 (VAR_4));
  switch (VAR_6)
    {
    case 134:
    case 135:
    case 129:
    case 130:
    case 136:
    case 139:
    case 138:
    case 137:
    case 133:
    case 132:
    case 131:
      if (VAR_5 != VAR_6)
        return 0;
      break;

    case 128:
      if (VAR_5 != 134 && VAR_5 != 129 && VAR_5 != VAR_1
   && VAR_5 != 135 && VAR_5 != 130)
        return 0;
      break;

    case 140:
    case 141:
      if (VAR_5 != VAR_0)
        return 0;
      break;

    default:
      FUNC_7 ();
    }

  return (FUNC_2 (FUNC_5 (VAR_4)) == VAR_6);
}
