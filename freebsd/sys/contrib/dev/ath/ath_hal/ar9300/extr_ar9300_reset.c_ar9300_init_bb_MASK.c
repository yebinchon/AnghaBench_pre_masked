
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct ath_hal *VAR_5, struct ieee80211_channel *VAR_6)
{
    u_int32_t VAR_7;






    VAR_7 = FUNC_2(VAR_5, VAR_2) & VAR_3;
    if (FUNC_0(VAR_6)) {
        VAR_7 = (4 * VAR_7) / 22;
    } else {
        VAR_7 /= 10;
    }


    FUNC_3(VAR_5, VAR_0, VAR_1);
    FUNC_1(VAR_7 + VAR_4);
}
