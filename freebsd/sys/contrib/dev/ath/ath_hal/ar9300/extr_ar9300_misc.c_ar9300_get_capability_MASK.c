
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal_9300 {int ah_sta_id1_defaults; int ah_misc_mode; int ah_enterprise_mode; int ah_proc_phy_err; int ah_rifs_enabled; } ;
struct TYPE_4__ {int ath_hal_crdc_enable; int ath_hal_desc_tpc; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct ar9300_ani_state {int ofdm_noise_immunity_level; int firstep_level; int spur_immunity_level; int ofdm_weak_sig_detect_off; } ;
struct TYPE_5__ {int halNumAntCfg2Ghz; int halNumAntCfg5Ghz; int hal_rx_stbc_support; int hal_tx_stbc_support; int halLDPCSupport; int halTxChainMask; int halRxChainMask; int halApmEnable; int hal_pcie_lcr_offset; int hal_pcie_lcr_extsync_en; int halTsfAddSupport; int halTkipMicTxRxKeySupport; } ;
struct TYPE_6__ {int ah_macRev; int ah_macVersion; TYPE_2__ ah_caps; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;
typedef TYPE_2__ HAL_CAPABILITIES ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 struct ar9300_ani_state* VAR_1 ;
 TYPE_3__* FUNC_1 (struct ath_hal*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_hal*) ;
 int VAR_9 ;
 int FUNC_7 (struct ath_hal*) ;
 int VAR_10 ;
 int FUNC_8 (struct ath_hal*) ;
 int FUNC_9 (struct ath_hal*) ;
 int FUNC_10 (struct ath_hal*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (struct ath_hal*,int ) ;
 struct ar9300_ani_state* FUNC_12 (struct ath_hal*) ;
 int FUNC_13 (struct ath_hal_9300*,int ) ;
 int FUNC_14 (struct ath_hal*) ;
 int FUNC_15 (struct ath_hal*,int,int,int*) ;

HAL_STATUS
FUNC_16(struct ath_hal *VAR_21, HAL_CAPABILITY_TYPE VAR_22,
    u_int32_t VAR_23, u_int32_t *VAR_24)
{
    struct ath_hal_9300 *VAR_25 = FUNC_0(VAR_21);
    const HAL_CAPABILITIES *VAR_26 = &FUNC_1(VAR_21)->ah_caps;
    struct ar9300_ani_state *VAR_27;

    switch (VAR_22) {
    case 173:
        switch (VAR_23) {
        case 133:
        case 132:
        case 129:
        case 128:
        case 130:
        case 131:
            return VAR_19;
        default:
            return VAR_17;
        }
    case 142:
        switch (VAR_23) {
        case 0:
            return VAR_19;
        case 1:
            return (VAR_25->ah_sta_id1_defaults &
                    VAR_13) ? VAR_19 : VAR_18;
        default:
            return VAR_17;
        }
    case 141:
        switch (VAR_23) {
        case 0:
            return VAR_26->halTkipMicTxRxKeySupport ? VAR_18 : VAR_19;
        case 1:
            return (VAR_25->ah_misc_mode & VAR_4) ?
                VAR_18 : VAR_19;
        default:
            return VAR_17;
        }
    case 134:

        return VAR_19;
    case 149:
        return VAR_19;
    case 171:
        switch (VAR_23) {
        case 0:
            return VAR_19;
        case 1:
            return (FUNC_11(VAR_21, VAR_7) &
                            VAR_8) ?
                            VAR_19 : VAR_18;
        }
        return VAR_16;
    case 139:
        switch (VAR_23) {
        case 0:
            return VAR_19;
        case 1:
            return VAR_21->ah_config.ath_hal_desc_tpc ?
                               VAR_19 : VAR_18;
        }
        return VAR_19;
    case 148:
        return VAR_19;
    case 153:
        switch (VAR_23) {
        case 0:
            return VAR_19;
        case 1:
            if (FUNC_11(VAR_21, VAR_11) & VAR_12) {





                return VAR_18;
            } else {
                return (VAR_25->ah_sta_id1_defaults &
                        VAR_14) ? VAR_19 : VAR_18;
            }
        }
        return VAR_16;
    case 136:
        switch (VAR_23) {
        case 0:
            return VAR_26->halTsfAddSupport ? VAR_19 : VAR_17;
        case 1:
            return (VAR_25->ah_misc_mode & VAR_6) ?
                VAR_19 : VAR_18;
        }
        return VAR_16;
    case 146:
        if (VAR_23 == 3) {





            return (VAR_17);
        }
        return FUNC_15(VAR_21, VAR_22, VAR_23, VAR_24);
    case 180:
        return VAR_19;
    case 175:
        return VAR_17;
    case 177:
        return VAR_17;
    case 174:



        return VAR_17;
    case 156:


        return VAR_19;
    case 145:

        return (VAR_25->ah_rifs_enabled == VAR_2) ? VAR_19 : VAR_17;
    case 158:
        *VAR_24 = VAR_26->halLDPCSupport;
        return VAR_19;
    case 169:
        return VAR_19;
    case 170:
        return (FUNC_5(VAR_21) || FUNC_6(VAR_21) || FUNC_2(VAR_21) ||
                (VAR_26->halTxChainMask & 0x3) != 0x3 ||
                (VAR_26->halRxChainMask & 0x3) != 0x3) ?
            VAR_17 : VAR_19;
    case 137:
        return (FUNC_5(VAR_21) || FUNC_6(VAR_21) || FUNC_2(VAR_21) ||
                (VAR_26->halTxChainMask & 0x7) != 0x7 ||
                (VAR_26->halRxChainMask & 0x7) != 0x7) ?
            VAR_17 : VAR_19;
    case 152:
        return (FUNC_13(VAR_25, VAR_15)) ?
            VAR_19 : VAR_17;
    case 172:





        return VAR_17;
    case 176:
        return VAR_19;
    case 147:
        if ((FUNC_1((VAR_21))->ah_macVersion == VAR_10) &&
            (FUNC_1((VAR_21))->ah_macRev < VAR_9))
        {
            return VAR_19;
        }
        else
        {
            return VAR_17;
        }
    case 166:
        *VAR_24 = VAR_25->ah_enterprise_mode >> 16;






        if ((VAR_25->ah_enterprise_mode & VAR_3) &&
                !FUNC_4(VAR_21) && (!FUNC_8(VAR_21) ||
                FUNC_9(VAR_21))) {
            *VAR_24 |= VAR_0;
        }
        return VAR_19;
    case 157:



        return VAR_19;
    case 168:
        *VAR_24 = VAR_26->halApmEnable;
        return VAR_19;
    case 151:
        return (VAR_26->hal_pcie_lcr_extsync_en == VAR_2) ? VAR_19 : VAR_17;
    case 150:
        *VAR_24 = VAR_26->hal_pcie_lcr_offset;
        return VAR_19;
    case 143:
        return VAR_17;
    case 165:
            switch (VAR_23) {
            case 160:
                    return VAR_19;
            case 164:
                    return (VAR_25->ah_proc_phy_err & VAR_20) ?
                            VAR_19 : VAR_18;
            case 162:
            case 161:

            case 163:
            case 159:
                    VAR_27 = FUNC_12(VAR_21);
                    if (VAR_27 == VAR_1)
                            return VAR_18;
                    switch (VAR_23) {

                    case 2: *VAR_24 = VAR_27->ofdm_noise_immunity_level; break;
                    case 3: *VAR_24 = !VAR_27->ofdm_weak_sig_detect_off; break;

                    case 5: *VAR_24 = VAR_27->firstep_level; break;
                    case 6: *VAR_24 = VAR_27->spur_immunity_level; break;
                    }
                    return VAR_19;
            }
            return VAR_16;
    case 167:
        if (VAR_23 == 0)
            return (VAR_19);
        if (VAR_23 != 1)
            return (VAR_17);
        (*VAR_24) = !! (VAR_25->ah_misc_mode & VAR_5);
        return (VAR_19);
    case 140:
        if (VAR_23 == 0)
            return VAR_19;
        if (VAR_23 == 2) {
            *VAR_24 = FUNC_14(VAR_21);
            return (VAR_19);
        }
        return VAR_17;
    default:
        return FUNC_15(VAR_21, VAR_22, VAR_23, VAR_24);
    }
}
