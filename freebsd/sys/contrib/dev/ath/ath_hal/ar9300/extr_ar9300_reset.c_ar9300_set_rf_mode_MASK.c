
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_hwp; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 struct ieee80211_channel* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

 int FUNC_2 (struct ieee80211_channel*) ;
 int FUNC_3 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_4 (struct ath_hal*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;

__attribute__((used)) static inline void
FUNC_6(struct ath_hal *VAR_5, struct ieee80211_channel *VAR_6)
{
    u_int32_t VAR_7 = 0;

    if (VAR_6 == VAR_0) {
        return;
    }
    switch (FUNC_0(VAR_5)->ah_hwp) {
    case 128:
        VAR_7 |= (FUNC_2(VAR_6) || FUNC_3(VAR_6)) ?
            VAR_2 : VAR_4;
        break;
    default:
        FUNC_1(0);
        break;
    }

    if ( FUNC_4(VAR_5, VAR_6)) {
        VAR_7 |= (VAR_2 | VAR_3);
    }
    FUNC_5(VAR_5, VAR_1, VAR_7);
}
