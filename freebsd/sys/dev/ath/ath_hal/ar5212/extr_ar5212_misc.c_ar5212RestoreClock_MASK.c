
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
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 scalar_t__ FUNC_4 (struct ath_hal*,int ) ;

void
FUNC_5(struct ath_hal *VAR_12, HAL_OPMODE VAR_13)
{
 if (FUNC_4(VAR_12, VAR_13)) {

  FUNC_2(VAR_12, VAR_0, VAR_1, 0);
  FUNC_2(VAR_12, VAR_0, VAR_2, 0);

  FUNC_3(VAR_12, VAR_9, 1);
  FUNC_2(VAR_12, VAR_10, VAR_11,
      FUNC_1(VAR_12) || FUNC_0(VAR_12) ? 39 : 31);




  FUNC_3(VAR_12, VAR_6, 0x1f);
  FUNC_3(VAR_12, VAR_7, 0x7f);
  FUNC_3(VAR_12, VAR_8, 0x0e);
  FUNC_3(VAR_12, VAR_3, 0x0c);
  FUNC_3(VAR_12, VAR_4, 0xff);
  FUNC_3(VAR_12, VAR_5,
      FUNC_1(VAR_12) || FUNC_0(VAR_12) ? 0x14 : 0x18);
 }
}
