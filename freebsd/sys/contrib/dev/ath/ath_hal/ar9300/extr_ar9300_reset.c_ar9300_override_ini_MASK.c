
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ halIsrRacSupport; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int) ;

__attribute__((used)) static inline void
FUNC_6(struct ath_hal *VAR_10, struct ieee80211_channel *VAR_11)
{
    u_int32_t VAR_12;
    HAL_CAPABILITIES *VAR_13 = &FUNC_0(VAR_10)->ah_caps;






    FUNC_3(VAR_10, VAR_8, (VAR_7 | VAR_6));







    VAR_12 = FUNC_2(VAR_10, VAR_9) & (~VAR_1);
    FUNC_4(VAR_10, VAR_9,
        VAR_12 | VAR_3 | VAR_2);







    if (VAR_13->halIsrRacSupport == VAR_0) {
        FUNC_1(VAR_10, VAR_4, VAR_5);
    }


    FUNC_5(VAR_10, 1);
}
