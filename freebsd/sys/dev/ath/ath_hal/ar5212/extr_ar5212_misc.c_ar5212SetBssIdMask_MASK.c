
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ath_hal_5212 {scalar_t__ ah_bssidmask; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int const*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;

HAL_BOOL
FUNC_5(struct ath_hal *VAR_4, const uint8_t *VAR_5)
{
 struct ath_hal_5212 *VAR_6 = FUNC_0(VAR_4);


 FUNC_3(VAR_6->ah_bssidmask, VAR_5, VAR_3);

 FUNC_4(VAR_4, VAR_1, FUNC_2(VAR_6->ah_bssidmask));
 FUNC_4(VAR_4, VAR_2, FUNC_1(VAR_6->ah_bssidmask + 4));
 return VAR_0;
}
