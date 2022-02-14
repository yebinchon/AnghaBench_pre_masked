
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnx_fastpath {int rss_id; scalar_t__ err_m_getjcl; scalar_t__ err_m_getcl; scalar_t__ rx_pkts; scalar_t__ err_tx_cons_idx_conflict; scalar_t__ err_tx_free_pkt_null; scalar_t__ err_tx_defrag; scalar_t__ err_tx_dmamap_load; scalar_t__ err_tx_non_tso_max_seg; scalar_t__ err_tx_defrag_dmamap_load; scalar_t__ err_tx_dmamap_create; scalar_t__ err_tx_nsegs_gt_elem_left; scalar_t__ tx_tso_min_nsegs; scalar_t__ tx_tso_max_nsegs; scalar_t__ tx_nsegs_gt_elem_left; scalar_t__ tx_defrag; scalar_t__ tx_lso_wnd_min_len; scalar_t__ tx_pkts_compl_intr; scalar_t__ tx_pkts_compl_fp; scalar_t__ tx_pkts_trans_fp; scalar_t__ tx_pkts_compl_ctx; scalar_t__ tx_pkts_trans_ctx; scalar_t__ tx_pkts_completed; scalar_t__ tx_pkts_transmitted; scalar_t__ tx_pkts_freed; scalar_t__ tx_pkts_processed; scalar_t__ tx_ring_full; int name; TYPE_2__** txq; TYPE_1__* rxq; int * sb_info; TYPE_3__* edev; } ;
struct TYPE_7__ {int num_rss; int num_tc; TYPE_2__* txq_array; TYPE_1__* rxq_array; int * sb_array; struct qlnx_fastpath* fp_array; } ;
typedef TYPE_3__ qlnx_host_t ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int rxq_id; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(qlnx_host_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rss; VAR_2++) {

  struct qlnx_fastpath *VAR_5 = &VAR_1->fp_array[VAR_2];

  VAR_5->rss_id = VAR_2;
  VAR_5->edev = VAR_1;
  VAR_5->sb_info = &VAR_1->sb_array[VAR_2];
  VAR_5->rxq = &VAR_1->rxq_array[VAR_2];
  VAR_5->rxq->rxq_id = VAR_2;

  for (VAR_4 = 0; VAR_4 < VAR_1->num_tc; VAR_4++) {
                        VAR_3 = VAR_4 * VAR_1->num_rss + VAR_2;
                        VAR_5->txq[VAR_4] = &VAR_1->txq_array[VAR_3];
                        VAR_5->txq[VAR_4]->index = VAR_3;
  }

  FUNC_0(VAR_5->name, sizeof(VAR_5->name), "%s-fp-%d", VAR_0,
   VAR_2);

  VAR_5->tx_ring_full = 0;



  VAR_5->tx_pkts_processed = 0;
  VAR_5->tx_pkts_freed = 0;
  VAR_5->tx_pkts_transmitted = 0;
  VAR_5->tx_pkts_completed = 0;
  VAR_5->tx_lso_wnd_min_len = 0;
  VAR_5->tx_defrag = 0;
  VAR_5->tx_nsegs_gt_elem_left = 0;
  VAR_5->tx_tso_max_nsegs = 0;
  VAR_5->tx_tso_min_nsegs = 0;
  VAR_5->err_tx_nsegs_gt_elem_left = 0;
  VAR_5->err_tx_dmamap_create = 0;
  VAR_5->err_tx_defrag_dmamap_load = 0;
  VAR_5->err_tx_non_tso_max_seg = 0;
  VAR_5->err_tx_dmamap_load = 0;
  VAR_5->err_tx_defrag = 0;
  VAR_5->err_tx_free_pkt_null = 0;
  VAR_5->err_tx_cons_idx_conflict = 0;

  VAR_5->rx_pkts = 0;
  VAR_5->err_m_getcl = 0;
  VAR_5->err_m_getjcl = 0;
        }
 return;
}
