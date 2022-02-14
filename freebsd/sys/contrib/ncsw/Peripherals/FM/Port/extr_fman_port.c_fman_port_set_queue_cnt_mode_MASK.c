
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port {TYPE_1__* qmi_regs; } ;
struct TYPE_2__ {int fmqm_pnc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct fman_port *VAR_1, bool VAR_2)
{
    uint32_t VAR_3;

    VAR_3 = FUNC_0(&VAR_1->qmi_regs->fmqm_pnc);

    if (VAR_2)
        VAR_3 |= VAR_0;
    else
        VAR_3 &= ~VAR_0;

    FUNC_1(VAR_3, &VAR_1->qmi_regs->fmqm_pnc);
    return 0;
}
