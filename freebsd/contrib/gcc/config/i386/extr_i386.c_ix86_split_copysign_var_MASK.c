
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int,int ,int,int ) ;

void
FUNC_12 (rtx VAR_1[])
{
  enum machine_mode VAR_2, VAR_3;
  rtx VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

  VAR_4 = VAR_1[0];
  VAR_5 = VAR_1[1];
  VAR_6 = VAR_1[2];
  VAR_7 = VAR_1[3];
  VAR_9 = VAR_1[4];
  VAR_8 = VAR_1[5];

  VAR_2 = FUNC_0 (VAR_4);
  VAR_3 = FUNC_0 (VAR_8);

  if (FUNC_10 (VAR_6, VAR_7))
    {


      FUNC_4 (VAR_4, VAR_6);
      return;
    }

  if (FUNC_2 (VAR_8) && FUNC_1 (VAR_4) == FUNC_1 (VAR_8))
    {
      FUNC_5 (FUNC_1 (VAR_7) == FUNC_1 (VAR_5));

      VAR_10 = FUNC_6 (VAR_3, VAR_5, VAR_8);
      FUNC_3 (FUNC_9 (VAR_0, VAR_5, VAR_10));

      VAR_4 = VAR_8;
      VAR_6 = FUNC_11 (VAR_3, VAR_6, VAR_2, 0);
      VAR_10 = FUNC_8 (VAR_3, VAR_4);
      VAR_10 = FUNC_6 (VAR_3, VAR_10, VAR_6);
      FUNC_3 (FUNC_9 (VAR_0, VAR_4, VAR_10));
    }
  else
    {
      if (FUNC_1 (VAR_7) == FUNC_1 (VAR_5))
 {
   VAR_10 = FUNC_6 (VAR_3, VAR_5, VAR_8);
 }
      else
 {
          FUNC_5 (FUNC_1 (VAR_8) == FUNC_1 (VAR_5));
          VAR_7 = FUNC_11 (VAR_3, VAR_7, VAR_2, 0);
   VAR_10 = FUNC_6 (VAR_3, VAR_5, VAR_7);
 }
      FUNC_3 (FUNC_9 (VAR_0, VAR_5, VAR_10));

      if (FUNC_1 (VAR_6) == FUNC_1 (VAR_4))
 {
   VAR_4 = FUNC_11 (VAR_3, VAR_6, VAR_2, 0);
   VAR_10 = FUNC_6 (VAR_3, VAR_4, VAR_9);
 }
      else
 {
          FUNC_5 (FUNC_1 (VAR_9) == FUNC_1 (VAR_4));
   VAR_4 = VAR_9;
   VAR_6 = FUNC_11 (VAR_3, VAR_6, VAR_2, 0);
   VAR_10 = FUNC_6 (VAR_3, VAR_4, VAR_6);
 }
      FUNC_3 (FUNC_9 (VAR_0, VAR_4, VAR_10));
    }

  VAR_10 = FUNC_7 (VAR_3, VAR_4, VAR_5);
  FUNC_3 (FUNC_9 (VAR_0, VAR_4, VAR_10));
}
