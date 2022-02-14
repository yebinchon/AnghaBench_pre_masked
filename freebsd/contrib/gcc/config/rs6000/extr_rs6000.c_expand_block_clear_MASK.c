
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_11 ;

int
FUNC_6 (rtx VAR_12[])
{
  rtx VAR_13 = VAR_12[0];
  rtx VAR_14 = VAR_12[1];
  rtx VAR_15 = VAR_12[3];
  bool VAR_16 = (FUNC_1 (VAR_14) == VAR_2);
  HOST_WIDE_INT VAR_17;
  HOST_WIDE_INT VAR_18;
  int VAR_19;
  int VAR_20;
  int VAR_21;


  if (! VAR_16)
    return 0;


  FUNC_5 (FUNC_1 (VAR_15) == VAR_2);
  VAR_17 = FUNC_2 (VAR_15) * VAR_0;


  VAR_18 = FUNC_2 (VAR_14);
  if (VAR_18 <= 0)
    return 1;





  if (VAR_8 && VAR_17 >= 128)
    VAR_21 = 16;
  else if (VAR_9 && VAR_17 >= 32)
    VAR_21 = 8;
  else
    VAR_21 = 4;

  if (VAR_11 && VAR_18 > 3 * VAR_21)
    return 0;
  if (! VAR_11 && VAR_18 > 8 * VAR_21)
    return 0;

  for (VAR_19 = 0; VAR_18 > 0; VAR_19 += VAR_20, VAR_18 -= VAR_20)
    {
      enum machine_mode VAR_22 = VAR_1;
      rtx VAR_23;

      if (VAR_18 >= 16 && VAR_8 && VAR_17 >= 128)
 {
   VAR_20 = 16;
   VAR_22 = VAR_10;
 }
      else if (VAR_18 >= 8 && VAR_9


   && (VAR_17 >= 64 || (!VAR_7 && VAR_17 >= 32)))
 {
   VAR_20 = 8;
   VAR_22 = VAR_3;
 }
      else if (VAR_18 >= 4 && (VAR_17 >= 32 || !VAR_7))
 {
   VAR_20 = 4;
   VAR_22 = VAR_6;
 }
      else if (VAR_18 >= 2 && (VAR_17 >= 16 || !VAR_7))
 {
   VAR_20 = 2;
   VAR_22 = VAR_4;
 }
      else
 {
   VAR_20 = 1;
   VAR_22 = VAR_5;
 }

      VAR_23 = FUNC_3 (VAR_13, VAR_22, VAR_19);

      FUNC_4 (VAR_23, FUNC_0 (VAR_22));
    }

  return 1;
}
