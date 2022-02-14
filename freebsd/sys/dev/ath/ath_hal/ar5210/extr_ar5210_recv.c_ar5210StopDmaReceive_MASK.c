
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,char*,...) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_6, VAR_2, VAR_3);
 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  if ((FUNC_1(VAR_6, VAR_2) & VAR_4) == 0)
   return VAR_1;
  FUNC_0(10);
 }





 return VAR_0;
}
