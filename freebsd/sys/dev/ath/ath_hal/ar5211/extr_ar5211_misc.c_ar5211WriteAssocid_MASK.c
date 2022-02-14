
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ath_hal_5211 {scalar_t__ ah_bssid; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5211* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int const*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;

void
FUNC_5(struct ath_hal *VAR_4, const uint8_t *VAR_5, uint16_t VAR_6)
{
 struct ath_hal_5211 *VAR_7 = FUNC_0(VAR_4);


 FUNC_3(VAR_7->ah_bssid, VAR_5, VAR_3);
 FUNC_4(VAR_4, VAR_0, FUNC_2(VAR_7->ah_bssid));
 FUNC_4(VAR_4, VAR_1, FUNC_1(VAR_7->ah_bssid+4) |
         ((VAR_6 & 0x3fff)<<VAR_2));
}
