
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int rtvec ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int ,...) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int,int ) ;

rtx
FUNC_6 (enum machine_mode VAR_7, bool VAR_8, bool VAR_9)
{
  enum machine_mode VAR_10;
  HOST_WIDE_INT VAR_11, VAR_12;
  int VAR_13 = 63;
  rtvec VAR_14;
  rtx VAR_15;


  if (VAR_7 == VAR_3)
    VAR_12 = 0x80000000, VAR_11 = VAR_12 < 0;
  else if (VAR_2 >= 64)
    VAR_12 = (HOST_WIDE_INT)1 << VAR_13, VAR_11 = -1;
  else
    VAR_12 = 0, VAR_11 = (HOST_WIDE_INT)1 << (VAR_13 - VAR_2);

  if (VAR_9)
    VAR_12 = ~VAR_12, VAR_11 = ~VAR_11;


  VAR_15 = FUNC_5 (VAR_12, VAR_11, VAR_7 == VAR_3 ? VAR_4 : VAR_1);
  VAR_15 = FUNC_2 (VAR_7, VAR_15);

  if (VAR_7 == VAR_3)
    {
      if (VAR_8)
 VAR_14 = FUNC_3 (4, VAR_15, VAR_15, VAR_15, VAR_15);
      else
 VAR_14 = FUNC_3 (4, VAR_15, FUNC_0 (VAR_3),
         FUNC_0 (VAR_3), FUNC_0 (VAR_3));
      VAR_10 = VAR_6;
    }
  else
    {
      if (VAR_8)
 VAR_14 = FUNC_3 (2, VAR_15, VAR_15);
      else
 VAR_14 = FUNC_3 (2, VAR_15, FUNC_0 (VAR_0));
      VAR_10 = VAR_5;
    }

  return FUNC_1 (VAR_10, FUNC_4 (VAR_10, VAR_14));
}
