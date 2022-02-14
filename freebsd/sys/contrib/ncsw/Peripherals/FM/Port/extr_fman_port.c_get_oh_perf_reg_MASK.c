
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port_oh_bmi_regs {int fmbm_ofuc; int fmbm_oduc; int fmbm_otuc; int fmbm_occn; } ;
struct fman_port {TYPE_1__* bmi_regs; } ;
typedef enum fman_port_perf_counters { ____Placeholder_fman_port_perf_counters } fman_port_perf_counters ;
struct TYPE_2__ {struct fman_port_oh_bmi_regs oh; } ;







__attribute__((used)) static void FUNC_0(struct fman_port *VAR_0,
        enum fman_port_perf_counters VAR_1,
        uint32_t **VAR_2)
{
    struct fman_port_oh_bmi_regs *VAR_3 = &VAR_0->bmi_regs->oh;

    switch (VAR_1) {
    case 131:
        *VAR_2 = &VAR_3->fmbm_occn;
        break;
    case 128:
        *VAR_2 = &VAR_3->fmbm_otuc;
        break;
    case 130:
        *VAR_2 = &VAR_3->fmbm_oduc;
        break;
    case 129:
        *VAR_2 = &VAR_3->fmbm_ofuc;
        break;
    default:
        *VAR_2 = ((void*)0);
    }
}
