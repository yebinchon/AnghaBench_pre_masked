
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port {int type; TYPE_3__* bmi_regs; } ;
struct TYPE_5__ {int fmbm_ofsdm; } ;
struct TYPE_4__ {int fmbm_rfsdm; } ;
struct TYPE_6__ {TYPE_2__ oh; TYPE_1__ rx; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int *) ;

int FUNC_1(struct fman_port *VAR_1, uint32_t VAR_2)
{
    uint32_t *VAR_3;


    switch (VAR_1->type) {
    case 129:
    case 128:
        VAR_3 = &VAR_1->bmi_regs->rx.fmbm_rfsdm;
        break;
    case 130:
        VAR_3 = &VAR_1->bmi_regs->oh.fmbm_ofsdm;
        break;
    default:
        return -VAR_0;
    }

    FUNC_0(VAR_2, VAR_3);
    return 0;
}
