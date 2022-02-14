
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fman_port {int type; TYPE_1__* bmi_regs; } ;
struct TYPE_4__ {int fmbm_rfne; } ;
struct TYPE_3__ {TYPE_2__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(struct fman_port *VAR_2,
        uint8_t VAR_3,
        bool VAR_4)
{
    uint32_t VAR_5;

    switch (VAR_2->type) {
    case 129:
    case 128:
        break;
    default:
        return -VAR_1;
    }

    VAR_5 = FUNC_0(&VAR_2->bmi_regs->rx.fmbm_rfne);

    if (VAR_4)
        VAR_5 |= (uint32_t)VAR_3 << VAR_0;
    else
        VAR_5 &= ~((uint32_t)VAR_3 << VAR_0);

    FUNC_1(VAR_5, &VAR_2->bmi_regs->rx.fmbm_rfne);
    return 0;
}
