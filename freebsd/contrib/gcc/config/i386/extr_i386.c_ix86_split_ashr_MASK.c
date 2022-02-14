
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int ) ;
 int const FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int,int *,int *) ;
 int FUNC_14 (int *,int,int *,int *) ;
 int FUNC_15 (int *,int,int *,int *) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (int *,int,int *,int *) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ,int ,int ) ;

void
FUNC_26 (rtx *VAR_3, rtx VAR_4, enum machine_mode VAR_5)
{
  rtx VAR_6[2], VAR_7[2];
  int VAR_8;
  const int VAR_9 = VAR_5 == VAR_1 ? 32 : 64;

  if (FUNC_1 (VAR_3[2]) == VAR_0)
    {
      (VAR_5 == VAR_1 ? FUNC_13 : FUNC_14) (VAR_3, 2, VAR_6, VAR_7);
      VAR_8 = FUNC_2 (VAR_3[2]) & (VAR_9 * 2 - 1);

      if (VAR_8 == VAR_9 * 2 - 1)
 {
   FUNC_4 (VAR_7[0], VAR_7[1]);
   FUNC_3 ((VAR_5 == VAR_1
        ? FUNC_6
        : FUNC_5) (VAR_7[0], VAR_7[0],
          FUNC_0 (VAR_9 - 1)));
   FUNC_4 (VAR_6[0], VAR_7[0]);

 }
      else if (VAR_8 >= VAR_9)
 {
   FUNC_4 (VAR_6[0], VAR_7[1]);
   FUNC_4 (VAR_7[0], VAR_6[0]);
   FUNC_3 ((VAR_5 == VAR_1
        ? FUNC_6
        : FUNC_5) (VAR_7[0], VAR_7[0],
          FUNC_0 (VAR_9 - 1)));
   if (VAR_8 > VAR_9)
     FUNC_3 ((VAR_5 == VAR_1
   ? FUNC_6
   : FUNC_5) (VAR_6[0], VAR_6[0],
     FUNC_0 (VAR_8 - VAR_9)));
 }
      else
 {
   if (!FUNC_12 (VAR_3[0], VAR_3[1]))
     FUNC_4 (VAR_3[0], VAR_3[1]);
   FUNC_3 ((VAR_5 == VAR_1
        ? FUNC_11
        : FUNC_8) (VAR_6[0], VAR_7[0], FUNC_0 (VAR_8)));
   FUNC_3 ((VAR_5 == VAR_1
        ? FUNC_6
        : FUNC_5) (VAR_7[0], VAR_7[0], FUNC_0 (VAR_8)));
 }
    }
  else
    {
      if (!FUNC_12 (VAR_3[0], VAR_3[1]))
 FUNC_4 (VAR_3[0], VAR_3[1]);

      (VAR_5 == VAR_1 ? FUNC_13 : FUNC_14) (VAR_3, 1, VAR_6, VAR_7);

      FUNC_3 ((VAR_5 == VAR_1
    ? FUNC_11
    : FUNC_8) (VAR_6[0], VAR_7[0], VAR_3[2]));
      FUNC_3 ((VAR_5 == VAR_1
    ? FUNC_6
    : FUNC_5) (VAR_7[0], VAR_7[0], VAR_3[2]));

      if (VAR_2 && VAR_4)
 {
   FUNC_4 (VAR_4, VAR_7[0]);
   FUNC_3 ((VAR_5 == VAR_1
        ? FUNC_6
        : FUNC_5) (VAR_4, VAR_4,
          FUNC_0 (VAR_9 - 1)));
   FUNC_3 ((VAR_5 == VAR_1
        ? FUNC_9
        : FUNC_7) (VAR_6[0], VAR_7[0], VAR_3[2],
      VAR_4));
 }
      else
 FUNC_3 (FUNC_10 (VAR_6[0], VAR_7[0], VAR_3[2]));
    }
}
