
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ath_hal_5212 {int ah_macaddr; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_2, const uint8_t *VAR_3)
{
 struct ath_hal_5212 *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4->ah_macaddr, VAR_3, VAR_1);
 return VAR_0;
}
