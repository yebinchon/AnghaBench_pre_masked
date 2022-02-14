
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int,int ,int ,int ) ;

void
FUNC_14 (rtx VAR_1[3], bool VAR_2)
{
  rtx VAR_3, VAR_4, VAR_5, VAR_6;
  enum machine_mode VAR_7, VAR_8;
  rtx (*VAR_9) (rtx, rtx, rtx);
  rtx (*VAR_10) (rtx, rtx, rtx);
  rtx (*VAR_11) (rtx, rtx, rtx);

  VAR_7 = FUNC_1 (VAR_1[0]);
  VAR_8 = FUNC_1 (VAR_1[1]);

  switch (VAR_8)
    {
    case 128:
      VAR_9 = FUNC_10;
      VAR_10 = FUNC_9;
      VAR_11 = FUNC_6;
      break;
    case 129:
      VAR_9 = FUNC_12;
      VAR_10 = FUNC_11;
      VAR_11 = FUNC_5;
      break;
    default:
      FUNC_4 ();
    }


  if (VAR_2)
    VAR_5 = FUNC_0 (VAR_8);
  else
    {
      bool VAR_12;

      VAR_5 = FUNC_8 (VAR_8);

      VAR_12 = FUNC_13 (VAR_0, VAR_8, VAR_5, VAR_1[1],
     FUNC_0 (VAR_8));
      FUNC_3 (!VAR_12);
    }

  VAR_3 = FUNC_8 (VAR_7);
  VAR_4 = FUNC_8 (VAR_7);
  VAR_6 = FUNC_8 (VAR_7);

  FUNC_2 (VAR_9 (FUNC_7 (VAR_8, VAR_3), VAR_1[1], VAR_5));
  FUNC_2 (VAR_10 (FUNC_7 (VAR_8, VAR_4), VAR_1[1], VAR_5));
  FUNC_2 (VAR_11 (VAR_6, VAR_3, VAR_1[2]));
  FUNC_2 (VAR_11 (VAR_1[0], VAR_4, VAR_6));
}
