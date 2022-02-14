
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_5__ {int num_rss; TYPE_1__* fp_array; int pci_dev; } ;
typedef TYPE_2__ qlnx_host_t ;
typedef int name_str ;
struct TYPE_4__ {int err_rx_alloc_errors; int err_rx_hw_errors; int err_m_getjcl; int err_m_getcl; int tpa_end; int tpa_cont; int tpa_start; int rx_pkts; int lro_cnt_1024; int lro_cnt_512; int lro_cnt_256; int lro_cnt_128; int lro_cnt_64; int err_tx_cons_idx_conflict; int err_tx_free_pkt_null; int err_tx_defrag; int err_tx_dmamap_load; int err_tx_non_tso_max_seg; int err_tx_defrag_dmamap_load; int err_tx_dmamap_create; int err_tx_nsegs_gt_elem_left; int * tx_pkts_q; int * tx_comInt; int * tx_pkts_hist; int * tx_pkts; int tx_tso_min_pkt_len; int tx_tso_max_pkt_len; int tx_tso_min_nsegs; int tx_tso_max_nsegs; int tx_nsegs_gt_elem_left; int tx_defrag; int tx_lso_wnd_min_len; int tx_tso_pkts; int tx_pkts_compl_intr; int tx_pkts_compl_fp; int tx_pkts_trans_fp; int tx_pkts_compl_ctx; int tx_pkts_trans_ctx; int tx_non_tso_pkts; int tx_pkts_completed; int tx_pkts_transmitted; int tx_pkts_freed; int tx_pkts_processed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (char*,int) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_8(qlnx_host_t *VAR_3)
{
        struct sysctl_ctx_list *VAR_4;
        struct sysctl_oid_list *VAR_5;
        struct sysctl_oid_list *VAR_6;
 struct sysctl_oid *VAR_7;
 int VAR_8, VAR_9;
 uint8_t VAR_10[16];

        VAR_4 = FUNC_5(VAR_3->pci_dev);
 VAR_5 = FUNC_3(FUNC_6(VAR_3->pci_dev));

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_1, "fpstat",
   VAR_0, ((void*)0), "fpstat");
 VAR_5 = FUNC_3(VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_3->num_rss; VAR_8++) {

  FUNC_4(VAR_10, (sizeof(uint8_t) * sizeof(VAR_10)));
  FUNC_7(VAR_10, sizeof(VAR_10), "%d", VAR_8);

  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_1, VAR_10,
   VAR_0, ((void*)0), VAR_10);
  VAR_6 = FUNC_3(VAR_7);



  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tx_pkts_processed",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_pkts_processed,
   "No. of packets processed for transmission");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tx_pkts_freed",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_pkts_freed,
   "No. of freed packets");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tx_pkts_transmitted",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_pkts_transmitted,
   "No. of transmitted packets");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tx_pkts_completed",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_pkts_completed,
   "No. of transmit completions");

                FUNC_1(VAR_4, VAR_6,
                        VAR_1, "tx_non_tso_pkts",
                        VAR_0, &VAR_3->fp_array[VAR_8].tx_non_tso_pkts,
                        "No. of non LSO transmited packets");
                FUNC_1(VAR_4, VAR_6,
                        VAR_1, "tx_tso_pkts",
                        VAR_0, &VAR_3->fp_array[VAR_8].tx_tso_pkts,
                        "No. of LSO transmited packets");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tx_lso_wnd_min_len",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_lso_wnd_min_len,
   "tx_lso_wnd_min_len");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tx_defrag",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_defrag,
   "tx_defrag");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tx_nsegs_gt_elem_left",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_nsegs_gt_elem_left,
   "tx_nsegs_gt_elem_left");

  FUNC_2(VAR_4, VAR_6,
   VAR_1, "tx_tso_max_nsegs",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_tso_max_nsegs,
   VAR_3->fp_array[VAR_8].tx_tso_max_nsegs, "tx_tso_max_nsegs");

  FUNC_2(VAR_4, VAR_6,
   VAR_1, "tx_tso_min_nsegs",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_tso_min_nsegs,
   VAR_3->fp_array[VAR_8].tx_tso_min_nsegs, "tx_tso_min_nsegs");

  FUNC_2(VAR_4, VAR_6,
   VAR_1, "tx_tso_max_pkt_len",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_tso_max_pkt_len,
   VAR_3->fp_array[VAR_8].tx_tso_max_pkt_len,
   "tx_tso_max_pkt_len");

  FUNC_2(VAR_4, VAR_6,
   VAR_1, "tx_tso_min_pkt_len",
   VAR_0, &VAR_3->fp_array[VAR_8].tx_tso_min_pkt_len,
   VAR_3->fp_array[VAR_8].tx_tso_min_pkt_len,
   "tx_tso_min_pkt_len");

  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {

   FUNC_4(VAR_10, (sizeof(uint8_t) * sizeof(VAR_10)));
   FUNC_7(VAR_10, sizeof(VAR_10),
    "tx_pkts_nseg_%02d", (VAR_9+1));

   FUNC_1(VAR_4, VAR_6,
    VAR_1, VAR_10, VAR_0,
    &VAR_3->fp_array[VAR_8].tx_pkts[VAR_9], VAR_10);
  }
  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_nsegs_gt_elem_left",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_nsegs_gt_elem_left,
   "err_tx_nsegs_gt_elem_left");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_dmamap_create",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_dmamap_create,
   "err_tx_dmamap_create");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_defrag_dmamap_load",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_defrag_dmamap_load,
   "err_tx_defrag_dmamap_load");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_non_tso_max_seg",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_non_tso_max_seg,
   "err_tx_non_tso_max_seg");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_dmamap_load",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_dmamap_load,
   "err_tx_dmamap_load");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_defrag",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_defrag,
   "err_tx_defrag");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_free_pkt_null",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_free_pkt_null,
   "err_tx_free_pkt_null");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_tx_cons_idx_conflict",
   VAR_0, &VAR_3->fp_array[VAR_8].err_tx_cons_idx_conflict,
   "err_tx_cons_idx_conflict");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "lro_cnt_64",
   VAR_0, &VAR_3->fp_array[VAR_8].lro_cnt_64,
   "lro_cnt_64");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "lro_cnt_128",
   VAR_0, &VAR_3->fp_array[VAR_8].lro_cnt_128,
   "lro_cnt_128");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "lro_cnt_256",
   VAR_0, &VAR_3->fp_array[VAR_8].lro_cnt_256,
   "lro_cnt_256");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "lro_cnt_512",
   VAR_0, &VAR_3->fp_array[VAR_8].lro_cnt_512,
   "lro_cnt_512");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "lro_cnt_1024",
   VAR_0, &VAR_3->fp_array[VAR_8].lro_cnt_1024,
   "lro_cnt_1024");



  FUNC_1(VAR_4, VAR_6,
   VAR_1, "rx_pkts",
   VAR_0, &VAR_3->fp_array[VAR_8].rx_pkts,
   "No. of received packets");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tpa_start",
   VAR_0, &VAR_3->fp_array[VAR_8].tpa_start,
   "No. of tpa_start packets");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tpa_cont",
   VAR_0, &VAR_3->fp_array[VAR_8].tpa_cont,
   "No. of tpa_cont packets");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "tpa_end",
   VAR_0, &VAR_3->fp_array[VAR_8].tpa_end,
   "No. of tpa_end packets");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_m_getcl",
   VAR_0, &VAR_3->fp_array[VAR_8].err_m_getcl,
   "err_m_getcl");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_m_getjcl",
   VAR_0, &VAR_3->fp_array[VAR_8].err_m_getjcl,
   "err_m_getjcl");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_rx_hw_errors",
   VAR_0, &VAR_3->fp_array[VAR_8].err_rx_hw_errors,
   "err_rx_hw_errors");

  FUNC_1(VAR_4, VAR_6,
   VAR_1, "err_rx_alloc_errors",
   VAR_0, &VAR_3->fp_array[VAR_8].err_rx_alloc_errors,
   "err_rx_alloc_errors");
 }

 return;
}
