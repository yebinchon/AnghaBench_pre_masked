
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ath_hal_5211 {int ah_staId1Defaults; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_5211* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_3, u_int VAR_4)
{
 struct ath_hal_5211 *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4) {
  FUNC_1(VAR_3, VAR_1, VAR_2);
  VAR_5->ah_staId1Defaults &= ~VAR_2;
 } else {
  FUNC_2(VAR_3, VAR_1, VAR_2);
  VAR_5->ah_staId1Defaults |= VAR_2;
 }
 return VAR_0;
}
