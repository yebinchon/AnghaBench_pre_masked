
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_port_qmi_regs {int fmqm_pndc; int fmqm_pndn; int fmqm_pnen; int fmqm_pnc; } ;
struct fman_port_params {int deq_sp; } ;
struct fman_port_cfg {int deq_type; int deq_prefetch_opt; int deq_byte_cnt; scalar_t__ qmi_deq_options_support; scalar_t__ deq_high_pri; scalar_t__ queue_counters_enable; } ;
struct fman_port {scalar_t__ type; struct fman_port_qmi_regs* qmi_regs; } ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct fman_port *VAR_20,
        struct fman_port_cfg *VAR_21,
        struct fman_port_params *VAR_22)
{
    struct fman_port_qmi_regs *VAR_23 = VAR_20->qmi_regs;
    uint32_t VAR_24;

    VAR_24 = 0;
    if (VAR_21->queue_counters_enable)
        VAR_24 |= VAR_19;
    FUNC_0(VAR_24, &VAR_23->fmqm_pnc);


    if ((VAR_20->type == VAR_2) ||
            (VAR_20->type == VAR_3)) {

        FUNC_0(VAR_10 | VAR_7, &VAR_23->fmqm_pnen);
        return 0;
    }


    if ((VAR_20->type == VAR_4) ||
            (VAR_20->type == VAR_5)) {

        FUNC_0(VAR_10 | VAR_9,
                &VAR_23->fmqm_pnen);

        FUNC_0(VAR_10 | VAR_8, &VAR_23->fmqm_pndn);
    } else {

        FUNC_0(VAR_10 | VAR_7, &VAR_23->fmqm_pnen);

        FUNC_0(VAR_10 | VAR_6, &VAR_23->fmqm_pndn);
    }


    VAR_24 = 0;
    if (VAR_21->deq_high_pri)
        VAR_24 |= VAR_13;

    switch (VAR_21->deq_type) {
    case 131:
        VAR_24 |= VAR_16;
        break;
    case 133:
        VAR_24 |= VAR_17;
        break;
    case 132:
        VAR_24 |= VAR_18;
        break;
    default:
        return -VAR_0;
    }

    if (VAR_21->qmi_deq_options_support) {
        if ((VAR_20->type == VAR_1) &&
            (VAR_21->deq_prefetch_opt != 129))
            return -VAR_0;

        switch (VAR_21->deq_prefetch_opt) {
        case 129:
            break;
        case 128:
            VAR_24 |= VAR_12;
            break;
        case 130:
            VAR_24 |= VAR_11;
            break;
        default:
            return -VAR_0;
        }
    }
    VAR_24 |= (uint32_t)(VAR_22->deq_sp & VAR_14) <<
            VAR_15;
    VAR_24 |= VAR_21->deq_byte_cnt;
    FUNC_0(VAR_24, &VAR_23->fmqm_pndc);

    return 0;
}
