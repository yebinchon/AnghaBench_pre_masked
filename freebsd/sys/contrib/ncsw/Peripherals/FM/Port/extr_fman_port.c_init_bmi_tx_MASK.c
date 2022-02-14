
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_port_tx_bmi_regs {int fmbm_tpc; int fmbm_tstc; int fmbm_tefqid; int fmbm_tcfqid; int fmbm_tfne; int fmbm_tfene; int fmbm_tfdne; int fmbm_tfca; int fmbm_ticp; int fmbm_tfed; int fmbm_tfp; int fmbm_tda; int fmbm_tcfg; } ;
struct fman_port_params {int dflt_fqid; int err_fqid; scalar_t__ dont_release_buf; } ;
struct fman_port_cfg {int tx_fifo_min_level; int tx_fifo_low_comf_level; int ic_size; scalar_t__ perf_counters_enable; int perf_cnt_params; scalar_t__ stats_counters_enable; scalar_t__ fmbm_tfne_has_features; scalar_t__ color; scalar_t__ ic_int_offset; scalar_t__ ic_ext_offset; scalar_t__ checksum_bytes_ignore; scalar_t__ tx_fifo_deq_pipeline_depth; scalar_t__ dma_sg_stash_on; scalar_t__ dma_header_stash_on; scalar_t__ dma_ic_stash_on; scalar_t__ dma_swap_data; } ;
struct fman_port {scalar_t__ im_en; TYPE_1__* bmi_regs; } ;
struct TYPE_2__ {struct fman_port_tx_bmi_regs tx; } ;


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
 int FUNC_0 (struct fman_port*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct fman_port *VAR_26,
        struct fman_port_cfg *VAR_27,
        struct fman_port_params *VAR_28)
{
    struct fman_port_tx_bmi_regs *VAR_29 = &VAR_26->bmi_regs->tx;
    uint32_t VAR_30;


    VAR_30 = 0;
    if (VAR_26->im_en)
        VAR_30 |= VAR_14;
    FUNC_2(VAR_30, &VAR_29->fmbm_tcfg);


    VAR_30 = (uint32_t)VAR_27->dma_swap_data << VAR_8;
    if (VAR_27->dma_ic_stash_on)
        VAR_30 |= VAR_6;
    if (VAR_27->dma_header_stash_on)
        VAR_30 |= VAR_5;
    if (VAR_27->dma_sg_stash_on)
        VAR_30 |= VAR_7;
    FUNC_2(VAR_30, &VAR_29->fmbm_tda);


    VAR_30 = (VAR_27->tx_fifo_min_level / VAR_16) <<
            VAR_15;
    VAR_30 |= ((uint32_t)VAR_27->tx_fifo_deq_pipeline_depth - 1) <<
            VAR_10;
    VAR_30 |= (uint32_t)(VAR_27->tx_fifo_low_comf_level /
            VAR_16 - 1);
    FUNC_2(VAR_30, &VAR_29->fmbm_tfp);


    VAR_30 = (uint32_t)VAR_27->checksum_bytes_ignore <<
            VAR_11;
    FUNC_2(VAR_30, &VAR_29->fmbm_tfed);


    if (!VAR_26->im_en)
    {
        VAR_30 = ((uint32_t)VAR_27->ic_ext_offset / VAR_17) <<
                VAR_13;
        VAR_30 |= ((uint32_t)VAR_27->ic_int_offset / VAR_17) <<
                VAR_12;
        VAR_30 |= VAR_27->ic_size / VAR_17;
        FUNC_2(VAR_30, &VAR_29->fmbm_ticp);
    }

    VAR_30 = VAR_3;
    if (VAR_26->im_en)
        VAR_30 |= VAR_2;
    else
    {
        VAR_30 |= VAR_1;
        VAR_30 |= (uint32_t)VAR_27->color << VAR_0;
    }
    FUNC_2(VAR_30, &VAR_29->fmbm_tfca);


    if (VAR_26->im_en)
    {
        FUNC_2(VAR_21 | VAR_24, &VAR_29->fmbm_tfdne);
        FUNC_2(VAR_21 | VAR_24, &VAR_29->fmbm_tfene);
    }
    else
    {
        FUNC_2(VAR_22, &VAR_29->fmbm_tfdne);
        FUNC_2(VAR_23 | VAR_25, &VAR_29->fmbm_tfene);
        if (VAR_27->fmbm_tfne_has_features)
            FUNC_2(!VAR_28->dflt_fqid ?
                VAR_9 | VAR_18 :
                VAR_18, &VAR_29->fmbm_tfne);
        if (!VAR_28->dflt_fqid && VAR_28->dont_release_buf)
        {
            FUNC_2(0x00FFFFFF, &VAR_29->fmbm_tcfqid);
            FUNC_2(VAR_20 | VAR_19, &VAR_29->fmbm_tfene);
            if (VAR_27->fmbm_tfne_has_features)
                FUNC_2(FUNC_1(&VAR_29->fmbm_tfne) & ~VAR_9, &VAR_29->fmbm_tfne);
        }
    }


    if (!VAR_26->im_en)
    {
        if (VAR_28->dflt_fqid || !VAR_28->dont_release_buf)
            FUNC_2(VAR_28->dflt_fqid & 0x00FFFFFF, &VAR_29->fmbm_tcfqid);
        FUNC_2((VAR_28->err_fqid & 0x00FFFFFF), &VAR_29->fmbm_tefqid);
    }

    VAR_30 = 0;
    if (VAR_27->stats_counters_enable)
        VAR_30 = VAR_4;
    FUNC_2(VAR_30, &VAR_29->fmbm_tstc);


    FUNC_0(VAR_26, &VAR_27->perf_cnt_params);
    VAR_30 = 0;
    if (VAR_27->perf_counters_enable)
        VAR_30 = VAR_4;
    FUNC_2(VAR_30, &VAR_29->fmbm_tpc);

    return 0;
}
