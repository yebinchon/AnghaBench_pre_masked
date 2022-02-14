
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_port_qmi_regs {int fmqm_pndcc; int fmqm_pndfdc; int fmqm_pndtfc; int fmqm_pnetfc; } ;
struct fman_port {int type; struct fman_port_qmi_regs* qmi_regs; } ;
typedef enum fman_port_qmi_counters { ____Placeholder_fman_port_qmi_counters } fman_port_qmi_counters ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fman_port *VAR_2,
        enum fman_port_qmi_counters VAR_3,
        uint32_t **VAR_4)
{
    struct fman_port_qmi_regs *VAR_5 = VAR_2->qmi_regs;

    switch (VAR_3) {
    case 128:
        *VAR_4 = &VAR_5->fmqm_pnetfc;
        break;
    case 129:
        if ((VAR_2->type == VAR_0) ||
                (VAR_2->type == VAR_1))

            *VAR_4 = ((void*)0);
        else
            *VAR_4 = &VAR_5->fmqm_pndtfc;
        break;
    case 130:
        if ((VAR_2->type == VAR_0) ||
                (VAR_2->type == VAR_1))

            *VAR_4 = ((void*)0);
        else
            *VAR_4 = &VAR_5->fmqm_pndfdc;
        break;
    case 131:
        if ((VAR_2->type == VAR_0) ||
                (VAR_2->type == VAR_1))

            *VAR_4 = ((void*)0);
        else
            *VAR_4 = &VAR_5->fmqm_pndcc;
        break;
    default:
        *VAR_4 = ((void*)0);
    }
}
