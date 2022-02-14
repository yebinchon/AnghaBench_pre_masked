
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port_rx_bmi_regs {int fmbm_rfldec; int fmbm_rffc; int fmbm_rodc; int fmbm_rlfc; int fmbm_rfbc; int fmbm_rbdc; int fmbm_rfdc; int fmbm_rfrc; } ;
struct fman_port {TYPE_1__* bmi_regs; } ;
typedef enum fman_port_stats_counters { ____Placeholder_fman_port_stats_counters } fman_port_stats_counters ;
struct TYPE_2__ {struct fman_port_rx_bmi_regs rx; } ;
__attribute__((used)) static void FUNC_0(struct fman_port *VAR_0,
        enum fman_port_stats_counters VAR_1,
        uint32_t **VAR_2)
{
    struct fman_port_rx_bmi_regs *VAR_3 = &VAR_0->bmi_regs->rx;

    switch (VAR_1) {
    case 131:
        *VAR_2 = &VAR_3->fmbm_rfrc;
        break;
    case 134:
        *VAR_2 = &VAR_3->fmbm_rfdc;
        break;
    case 135:
        *VAR_2 = &VAR_3->fmbm_rbdc;
        break;
    case 130:
        *VAR_2 = &VAR_3->fmbm_rfbc;
        break;
    case 129:
        *VAR_2 = &VAR_3->fmbm_rlfc;
        break;
    case 128:
        *VAR_2 = &VAR_3->fmbm_rodc;
        break;
    case 132:
        *VAR_2 = &VAR_3->fmbm_rffc;
        break;
    case 133:
        *VAR_2 = &VAR_3->fmbm_rfldec;
        break;
    default:
        *VAR_2 = ((void*)0);
    }
}
