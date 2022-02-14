
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_port_cfg {int rx_cut_end_bytes; int rx_pri_elevation; int rx_fifo_thr; int tx_fifo_low_comf_level; int tx_fifo_deq_pipeline_depth; int deq_byte_cnt; int no_scatter_gather; void* deq_high_pri; int deq_prefetch_opt; void* sync_req; int deq_type; void* perf_counters_enable; void* stats_counters_enable; scalar_t__ tx_fifo_min_level; scalar_t__ ext_buf_end_margin; scalar_t__ ext_buf_start_margin; scalar_t__ int_buf_start_margin; scalar_t__ ic_size; scalar_t__ ic_int_offset; scalar_t__ ic_ext_offset; scalar_t__ rx_fd_bits; scalar_t__ checksum_bytes_ignore; void* discard_override; int color; void* dma_write_optimize; void* dma_sg_stash_on; void* dma_header_stash_on; void* dma_ic_stash_on; int dma_swap_data; } ;
typedef enum fman_port_type { ____Placeholder_fman_port_type } fman_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;

void FUNC_0(struct fman_port_cfg *VAR_13, enum fman_port_type VAR_14)
{
    VAR_13->dma_swap_data = VAR_5;
    VAR_13->dma_ic_stash_on = VAR_9;
    VAR_13->dma_header_stash_on = VAR_9;
    VAR_13->dma_sg_stash_on = VAR_9;
    VAR_13->dma_write_optimize = VAR_12;
    VAR_13->color = VAR_1;
    VAR_13->discard_override = VAR_9;
    VAR_13->checksum_bytes_ignore = 0;
    VAR_13->rx_cut_end_bytes = 4;
    VAR_13->rx_pri_elevation = ((0x3FF + 1) * VAR_10);
    VAR_13->rx_fifo_thr = ((0x3FF + 1) * VAR_10);
    VAR_13->rx_fd_bits = 0;
    VAR_13->ic_ext_offset = 0;
    VAR_13->ic_int_offset = 0;
    VAR_13->ic_size = 0;
    VAR_13->int_buf_start_margin = 0;
    VAR_13->ext_buf_start_margin = 0;
    VAR_13->ext_buf_end_margin = 0;
    VAR_13->tx_fifo_min_level = 0;
    VAR_13->tx_fifo_low_comf_level = (5 * VAR_11);
    VAR_13->stats_counters_enable = VAR_12;
    VAR_13->perf_counters_enable = VAR_12;
    VAR_13->deq_type = VAR_2;

    if (VAR_14 == VAR_6) {
        VAR_13->sync_req = VAR_9;
        VAR_13->deq_prefetch_opt = VAR_4;
    } else {
        VAR_13->sync_req = VAR_12;
        VAR_13->deq_prefetch_opt = VAR_3;
    }

    if (VAR_14 == VAR_8) {
        VAR_13->tx_fifo_deq_pipeline_depth = 4;
        VAR_13->deq_high_pri = VAR_12;
        VAR_13->deq_byte_cnt = 0x1400;
    } else {
        if ((VAR_14 == VAR_6) ||
                (VAR_14 == VAR_7))
            VAR_13->tx_fifo_deq_pipeline_depth = 2;
        else
            VAR_13->tx_fifo_deq_pipeline_depth = 1;

        VAR_13->deq_high_pri = VAR_9;
        VAR_13->deq_byte_cnt = 0x400;
    }
    VAR_13->no_scatter_gather = VAR_0;
}
