
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int) ;

int
FUNC_3 (const char *VAR_4, HOST_WIDE_INT VAR_5)
{
  enum machine_mode VAR_6, VAR_7;
  int VAR_8;
  int VAR_9, VAR_10;


  if (VAR_4[0] == 'x')
    VAR_10 = -1;
  else
    VAR_10 = VAR_4[0] - '0';

  switch (VAR_4[1])
    {
    case 'Q':
      VAR_7 = VAR_2;
      break;
    case 'H':
      VAR_7 = VAR_1;
      break;
    case 'S':
      VAR_7 = VAR_3;
      break;
    default:
      return 0;
    }

  switch (VAR_4[2])
    {
    case 'H':
      VAR_6 = VAR_1;
      break;
    case 'S':
      VAR_6 = VAR_3;
      break;
    case 'D':
      VAR_6 = VAR_0;
      break;
    default:
      return 0;
    }

  switch (VAR_4[3])
    {
    case '0':
      VAR_8 = 0;
      break;
    case 'F':
      VAR_8 = -1;
      break;
    default:
      return 0;
    }

  if (FUNC_1 (VAR_6) <= FUNC_1 (VAR_7))
    return 0;

  VAR_9 = FUNC_2 (FUNC_0 (VAR_5), VAR_6, VAR_7, VAR_8);
  if (VAR_9 < 0)
    return 0;
  if (VAR_10 != -1 && VAR_10 != VAR_9)
    return 0;

  return 1;
}
