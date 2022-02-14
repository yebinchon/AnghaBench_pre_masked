
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct fman_port {int type; int fm_rev_maj; TYPE_3__* bmi_regs; } ;
struct TYPE_5__ {int * fmbm_ocgm; } ;
struct TYPE_4__ {int * fmbm_rcgm; } ;
struct TYPE_6__ {TYPE_2__ oh; TYPE_1__ rx; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct fman_port *VAR_2,
        uint32_t VAR_3[VAR_1])
{
    int VAR_4;
    uint32_t VAR_5, *VAR_6;
    uint8_t VAR_7;

    switch (VAR_2->type) {
    case 129:
    case 128:
        if (VAR_2->fm_rev_maj == 4)
            VAR_7 = 1;
        else
            VAR_7 = VAR_1;
        VAR_6 = VAR_2->bmi_regs->rx.fmbm_rcgm;
        break;
    case 130:
        VAR_7 = 1;
        if (VAR_2->fm_rev_maj != 4)
            return -VAR_0;
        VAR_6 = VAR_2->bmi_regs->oh.fmbm_ocgm;
        break;
    default:
        return -VAR_0;
    }

    for (VAR_4 = (VAR_7 - 1); VAR_4 >= 0; VAR_4--) {
        if (VAR_3[VAR_4] == 0)
            continue;
        VAR_5 = FUNC_0(&VAR_6[VAR_4]);
        VAR_5 &= ~VAR_3[VAR_4];
        FUNC_1(VAR_5, &VAR_6[VAR_4]);
    }
    return 0;
}
