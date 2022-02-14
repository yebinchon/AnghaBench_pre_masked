
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int HAL_OPMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*,int ,int ,int) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 scalar_t__ FUNC_7 (struct ath_hal*,int ) ;

void
FUNC_8(struct ath_hal *VAR_12, HAL_OPMODE VAR_13)
{
 if (FUNC_7(VAR_12, VAR_13)) {





  FUNC_6(VAR_12, VAR_6, 0x1f);
  FUNC_6(VAR_12, VAR_5,
      FUNC_4(VAR_12) || FUNC_2(VAR_12) ? 0x14 : 0x18);
  FUNC_5(VAR_12, VAR_10, VAR_11, 1);
  FUNC_6(VAR_12, VAR_9, 61);
  FUNC_5(VAR_12, VAR_0, VAR_2, 1);

  if (FUNC_0(VAR_12) || FUNC_2(VAR_12) || FUNC_1(VAR_12)) {
   FUNC_6(VAR_12, VAR_7, 0x26);
   FUNC_6(VAR_12, VAR_8, 0x0d);
   FUNC_6(VAR_12, VAR_3, 0x07);
   FUNC_6(VAR_12, VAR_4, 0x3f);

   FUNC_5(VAR_12, VAR_0, VAR_1, 0x2);
  } else {
   FUNC_6(VAR_12, VAR_7, 0x0a);
   FUNC_6(VAR_12, VAR_8, 0x0c);
   FUNC_6(VAR_12, VAR_3, 0x03);
   FUNC_6(VAR_12, VAR_4, 0x20);
   FUNC_5(VAR_12, VAR_0, VAR_1, 0x3);
  }
 } else {
  FUNC_5(VAR_12, VAR_0, VAR_1, 0x0);
  FUNC_5(VAR_12, VAR_0, VAR_2, 0);

  FUNC_6(VAR_12, VAR_9, 1);

  FUNC_6(VAR_12, VAR_6, 0x1f);
  FUNC_6(VAR_12, VAR_7, 0x7f);

  if (FUNC_1(VAR_12))
   FUNC_6(VAR_12, VAR_8, 0x0a);
  else if (FUNC_3(VAR_12))
   FUNC_6(VAR_12, VAR_8, 0x32);
  else
   FUNC_6(VAR_12, VAR_8, 0x0e);
  FUNC_6(VAR_12, VAR_3, 0x0c);
  FUNC_6(VAR_12, VAR_4, 0xff);
  FUNC_6(VAR_12, VAR_5,
      FUNC_4(VAR_12) || FUNC_2(VAR_12) || FUNC_1(VAR_12) ? 0x14 : 0x18);
  FUNC_5(VAR_12, VAR_10, VAR_11,
      FUNC_4(VAR_12) || FUNC_2(VAR_12) ? 39 : 31);
 }
}
