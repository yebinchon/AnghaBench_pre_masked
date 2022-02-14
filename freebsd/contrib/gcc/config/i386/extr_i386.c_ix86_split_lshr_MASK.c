
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int const FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_15 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_16 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_17 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_21 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_23 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_24 (rtx *VAR_3, rtx VAR_4, enum machine_mode VAR_5)
{
  rtx VAR_6[2], VAR_7[2];
  int VAR_8;
  const int VAR_9 = VAR_5 == VAR_1 ? 32 : 64;

  if (FUNC_1 (VAR_3[2]) == VAR_0)
    {
      (VAR_5 == VAR_1 ? FUNC_14 : FUNC_15) (VAR_3, 2, VAR_6, VAR_7);
      VAR_8 = FUNC_2 (VAR_3[2]) & (VAR_9 * 2 - 1);

      if (VAR_8 >= VAR_9)
 {
   FUNC_4 (VAR_6[0], VAR_7[1]);
   FUNC_12 (VAR_7[0]);

   if (VAR_8 > VAR_9)
     FUNC_3 ((VAR_5 == VAR_1
   ? FUNC_6
   : FUNC_5) (VAR_6[0], VAR_6[0],
     FUNC_0 (VAR_8 - VAR_9)));
 }
      else
 {
   if (!FUNC_13 (VAR_3[0], VAR_3[1]))
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
      if (!FUNC_13 (VAR_3[0], VAR_3[1]))
 FUNC_4 (VAR_3[0], VAR_3[1]);

      (VAR_5 == VAR_1 ? FUNC_14 : FUNC_15) (VAR_3, 1, VAR_6, VAR_7);

      FUNC_3 ((VAR_5 == VAR_1
    ? FUNC_11
    : FUNC_8) (VAR_6[0], VAR_7[0], VAR_3[2]));
      FUNC_3 ((VAR_5 == VAR_1
    ? FUNC_6
    : FUNC_5) (VAR_7[0], VAR_7[0], VAR_3[2]));


      if (VAR_2 && VAR_4)
 {
   FUNC_12 (VAR_4);
   FUNC_3 ((VAR_5 == VAR_1
        ? FUNC_9
        : FUNC_7) (VAR_6[0], VAR_7[0], VAR_3[2],
            VAR_4));
 }
      else
 FUNC_3 (FUNC_10 (VAR_6[0], VAR_7[0], VAR_3[2]));
    }
}
