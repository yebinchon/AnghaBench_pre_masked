
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct fman_port {size_t ext_pools_num; TYPE_2__* bmi_regs; } ;
struct TYPE_3__ {int* fmbm_ebmpi; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static uint8_t FUNC_1(struct fman_port *VAR_3, uint8_t VAR_4)
{
    uint32_t *VAR_5, VAR_6;
    uint8_t VAR_7, VAR_8;


    VAR_5 = VAR_3->bmi_regs->rx.fmbm_ebmpi;
    for (VAR_7 = 0;
         (VAR_7 < VAR_3->ext_pools_num && (VAR_7 < VAR_2));
         VAR_7++) {
        VAR_6 = FUNC_0(&VAR_5[VAR_7]);
        VAR_8 = (uint8_t)((VAR_6 & VAR_0) >>
                VAR_1);

        if (VAR_8 == VAR_4)
            break;
    }

    return VAR_7;
}
