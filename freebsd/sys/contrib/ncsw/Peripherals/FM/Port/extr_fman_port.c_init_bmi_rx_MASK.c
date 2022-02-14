
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port_rx_bmi_regs {int fmbm_rpc; int fmbm_rstc; int fmbm_rfsem; int fmbm_rfsdm; int fmbm_refqid; int fmbm_rfqid; int fmbm_rfene; int fmbm_rfne; int fmbm_rfca; int fmbm_rebm; int fmbm_rim; int fmbm_ricp; int fmbm_rfed; int fmbm_reth; int fmbm_rfp; int fmbm_rda; int fmbm_rcfg; } ;
struct fman_port_params {int dflt_fqid; int err_fqid; int discard_mask; int err_mask; } ;
struct fman_port_cfg {int rx_pri_elevation; int rx_fifo_thr; int ic_size; scalar_t__ perf_counters_enable; int perf_cnt_params; scalar_t__ stats_counters_enable; scalar_t__ rx_fd_bits; scalar_t__ sync_req; scalar_t__ color; scalar_t__ no_scatter_gather; scalar_t__ fmbm_rebm_has_sgd; scalar_t__ ext_buf_end_margin; scalar_t__ ext_buf_start_margin; scalar_t__ int_buf_start_margin; scalar_t__ ic_int_offset; scalar_t__ ic_ext_offset; scalar_t__ errata_A006320; scalar_t__ rx_cut_end_bytes; scalar_t__ checksum_bytes_ignore; scalar_t__ excessive_threshold_register; scalar_t__ dma_write_optimize; scalar_t__ dma_sg_stash_on; scalar_t__ dma_header_stash_on; scalar_t__ dma_ic_stash_on; scalar_t__ dma_swap_data; scalar_t__ discard_override; } ;
struct fman_port {scalar_t__ im_en; TYPE_1__* bmi_regs; } ;
struct TYPE_2__ {struct fman_port_rx_bmi_regs rx; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct fman_port*,int *) ;
 int FUNC_1 (struct fman_port_cfg*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct fman_port *VAR_28,
        struct fman_port_cfg *VAR_29,
        struct fman_port_params *VAR_30)
{
    struct fman_port_rx_bmi_regs *VAR_31 = &VAR_28->bmi_regs->rx;
    uint32_t VAR_32;


    VAR_32 = 0;
    if (VAR_28->im_en)
        VAR_32 |= VAR_16;
    else if (VAR_29->discard_override)
        VAR_32 |= VAR_15;
    FUNC_2(VAR_32, &VAR_31->fmbm_rcfg);


    VAR_32 = (uint32_t)VAR_29->dma_swap_data << VAR_8;
    if (VAR_29->dma_ic_stash_on)
        VAR_32 |= VAR_6;
    if (VAR_29->dma_header_stash_on)
        VAR_32 |= VAR_5;
    if (VAR_29->dma_sg_stash_on)
        VAR_32 |= VAR_7;
    if (VAR_29->dma_write_optimize)
        VAR_32 |= VAR_9;
    FUNC_2(VAR_32, &VAR_31->fmbm_rda);


    VAR_32 = (VAR_29->rx_pri_elevation / VAR_22 - 1) <<
            VAR_17;
    VAR_32 |= VAR_29->rx_fifo_thr / VAR_22 - 1;
    FUNC_2(VAR_32, &VAR_31->fmbm_rfp);

    if (VAR_29->excessive_threshold_register)

        FUNC_2(VAR_18, &VAR_31->fmbm_reth);


    VAR_32 = (uint32_t)VAR_29->checksum_bytes_ignore <<
            VAR_19;
    VAR_32 |= (uint32_t)VAR_29->rx_cut_end_bytes <<
            VAR_20;
    if (VAR_29->errata_A006320)
        VAR_32 &= 0xffe0ffff;
    FUNC_2(VAR_32, &VAR_31->fmbm_rfed);


    VAR_32 = ((uint32_t)VAR_29->ic_ext_offset / VAR_23) <<
            VAR_12;
    VAR_32 |= ((uint32_t)VAR_29->ic_int_offset / VAR_23) <<
            VAR_11;
    VAR_32 |= VAR_29->ic_size / VAR_23;
    FUNC_2(VAR_32, &VAR_31->fmbm_ricp);


    VAR_32 = ((uint32_t)VAR_29->int_buf_start_margin / VAR_23)
            << VAR_13;
    FUNC_2(VAR_32, &VAR_31->fmbm_rim);


    if (!VAR_28->im_en)
    {
        VAR_32 = (uint32_t)VAR_29->ext_buf_start_margin <<
                VAR_10;
        VAR_32 |= (uint32_t)VAR_29->ext_buf_end_margin;
        if (VAR_29->fmbm_rebm_has_sgd && VAR_29->no_scatter_gather)
            VAR_32 |= VAR_21;
        FUNC_2(VAR_32, &VAR_31->fmbm_rebm);
    }


    VAR_32 = VAR_3;
    if (!VAR_28->im_en)
    {
        VAR_32 |= VAR_1;
        VAR_32 |= (uint32_t)VAR_29->color << VAR_0;
        if (VAR_29->sync_req)
            VAR_32 |= VAR_2;
    }
    FUNC_2(VAR_32, &VAR_31->fmbm_rfca);


    if (VAR_28->im_en)
        VAR_32 = VAR_24 | VAR_26;
    else
    {
        VAR_32 = (uint32_t)VAR_29->rx_fd_bits << VAR_14;
        VAR_32 |= FUNC_1(VAR_29);
    }
    FUNC_2(VAR_32, &VAR_31->fmbm_rfne);


    FUNC_2(VAR_25 | VAR_27, &VAR_31->fmbm_rfene);


    if (!VAR_28->im_en)
    {
        FUNC_2((VAR_30->dflt_fqid & 0x00FFFFFF), &VAR_31->fmbm_rfqid);
        FUNC_2((VAR_30->err_fqid & 0x00FFFFFF), &VAR_31->fmbm_refqid);
    }


    FUNC_2(VAR_30->discard_mask, &VAR_31->fmbm_rfsdm);
    FUNC_2(VAR_30->err_mask, &VAR_31->fmbm_rfsem);


    VAR_32 = 0;
    if (VAR_29->stats_counters_enable)
        VAR_32 = VAR_4;
    FUNC_2(VAR_32, &VAR_31->fmbm_rstc);


    FUNC_0(VAR_28, &VAR_29->perf_cnt_params);
    VAR_32 = 0;
    if (VAR_29->perf_counters_enable)
        VAR_32 = VAR_4;
    FUNC_2(VAR_32, &VAR_31->fmbm_rpc);

    return 0;
}
