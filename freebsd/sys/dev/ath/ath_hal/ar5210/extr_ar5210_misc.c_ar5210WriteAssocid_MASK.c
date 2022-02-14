
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ath_hal_5210 {int ah_associd; scalar_t__ ah_bssid; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5210* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int const*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;

void
FUNC_7(struct ath_hal *VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
 struct ath_hal_5210 *VAR_9 = FUNC_0(VAR_6);


 FUNC_3(VAR_9->ah_bssid, VAR_7, VAR_5);
 VAR_9->ah_associd = VAR_8;
 FUNC_6(VAR_6, VAR_0, FUNC_2(VAR_9->ah_bssid));
 FUNC_6(VAR_6, VAR_1, FUNC_1(VAR_9->ah_bssid+4) |
         ((VAR_8 & 0x3fff)<<VAR_2));
 if (VAR_8 == 0)
  FUNC_5(VAR_6, VAR_3, VAR_4);
 else
  FUNC_4(VAR_6, VAR_3, VAR_4);
}
