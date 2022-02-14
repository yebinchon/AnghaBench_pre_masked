
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct fman_port_rate_limiter {int count_1micro_bit; int rate; int burst_size; int rate_factor; scalar_t__ high_burst_size_gran; } ;
struct fman_port {int type; int fm_rev_maj; TYPE_3__* bmi_regs; } ;
struct TYPE_5__ {int fmbm_orlmt; int fmbm_orlmts; } ;
struct TYPE_4__ {int fmbm_trlmt; int fmbm_trlmts; } ;
struct TYPE_6__ {TYPE_2__ oh; TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int,int*) ;

int FUNC_1(struct fman_port *VAR_9,
        struct fman_port_rate_limiter *VAR_10)
{
    uint32_t *VAR_11, *VAR_12;
    uint32_t VAR_13, VAR_14;
    uint8_t VAR_15, VAR_16;

    switch (VAR_9->type) {
    case 129:
    case 128:
        VAR_11 = &VAR_9->bmi_regs->tx.fmbm_trlmt;
        VAR_12 = &VAR_9->bmi_regs->tx.fmbm_trlmts;
        VAR_13 = VAR_1;
        break;
    case 130:
        VAR_11 = &VAR_9->bmi_regs->oh.fmbm_orlmt;
        VAR_12 = &VAR_9->bmi_regs->oh.fmbm_orlmts;
        VAR_13 = VAR_0;
        break;
    default:
        return -VAR_8;
    }


    VAR_16 = 1;
    VAR_15 = VAR_10->count_1micro_bit;



    while (VAR_10->rate < (VAR_13 / VAR_16)) {
        if (VAR_15 == 31)

            return -VAR_8;

        VAR_15++;
        VAR_16 <<= 1;
    }



    VAR_14 = (uint32_t)(VAR_10->rate * VAR_16 / VAR_13 - 1);


    if (VAR_14 >= VAR_5)
        return -VAR_8;


    if ((VAR_10->burst_size == 0) ||
            (VAR_10->burst_size >
                VAR_4))
        return -VAR_8;

    VAR_14 |= (uint32_t)(VAR_10->burst_size - 1) <<
            VAR_3;

    if ((VAR_9->type == 130) &&
            (VAR_9->fm_rev_maj == 4)) {
        if (VAR_10->high_burst_size_gran)
            VAR_14 |= VAR_2;
    }

    FUNC_0(VAR_14, VAR_11);


    VAR_14 = VAR_6;
    VAR_14 |= (31 - (uint32_t)VAR_15) << VAR_7;

    if ((VAR_9->type == 130) &&
            (VAR_9->fm_rev_maj == 4))
        VAR_14 |= VAR_10->rate_factor;

    FUNC_0(VAR_14, VAR_12);

    return 0;
}
