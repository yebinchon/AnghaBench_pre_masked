
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qlnx_tx_queue {int tx_pbl; } ;
struct qlnx_fastpath {int tx_pkts_completed; int tx_pkts_compl_intr; int rx_pkts; int sb_info; int lro_cnt_64; int lro_cnt_128; int lro_cnt_256; int lro_cnt_512; int lro_cnt_1024; TYPE_2__* rxq; int tx_mtx; int * tx_comInt; struct qlnx_tx_queue** txq; } ;
struct lro_entry {int dummy; } ;
struct lro_ctrl {int lro_mbuf_count; int lro_active; } ;
struct TYPE_10__ {int rss_idx; TYPE_4__* ha; } ;
typedef TYPE_3__ qlnx_ivec_t ;
struct TYPE_11__ {scalar_t__ state; int num_rss; int num_tc; int rx_pkt_threshold; TYPE_1__* ifp; int err_fp_null; struct qlnx_fastpath* fp_array; int err_illegal_intr; } ;
typedef TYPE_4__ qlnx_host_t ;
struct TYPE_9__ {struct lro_ctrl lro; } ;
struct TYPE_8__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,char*,int) ;
 int FUNC_1 (int *) ;
 struct lro_entry* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (TYPE_4__*,struct qlnx_fastpath*,int ,int) ;
 int FUNC_10 (TYPE_4__*,struct qlnx_fastpath*,struct qlnx_tx_queue*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct lro_ctrl*,struct lro_entry*) ;
 int FUNC_13 (struct lro_ctrl*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_14(void *VAR_7)
{
        qlnx_ivec_t *VAR_8 = VAR_7;
        qlnx_host_t *VAR_9;
        struct qlnx_fastpath *VAR_10 = ((void*)0);
        int VAR_11;

        VAR_9 = VAR_8->ha;

        if (VAR_9->state != VAR_3) {
                return;
        }

        VAR_11 = VAR_8->rss_idx;

        if ((VAR_11 = VAR_8->rss_idx) >= VAR_9->num_rss) {
                FUNC_0(VAR_9, "illegal interrupt[%d]\n", VAR_11);
                VAR_9->err_illegal_intr++;
                return;
        }
        VAR_10 = &VAR_9->fp_array[VAR_11];

        if (VAR_10 == ((void*)0)) {
                VAR_9->err_fp_null++;
        } else {
  int VAR_12 = 0, VAR_13 = 0;
  int VAR_14, VAR_15;
  struct qlnx_tx_queue *VAR_16;
  uint16_t VAR_17;

  VAR_14 = VAR_9->ifp->if_capenable & VAR_0;

                FUNC_5(VAR_10->sb_info, VAR_1, 0);

                do {
                        for (VAR_15 = 0; VAR_15 < VAR_9->num_tc; VAR_15++) {

    VAR_16 = VAR_10->txq[VAR_15];

    if((int)(VAR_17 =
     FUNC_4(&VAR_16->tx_pbl)) <
      VAR_4) {

                                 if (FUNC_7(&VAR_10->tx_mtx)) {




      FUNC_10(VAR_9, VAR_10, VAR_10->txq[VAR_15]);
      FUNC_8(&VAR_10->tx_mtx);
     }
    }
                        }

                        VAR_12 = FUNC_9(VAR_9, VAR_10, VAR_9->rx_pkt_threshold,
                                        VAR_14);

                        if (VAR_12) {
                                VAR_10->rx_pkts += VAR_12;
                                VAR_13 += VAR_12;
                        }

                } while (VAR_12);
                FUNC_6(VAR_10->sb_info);
                FUNC_11();
                FUNC_5(VAR_10->sb_info, VAR_2, 1);
        }

        return;
}
