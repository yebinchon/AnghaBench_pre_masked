
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port {int type; TYPE_5__* qmi_regs; TYPE_4__* bmi_regs; } ;
struct TYPE_10__ {int fmqm_pnc; } ;
struct TYPE_8__ {int fmbm_ocfg; } ;
struct TYPE_7__ {int fmbm_tcfg; } ;
struct TYPE_6__ {int fmbm_rcfg; } ;
struct TYPE_9__ {TYPE_3__ oh; TYPE_2__ tx; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int,int*) ;

int FUNC_2(struct fman_port *VAR_5)
{
    uint32_t *VAR_6, VAR_7;
    bool VAR_8;

    switch (VAR_5->type) {
    case 131:
    case 130:
        VAR_6 = &VAR_5->bmi_regs->rx.fmbm_rcfg;
        VAR_8 = VAR_4;
        break;
    case 129:
    case 128:
        VAR_6 = &VAR_5->bmi_regs->tx.fmbm_tcfg;
        VAR_8 = VAR_2;
        break;
    case 132:
    case 133:
        VAR_6 = &VAR_5->bmi_regs->oh.fmbm_ocfg;
        VAR_8 = VAR_2;
        break;
    default:
        return -VAR_1;
    }


    if (!VAR_8) {
        VAR_7 = FUNC_0(&VAR_5->qmi_regs->fmqm_pnc) | VAR_3;
        FUNC_1(VAR_7, &VAR_5->qmi_regs->fmqm_pnc);
    }


    VAR_7 = FUNC_0(VAR_6) | VAR_0;
    FUNC_1(VAR_7, VAR_6);

    return 0;
}
