
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ah_ext_prot_spacing; } ;
typedef int HAL_HT_MACMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel*) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ,int) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 TYPE_1__* VAR_19 ;
 int FUNC_7 (struct ath_hal*,int ) ;
 int FUNC_8 (struct ath_hal*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_9(struct ath_hal *VAR_20, struct ieee80211_channel *VAR_21,
    HAL_HT_MACMODE VAR_22)
{
    u_int32_t VAR_23;

    u_int32_t VAR_24;


    VAR_24 =
        FUNC_4(VAR_20, VAR_14) & VAR_9;


    VAR_23 =
        VAR_11 | VAR_13 | VAR_12
        | VAR_24;

    if (FUNC_1(VAR_21)) {
        VAR_23 |= VAR_6;

        if (FUNC_2(VAR_21)) {
            VAR_23 |= VAR_8;
        }







    }


    VAR_23 |= FUNC_4(VAR_20, VAR_14);


    VAR_23 &= ~VAR_10;

    FUNC_6(VAR_20, VAR_14, VAR_23);


    if (FUNC_0(VAR_21) || FUNC_3(VAR_21)) {
        u_int32_t VAR_25 = FUNC_4(VAR_20, VAR_15);

        if (FUNC_0(VAR_21)) {
            VAR_25 |= VAR_16;
        } else if (FUNC_3(VAR_21)) {
            VAR_25 |= VAR_17;
        }
        FUNC_6(VAR_20, VAR_15, VAR_25);

        FUNC_8(VAR_20, VAR_21);
        FUNC_5(
            VAR_20, VAR_4, VAR_5, 0x3);
    }


    FUNC_7(VAR_20, VAR_22);



    FUNC_6(VAR_20, VAR_2, 25 << VAR_3);


    FUNC_6(VAR_20, VAR_0, 0xF << VAR_1);
}
