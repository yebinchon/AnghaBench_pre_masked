
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;




 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;

int
FUNC_9 (rtx VAR_2, rtx VAR_3)
{
  if (FUNC_1 (VAR_2) != 128 || !FUNC_0 (FUNC_6 (VAR_2)))
    return 0;
  if (FUNC_1 (VAR_3) != VAR_1 || FUNC_5 (VAR_3))
    return 0;
  switch (FUNC_1 (FUNC_7 (VAR_3, 0)))
    {
    case 128:
    case 130:
      break;
    case 131:
      return 0;
    case 129:
      {
 rtx VAR_4 = FUNC_7 (FUNC_7 (FUNC_7 (VAR_3, 0), 1), 1);

 if (FUNC_1 (VAR_4) != VAR_0
     || FUNC_4 (VAR_4) != FUNC_3 (FUNC_2 (VAR_3)))
   return 0;
      }
      break;
    default:
      FUNC_8 ();
    }
  return 1;
}
