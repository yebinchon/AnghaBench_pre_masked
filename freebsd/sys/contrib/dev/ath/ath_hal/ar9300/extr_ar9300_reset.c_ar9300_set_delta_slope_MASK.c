
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int synth_center; } ;
typedef TYPE_1__ CHAN_CENTERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;
 int FUNC_3 (struct ath_hal*,struct ieee80211_channel*,TYPE_1__*) ;
 int FUNC_4 (struct ath_hal*,int,int*,int*) ;

__attribute__((used)) static void
FUNC_5(struct ath_hal *VAR_7, struct ieee80211_channel *VAR_8)
{
    u_int32_t VAR_9, VAR_10, VAR_11;
    u_int32_t VAR_12 = VAR_6;

    u_int32_t VAR_13 = 0x1000000 * VAR_12;
    CHAN_CENTERS VAR_14;





    if (FUNC_0(VAR_8)) {
        VAR_13 = VAR_13 >> 1;
    } else if (FUNC_1(VAR_8)) {
        VAR_13 = VAR_13 >> 2;
    }





    FUNC_3(VAR_7, VAR_8, &VAR_14);
    VAR_9 = VAR_13 / VAR_14.synth_center;

    FUNC_4(VAR_7, VAR_9, &VAR_11, &VAR_10);

    FUNC_2(VAR_7, VAR_3, VAR_5, VAR_11);
    FUNC_2(VAR_7, VAR_3, VAR_4, VAR_10);





    VAR_9 = (9 * VAR_9) / 10;

    FUNC_4(VAR_7, VAR_9, &VAR_11, &VAR_10);


    FUNC_2(VAR_7, VAR_0, VAR_2, VAR_11);
    FUNC_2(VAR_7, VAR_0, VAR_1, VAR_10);
}
