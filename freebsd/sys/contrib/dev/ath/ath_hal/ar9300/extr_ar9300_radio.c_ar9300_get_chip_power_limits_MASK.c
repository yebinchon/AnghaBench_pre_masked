
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_maxpower; scalar_t__ ic_minpower; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HAL_BOOL
FUNC_0(struct ath_hal *VAR_2,
    struct ieee80211_channel *VAR_3)
{

        VAR_3->ic_minpower = 0;
        VAR_3->ic_maxpower = VAR_1;

        return VAR_0;
}
