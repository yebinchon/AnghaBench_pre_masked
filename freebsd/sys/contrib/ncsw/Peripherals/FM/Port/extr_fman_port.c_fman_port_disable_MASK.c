
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
struct TYPE_10__ {int fmqm_pnc; int fmqm_pns; } ;
struct TYPE_8__ {int fmbm_ocfg; int fmbm_ost; } ;
struct TYPE_7__ {int fmbm_tcfg; int fmbm_tst; } ;
struct TYPE_6__ {int fmbm_rcfg; int fmbm_rst; } ;
struct TYPE_9__ {TYPE_3__ oh; TYPE_2__ tx; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int*) ;

int FUNC_3(const struct fman_port *VAR_8)
{
    uint32_t *VAR_9, *VAR_10, VAR_11;
    bool VAR_12, VAR_13 = VAR_4;
    int VAR_14;

    switch (VAR_8->type) {
    case 131:
    case 130:
        VAR_9 = &VAR_8->bmi_regs->rx.fmbm_rcfg;
        VAR_10 = &VAR_8->bmi_regs->rx.fmbm_rst;
        VAR_12 = VAR_7;
        break;
    case 129:
    case 128:
        VAR_9 = &VAR_8->bmi_regs->tx.fmbm_tcfg;
        VAR_10 = &VAR_8->bmi_regs->tx.fmbm_tst;
        VAR_12 = VAR_4;
        break;
    case 132:
    case 133:
        VAR_9 = &VAR_8->bmi_regs->oh.fmbm_ocfg;
        VAR_10 = &VAR_8->bmi_regs->oh.fmbm_ost;
        VAR_12 = VAR_4;
        break;
    default:
        return -VAR_3;
    }


    if (!VAR_12) {
        VAR_11 = FUNC_1(&VAR_8->qmi_regs->fmqm_pnc) & ~VAR_5;
        FUNC_2(VAR_11, &VAR_8->qmi_regs->fmqm_pnc);


        VAR_14 = 100;
        do {
            FUNC_0(10);
            VAR_11 = FUNC_1(&VAR_8->qmi_regs->fmqm_pns);
        } while ((VAR_11 & VAR_6) && --VAR_14);

        if (VAR_14 == 0)
        {

            VAR_13 = VAR_7;
        }
    }


    VAR_11 = FUNC_1(VAR_9) & ~VAR_0;
    FUNC_2(VAR_11, VAR_9);


    VAR_14 = 500;
    do {
        FUNC_0(10);
        VAR_11 = FUNC_1(VAR_10);
    } while ((VAR_11 & VAR_1) && --VAR_14);

    if (VAR_14 == 0)
    {

        VAR_13 = VAR_7;
    }

    if (VAR_13)
        return -VAR_2;

    return 0;
}
