
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal_9300 {int ah_misc_mode; int rx_buf_size; int ah_sta_id1_defaults; } ;
struct TYPE_4__ {int ath_hal_desc_tpc; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_5__ {int halTsfAddSupport; int halTkipMicTxRxKeySupport; } ;
struct TYPE_6__ {int ah_diagreg; TYPE_2__ ah_caps; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;
typedef TYPE_2__ HAL_CAPABILITIES ;
typedef int HAL_BOOL ;
typedef int HAL_ANI_CMD ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct ath_hal*) ;
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
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (struct ath_hal*,int const,int) ;
 int FUNC_8 (struct ath_hal*,int) ;
 int FUNC_9 (struct ath_hal*,int,int,int,int *) ;

HAL_BOOL
FUNC_10(struct ath_hal *VAR_13, HAL_CAPABILITY_TYPE VAR_14,
        u_int32_t VAR_15, u_int32_t VAR_16, HAL_STATUS *VAR_17)
{
    struct ath_hal_9300 *VAR_18 = FUNC_0(VAR_13);
    const HAL_CAPABILITIES *VAR_19 = &FUNC_1(VAR_13)->ah_caps;
    u_int32_t VAR_20;

    switch (VAR_14) {
    case 131:
        if (! VAR_19->halTkipMicTxRxKeySupport)
            return VAR_0;

        if (VAR_16)
            VAR_18->ah_misc_mode &= ~VAR_5;
        else
            VAR_18->ah_misc_mode |= VAR_5;

        FUNC_6(VAR_13, VAR_6, VAR_18->ah_misc_mode);
        return VAR_1;

    case 132:
        if (VAR_16) {
            VAR_18->ah_sta_id1_defaults |= VAR_11;
        } else {
            VAR_18->ah_sta_id1_defaults &= ~VAR_11;
        }
        return VAR_1;
    case 137:
        VAR_20 = FUNC_4(VAR_13, VAR_9);
        if (VAR_16) {
            VAR_20 |= VAR_10;
        } else {
            VAR_20 &= ~VAR_10;
        }
        FUNC_6(VAR_13, VAR_9, VAR_20);
        return VAR_1;
    case 138:
        FUNC_1(VAR_13)->ah_diagreg = VAR_16 & 0x6;

        FUNC_6(VAR_13, VAR_4, FUNC_1(VAR_13)->ah_diagreg);
        return VAR_1;
    case 129:
        VAR_13->ah_config.ath_hal_desc_tpc = (VAR_16 != 0);
        return VAR_1;
    case 134:
        if (VAR_16) {
            VAR_18->ah_sta_id1_defaults |= VAR_12;
        } else {
            VAR_18->ah_sta_id1_defaults &= ~VAR_12;
        }
        return VAR_1;
    case 128:
        if (VAR_19->halTsfAddSupport) {
            if (VAR_16) {
                VAR_18->ah_misc_mode |= VAR_8;
            } else {
                VAR_18->ah_misc_mode &= ~VAR_8;
            }
            return VAR_1;
        }
        return VAR_0;


    case 135: {


            static const HAL_ANI_CMD VAR_21[] = {
                    140,
                    143,
                    142,
                    141,
                    145,
                    144,
                    139,
            };

            return VAR_15 < (sizeof(VAR_21) / sizeof(VAR_21[0])) ?
                    FUNC_7(VAR_13, VAR_21[VAR_15], VAR_16) :
                    VAR_0;

    }

    case 133:
        VAR_18->rx_buf_size = VAR_16 & VAR_3;
        FUNC_6(VAR_13, VAR_2, VAR_18->rx_buf_size);
        return VAR_1;

    case 136:
        if (VAR_15 != 1)
            return VAR_0;
        if (VAR_16) {
            VAR_18->ah_misc_mode |= VAR_7;
            FUNC_5(VAR_13, VAR_6, VAR_7);
        } else {
            VAR_18->ah_misc_mode &= ~VAR_7;
            FUNC_3(VAR_13, VAR_6, VAR_7);
        }
        return VAR_1;

    case 130:
        if (VAR_15 == 0)
            return VAR_1;
        if (VAR_15 == 1) {
            FUNC_8(VAR_13, VAR_16);
            return VAR_1;
        }
        return VAR_0;

    default:
        return FUNC_9(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
    }
}
