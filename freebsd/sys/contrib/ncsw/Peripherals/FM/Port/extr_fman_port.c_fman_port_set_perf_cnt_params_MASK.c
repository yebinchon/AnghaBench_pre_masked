
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port_perf_cnt_params {int task_val; int dma_val; int fifo_val; int queue_val; } ;
struct fman_port {int type; TYPE_4__* bmi_regs; } ;
struct TYPE_7__ {int fmbm_opcp; } ;
struct TYPE_6__ {int fmbm_tpcp; } ;
struct TYPE_5__ {int fmbm_rpcp; } ;
struct TYPE_8__ {TYPE_3__ oh; TYPE_2__ tx; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int*) ;

int FUNC_1(struct fman_port *VAR_10,
        struct fman_port_perf_cnt_params *VAR_11)
{
    uint32_t *VAR_12, VAR_13;


    switch (VAR_10->type) {
    case 131:
    case 130:
        VAR_12 = &VAR_10->bmi_regs->rx.fmbm_rpcp;
        if ((VAR_11->queue_val == 0) ||
            (VAR_11->queue_val > VAR_7))
            return -VAR_3;
        break;
    case 129:
    case 128:
        VAR_12 = &VAR_10->bmi_regs->tx.fmbm_tpcp;
        if ((VAR_11->queue_val == 0) ||
            (VAR_11->queue_val > VAR_9))
            return -VAR_3;
        break;
    case 132:
    case 133:
        VAR_12 = &VAR_10->bmi_regs->oh.fmbm_opcp;
        if (VAR_11->queue_val != 0)
            return -VAR_3;
        break;
    default:
        return -VAR_3;
    }

    if ((VAR_11->task_val == 0) ||
            (VAR_11->task_val > VAR_8))
        return -VAR_3;
    if ((VAR_11->dma_val == 0) ||
            (VAR_11->dma_val > VAR_5))
        return -VAR_3;
    if ((VAR_11->fifo_val == 0) ||
            ((VAR_11->fifo_val / VAR_4) >
                VAR_6))
        return -VAR_3;
    VAR_13 = (uint32_t)(VAR_11->task_val - 1) <<
            VAR_2;
    VAR_13 |= (uint32_t)(VAR_11->dma_val - 1) <<
            VAR_0;
    VAR_13 |= (uint32_t)(VAR_11->fifo_val / VAR_4 - 1);

    switch (VAR_10->type) {
    case 131:
    case 130:
    case 129:
    case 128:
        VAR_13 |= (uint32_t)(VAR_11->queue_val - 1) <<
            VAR_1;
        break;
    default:
        break;
    }


    FUNC_0(VAR_13, VAR_12);
    return 0;
}
