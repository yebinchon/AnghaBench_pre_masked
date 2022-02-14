
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port_params {int dflt_fqid; int err_fqid; int discard_mask; int err_mask; } ;
struct fman_port_oh_bmi_regs {int fmbm_opc; int fmbm_ostc; int fmbm_ofsem; int fmbm_ofsdm; int fmbm_oefqid; int fmbm_ofqid; int fmbm_ofene; int fmbm_ofne; int fmbm_ofdne; int fmbm_oim; int fmbm_ofca; int fmbm_oicp; int fmbm_ofp; int fmbm_oda; int fmbm_ocfg; } ;
struct fman_port_cfg {int ic_size; scalar_t__ perf_counters_enable; int perf_cnt_params; scalar_t__ stats_counters_enable; scalar_t__ int_buf_start_margin; scalar_t__ sync_req; scalar_t__ color; scalar_t__ ic_int_offset; scalar_t__ ic_ext_offset; scalar_t__ tx_fifo_deq_pipeline_depth; scalar_t__ dma_write_optimize; scalar_t__ dma_sg_stash_on; scalar_t__ dma_header_stash_on; scalar_t__ dma_ic_stash_on; scalar_t__ dma_swap_data; scalar_t__ discard_override; } ;
struct fman_port {scalar_t__ type; TYPE_1__* bmi_regs; } ;
struct TYPE_2__ {struct fman_port_oh_bmi_regs oh; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct fman_port*,int *) ;
 int FUNC_1 (struct fman_port_cfg*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct fman_port *VAR_23,
        struct fman_port_cfg *VAR_24,
        struct fman_port_params *VAR_25)
{
    struct fman_port_oh_bmi_regs *VAR_26 = &VAR_23->bmi_regs->oh;
    uint32_t VAR_27;


    VAR_27 = 0;
    if (VAR_24->discard_override)
        VAR_27 |= VAR_14;
    FUNC_2(VAR_27, &VAR_26->fmbm_ocfg);


    VAR_27 = (uint32_t)VAR_24->dma_swap_data << VAR_8;
    if (VAR_24->dma_ic_stash_on)
        VAR_27 |= VAR_6;
    if (VAR_24->dma_header_stash_on)
        VAR_27 |= VAR_5;
    if (VAR_24->dma_sg_stash_on)
        VAR_27 |= VAR_7;
    if (VAR_24->dma_write_optimize)
        VAR_27 |= VAR_9;
    FUNC_2(VAR_27, &VAR_26->fmbm_oda);


    VAR_27 = ((uint32_t)VAR_24->tx_fifo_deq_pipeline_depth - 1) <<
            VAR_10;
    FUNC_2(VAR_27, &VAR_26->fmbm_ofp);


    VAR_27 = ((uint32_t)VAR_24->ic_ext_offset / VAR_17) <<
            VAR_12;
    VAR_27 |= ((uint32_t)VAR_24->ic_int_offset / VAR_17) <<
            VAR_11;
    VAR_27 |= VAR_24->ic_size / VAR_17;
    FUNC_2(VAR_27, &VAR_26->fmbm_oicp);


    VAR_27 = VAR_3;
    VAR_27 |= (uint32_t)VAR_24->color << VAR_0;
    if (VAR_24->sync_req)
        VAR_27 |= VAR_2;
    if (VAR_23->type == VAR_16)
        VAR_27 |= VAR_1;
    FUNC_2(VAR_27, &VAR_26->fmbm_ofca);


    VAR_27 = ((uint32_t)VAR_24->int_buf_start_margin / VAR_17)
            << VAR_13;
    FUNC_2(VAR_27, &VAR_26->fmbm_oim);


    FUNC_2(VAR_19, &VAR_26->fmbm_ofdne);


    if (VAR_23->type == VAR_15) {
        FUNC_2(VAR_18 | VAR_21,
                &VAR_26->fmbm_ofne);
        FUNC_2(VAR_20, &VAR_26->fmbm_ofene);
    } else {
        FUNC_2(FUNC_1(VAR_24),
                &VAR_26->fmbm_ofne);
        FUNC_2(VAR_20 | VAR_22,
                &VAR_26->fmbm_ofene);
    }


    FUNC_2((VAR_25->dflt_fqid & 0x00FFFFFF), &VAR_26->fmbm_ofqid);
    FUNC_2((VAR_25->err_fqid & 0x00FFFFFF), &VAR_26->fmbm_oefqid);


    if (VAR_23->type == VAR_16) {
        FUNC_2(VAR_25->discard_mask, &VAR_26->fmbm_ofsdm);
        FUNC_2(VAR_25->err_mask, &VAR_26->fmbm_ofsem);
    }


    VAR_27 = 0;
    if (VAR_24->stats_counters_enable)
        VAR_27 = VAR_4;
    FUNC_2(VAR_27, &VAR_26->fmbm_ostc);


    FUNC_0(VAR_23, &VAR_24->perf_cnt_params);
    VAR_27 = 0;
    if (VAR_24->perf_counters_enable)
        VAR_27 = VAR_4;
    FUNC_2(VAR_27, &VAR_26->fmbm_opc);

    return 0;
}
