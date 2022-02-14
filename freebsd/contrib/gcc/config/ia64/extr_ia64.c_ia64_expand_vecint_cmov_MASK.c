
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int,int,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_11 (rtx VAR_1[])
{
  enum machine_mode VAR_2 = FUNC_2 (VAR_1[0]);
  enum rtx_code VAR_3 = FUNC_1 (VAR_1[3]);
  bool VAR_4;
  rtx VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_5 = FUNC_5 (VAR_2);
  VAR_4 = FUNC_10 (VAR_3, VAR_2, VAR_5,
           VAR_1[4], VAR_1[5]);

  VAR_7 = VAR_1[1+VAR_4];
  VAR_8 = VAR_1[2-VAR_4];

  if (VAR_7 == FUNC_0 (VAR_2))
    {
      if (VAR_8 == FUNC_0 (VAR_2))
 {
   FUNC_4 (VAR_1[0], VAR_7);
   return;
 }

      VAR_6 = FUNC_8 (VAR_2, VAR_5);
      VAR_6 = FUNC_6 (VAR_2, VAR_6, VAR_8);
      FUNC_3 (FUNC_9 (VAR_0, VAR_1[0], VAR_6));
    }
  else if (VAR_8 == FUNC_0 (VAR_2))
    {
      VAR_6 = FUNC_6 (VAR_2, VAR_5, VAR_7);
      FUNC_3 (FUNC_9 (VAR_0, VAR_1[0], VAR_6));
    }
  else
    {
      rtx VAR_9, VAR_10;

      VAR_9 = FUNC_5 (VAR_2);
      VAR_6 = FUNC_6 (VAR_2, VAR_5, VAR_1[1+VAR_4]);
      FUNC_3 (FUNC_9 (VAR_0, VAR_9, VAR_6));

      VAR_10 = FUNC_5 (VAR_2);
      VAR_6 = FUNC_8 (VAR_2, VAR_5);
      VAR_6 = FUNC_6 (VAR_2, VAR_6, VAR_1[2-VAR_4]);
      FUNC_3 (FUNC_9 (VAR_0, VAR_10, VAR_6));

      VAR_6 = FUNC_7 (VAR_2, VAR_9, VAR_10);
      FUNC_3 (FUNC_9 (VAR_0, VAR_1[0], VAR_6));
    }
}
