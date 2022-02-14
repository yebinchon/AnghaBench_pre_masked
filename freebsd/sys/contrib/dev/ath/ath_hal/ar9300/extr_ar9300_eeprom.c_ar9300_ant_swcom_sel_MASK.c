
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef void* u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_private {struct ieee80211_channel* ah_curchan; } ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {void* ant_ctrl_common2; void* ant_ctrl_common; } ;
struct TYPE_5__ {void* ant_ctrl_common2; void* ant_ctrl_common; } ;
struct TYPE_7__ {TYPE_2__ modal_header_5g; TYPE_1__ modal_header_2g; } ;
typedef TYPE_3__ ar9300_eeprom_t ;
struct TYPE_8__ {TYPE_3__ ah_eeprom; } ;
typedef int HAL_BOOL ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 struct ath_hal_private* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ieee80211_channel const*) ;
 void* FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int ,void*) ;

HAL_BOOL FUNC_7(struct ath_hal *VAR_6, u_int8_t VAR_7,
                        u_int32_t *VAR_8, u_int32_t *VAR_9)
{
    ar9300_eeprom_t *VAR_10 = &FUNC_0(VAR_6)->ah_eeprom;
    struct ath_hal_private *VAR_11 = FUNC_1(VAR_6);
    const struct ieee80211_channel *VAR_12 = VAR_11->ah_curchan;
    enum {
        ANT_SELECT_OPS_GET,
        ANT_SELECT_OPS_SET,
    };

    if (FUNC_2(VAR_6) || FUNC_3(VAR_6))
        return VAR_0;

    if (!VAR_12)
        return VAR_0;





    switch (VAR_7) {
    case ANT_SELECT_OPS_GET:
        *VAR_8 = FUNC_5(VAR_6, VAR_2,
                            (0xffff));
        *VAR_9 = FUNC_5(VAR_6, VAR_3,
                            (0xffffff));
        break;
    case ANT_SELECT_OPS_SET:
        FUNC_6(VAR_6, VAR_2,
            (0xffff), *VAR_8);
        FUNC_6(VAR_6, VAR_3,
            (0xffffff), *VAR_9);


        if (FUNC_4(VAR_12)) {
            VAR_10->modal_header_2g.ant_ctrl_common = *VAR_8;
            VAR_10->modal_header_2g.ant_ctrl_common2 = *VAR_9;
        } else {
            VAR_10->modal_header_5g.ant_ctrl_common = *VAR_8;
            VAR_10->modal_header_5g.ant_ctrl_common2 = *VAR_9;
        }

        break;
    default:
        break;
    }

    return VAR_1;
}
