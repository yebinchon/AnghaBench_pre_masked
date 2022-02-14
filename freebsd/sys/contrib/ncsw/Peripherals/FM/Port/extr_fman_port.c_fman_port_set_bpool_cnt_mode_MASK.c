
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct fman_port {int type; size_t ext_pools_num; TYPE_2__* bmi_regs; } ;
struct TYPE_3__ {int * fmbm_ebmpi; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;


 size_t VAR_2 ;
 size_t FUNC_0 (struct fman_port*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct fman_port *VAR_3,
        uint8_t VAR_4,
        bool VAR_5)
{
    uint8_t VAR_6;
    uint32_t VAR_7;

    switch (VAR_3->type) {
    case 129:
    case 128:
        break;
    default:
        return -VAR_1;
    }


    VAR_6 = FUNC_0(VAR_3, VAR_4);
    if (VAR_6 == VAR_3->ext_pools_num || VAR_6 == VAR_2)

        return -VAR_1;

    VAR_7 = FUNC_1(&VAR_3->bmi_regs->rx.fmbm_ebmpi[VAR_6]);

    if (VAR_5)
        VAR_7 |= VAR_0;
    else
        VAR_7 &= ~VAR_0;

    FUNC_2(VAR_7, &VAR_3->bmi_regs->rx.fmbm_ebmpi[VAR_6]);
    return 0;
}
