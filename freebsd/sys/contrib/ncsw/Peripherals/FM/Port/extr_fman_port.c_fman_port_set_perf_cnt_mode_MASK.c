
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port {int type; TYPE_4__* bmi_regs; } ;
struct TYPE_5__ {int fmbm_opc; } ;
struct TYPE_7__ {int fmbm_tpc; } ;
struct TYPE_6__ {int fmbm_rpc; } ;
struct TYPE_8__ {TYPE_1__ oh; TYPE_3__ tx; TYPE_2__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct fman_port *VAR_2, bool VAR_3)
{
    uint32_t *VAR_4, VAR_5;

    switch (VAR_2->type) {
    case 131:
    case 130:
        VAR_4 = &VAR_2->bmi_regs->rx.fmbm_rpc;
        break;
    case 129:
    case 128:
        VAR_4 = &VAR_2->bmi_regs->tx.fmbm_tpc;
        break;
    case 132:
    case 133:
        VAR_4 = &VAR_2->bmi_regs->oh.fmbm_opc;
        break;
    default:
        return -VAR_1;
    }

    VAR_5 = FUNC_0(VAR_4);

    if (VAR_3)
        VAR_5 |= VAR_0;
    else
        VAR_5 &= ~VAR_0;

    FUNC_1(VAR_5, VAR_4);
    return 0;
}
