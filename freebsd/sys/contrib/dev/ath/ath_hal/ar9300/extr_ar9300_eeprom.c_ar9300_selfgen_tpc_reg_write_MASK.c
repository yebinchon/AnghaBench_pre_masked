
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_7, const struct ieee80211_channel *VAR_8,
                             u_int8_t *VAR_9)
{
    u_int32_t VAR_10;







    if (FUNC_0(VAR_8)) {
        VAR_10 = (FUNC_2(VAR_9[VAR_0], VAR_3) |
                       FUNC_2(VAR_9[VAR_0], VAR_5) |
                       FUNC_2(0x3f, VAR_4) |
                       FUNC_2(0x3f, VAR_6));
    } else {
        VAR_10 = (FUNC_2(VAR_9[VAR_1], VAR_3) |
                       FUNC_2(VAR_9[VAR_1], VAR_5) |
                       FUNC_2(0x3f, VAR_4) |
                       FUNC_2(0x3f, VAR_6));
    }
    FUNC_1(VAR_7, VAR_2, VAR_10);
}
