
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_CHANNEL_INTERNAL ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath_hal*,struct ieee80211_channel*,int *,int ,int ,int ,int ) ;
 int * FUNC_2 (struct ath_hal*,struct ieee80211_channel*) ;

__attribute__((used)) static inline HAL_BOOL
FUNC_3(struct ath_hal *VAR_2, struct ieee80211_channel *VAR_3, HAL_BOOL VAR_4, HAL_BOOL VAR_5)
{
    HAL_CHANNEL_INTERNAL *VAR_6 = FUNC_2(VAR_2, VAR_3);
    HAL_BOOL VAR_7 = VAR_1;
    HAL_BOOL VAR_8 = VAR_0;

    FUNC_0(VAR_6);

    return FUNC_1(VAR_2, VAR_3, VAR_6, VAR_8, VAR_7, VAR_4, VAR_5);
}
