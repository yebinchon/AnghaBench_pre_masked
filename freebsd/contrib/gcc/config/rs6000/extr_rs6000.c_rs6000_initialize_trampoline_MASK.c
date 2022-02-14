
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;

void
FUNC_10 (rtx VAR_6, rtx VAR_7, rtx VAR_8)
{
  int VAR_9 = (VAR_4) ? 4 : 8;
  rtx VAR_10 = FUNC_5 (VAR_2, VAR_8);

  switch (VAR_0)
    {
    default:
      FUNC_6 ();







    case 130:
      {
 rtx VAR_11 = FUNC_7 (VAR_2);
 rtx VAR_12 = FUNC_7 (VAR_2);
 FUNC_4 (VAR_11, FUNC_0 (VAR_2, FUNC_0 (VAR_2, VAR_7)));
 FUNC_4 (VAR_12, FUNC_0 (VAR_2, FUNC_0 (VAR_2, FUNC_0 (VAR_7, VAR_9))));
 FUNC_4 (FUNC_0 (VAR_2, FUNC_0 (VAR_2, VAR_6)), VAR_11);
 FUNC_4 (FUNC_0 (VAR_2, FUNC_0 (VAR_2, FUNC_0 (VAR_6, VAR_9))), VAR_12);
 FUNC_4 (FUNC_0 (VAR_2, FUNC_0 (VAR_2, FUNC_0 (VAR_6, 2*VAR_9))), VAR_10);
      }
      break;


    case 129:
    case 128:
      FUNC_3 (FUNC_8 (VAR_2, "__trampoline_setup"),
    VAR_1, VAR_5, 4,
    VAR_6, VAR_2,
    FUNC_0 (FUNC_9 ()), VAR_3,
    VAR_7, VAR_2,
    VAR_10, VAR_2);
      break;
    }

  return;
}
