
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {struct ieee80211_channel* ah_curchan; } ;
typedef int HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (struct ath_hal*,struct ieee80211_channel*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static HAL_BOOL
FUNC_5(struct ath_hal *VAR_1, struct ieee80211_channel *VAR_2)
{
 uint16_t VAR_3 = FUNC_3(VAR_1, VAR_2);
 uint32_t VAR_4;


 VAR_4 = FUNC_4((VAR_3 - 5120)/10, 5);
 VAR_4 = (VAR_4 << 1) | 0x41;
 FUNC_2(VAR_1, FUNC_1(0x27), VAR_4);
 FUNC_2(VAR_1, FUNC_1(0x30), 0);
 FUNC_0(VAR_1)->ah_curchan = VAR_2;
 return VAR_0;
}
