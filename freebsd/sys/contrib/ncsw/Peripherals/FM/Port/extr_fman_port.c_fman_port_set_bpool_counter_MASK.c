
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct fman_port {int type; size_t ext_pools_num; TYPE_2__* bmi_regs; } ;
struct TYPE_3__ {int * fmbm_acnt; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;




 size_t VAR_0 ;
 size_t FUNC_0 (struct fman_port*,size_t) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct fman_port *VAR_1,
        uint8_t VAR_2,
        uint32_t VAR_3)
{
    uint8_t VAR_4;

    switch (VAR_1->type) {
    case 129:
    case 128:
        break;
    default:
        return;
    }


    VAR_4 = FUNC_0(VAR_1, VAR_2);
    if (VAR_4 == VAR_1->ext_pools_num || VAR_4 == VAR_0)

        return;

    FUNC_1(VAR_3, &VAR_1->bmi_regs->rx.fmbm_acnt[VAR_4]);
}
