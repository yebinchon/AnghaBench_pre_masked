
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port_oh_bmi_regs {int fmbm_ofwdc; int fmbm_ofufdc; int fmbm_ofledc; int fmbm_ofldec; int fmbm_offc; int fmbm_obdc; int fmbm_ofdc; int fmbm_ofrc; } ;
struct fman_port {TYPE_1__* bmi_regs; } ;
typedef enum fman_port_stats_counters { ____Placeholder_fman_port_stats_counters } fman_port_stats_counters ;
struct TYPE_2__ {struct fman_port_oh_bmi_regs oh; } ;
__attribute__((used)) static void FUNC_0(struct fman_port *VAR_0,
        enum fman_port_stats_counters VAR_1,
        uint32_t **VAR_2)
{
    struct fman_port_oh_bmi_regs *VAR_3 = &VAR_0->bmi_regs->oh;

    switch (VAR_1) {
    case 131:
        *VAR_2 = &VAR_3->fmbm_ofrc;
        break;
    case 134:
        *VAR_2 = &VAR_3->fmbm_ofdc;
        break;
    case 135:
        *VAR_2 = &VAR_3->fmbm_obdc;
        break;
    case 132:
        *VAR_2 = &VAR_3->fmbm_offc;
        break;
    case 133:
        *VAR_2 = &VAR_3->fmbm_ofldec;
        break;
    case 130:
        *VAR_2 = &VAR_3->fmbm_ofledc;
        break;
    case 129:
        *VAR_2 = &VAR_3->fmbm_ofufdc;
        break;
    case 128:
        *VAR_2 = &VAR_3->fmbm_ofwdc;
        break;
    default:
        *VAR_2 = ((void*)0);
    }
}
