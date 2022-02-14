
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct roce_events_stats {int dummy; } ;
struct roce_dcqcn_sent_stats {int dummy; } ;
struct roce_dcqcn_received_stats {int dummy; } ;
struct rdma_sent_stats {int dummy; } ;
struct rdma_rcv_stats {int dummy; } ;
struct iwarp_rxmit_stats_drv {int dummy; } ;
struct ecore_rdma_stats_out_params {int unalign_rx_comp; void* tx_go_to_slow_start_event_cnt; void* iwarp_tx_slow_start_cnt; void* tx_fast_retransmit_event_cnt; void* iwarp_tx_fast_rxmit_cnt; void* cnp_pkt_sent; void* cnp_pkt_rcv; void* ecn_pkt_rcv; int retransmit_count; void* retransmit_events; int icrc_error_count; void* icrc_errors; void* rnr_naks_sent; void* rnr_nacks_sent; void* silent_drops; void* rcv_pkts; void* rcv_bytes; void* sent_pkts; void* sent_bytes; } ;
struct TYPE_6__ {int unalign_rx_comp; struct ecore_rdma_stats_out_params stats; } ;
struct TYPE_5__ {struct ecore_rdma_stats_out_params dcqcn_tx_stats; struct ecore_rdma_stats_out_params dcqcn_rx_stats; struct ecore_rdma_stats_out_params event_stats; } ;
struct ecore_rdma_info {TYPE_3__ iwarp; TYPE_2__ roce; struct ecore_rdma_stats_out_params rdma_rcv_tstats; struct ecore_rdma_stats_out_params rdma_sent_pstats; TYPE_1__* dev; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int rel_pf_id; int p_dev; struct ecore_rdma_info* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {scalar_t__ max_stats_queues; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct ecore_rdma_stats_out_params*,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct ecore_hwfn*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_rdma_stats_out_params*,scalar_t__,int) ;
 struct ecore_ptt* FUNC_15 (struct ecore_hwfn*) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_17 (struct ecore_hwfn*) ;
 int FUNC_18 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_19(void *VAR_9, u8 VAR_10,
    struct ecore_rdma_stats_out_params *VAR_11)
{
 struct ecore_hwfn *VAR_12 = (struct ecore_hwfn *)VAR_9;
 u8 VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 struct ecore_rdma_info *VAR_18;
 struct ecore_ptt *VAR_19;



 enum _ecore_status_t VAR_20 = VAR_7;

 if (!VAR_12)
  return VAR_4;

 if (!VAR_12->p_rdma_info) {
  FUNC_1(VAR_12->p_dev, "ecore rdma query stats failed due to NULL rdma_info\n");
  return VAR_4;
 }

 VAR_18 = VAR_12->p_rdma_info;

 VAR_20 = FUNC_18(VAR_12);
 if (VAR_20 != VAR_7)
  return VAR_20;

 VAR_14 = VAR_12->p_rdma_info->dev->max_stats_queues;
 if (VAR_10 >= VAR_14) {
  FUNC_0(VAR_12->p_dev,
         "ecore rdma query stats failed due to invalid statistics queue %d. maximum is %d\n",
         VAR_10, VAR_14);
  VAR_20 = VAR_4;
  goto err;
 }


 VAR_13 = FUNC_9(VAR_12, VAR_6) +
       VAR_10;
 VAR_15 = VAR_0 +
        FUNC_7(VAR_13);
 VAR_16 = VAR_1 +
        FUNC_10(VAR_13);







 FUNC_6(&VAR_18->rdma_sent_pstats, 0, sizeof(VAR_18->rdma_sent_pstats));
 FUNC_6(&VAR_18->rdma_rcv_tstats, 0, sizeof(VAR_18->rdma_rcv_tstats));
 FUNC_6(&VAR_18->roce.event_stats, 0, sizeof(VAR_18->roce.event_stats));
 FUNC_6(&VAR_18->roce.dcqcn_rx_stats, 0,sizeof(VAR_18->roce.dcqcn_rx_stats));
 FUNC_6(&VAR_18->roce.dcqcn_tx_stats, 0,sizeof(VAR_18->roce.dcqcn_tx_stats));




 VAR_19 = FUNC_15(VAR_12);

 if (!VAR_19) {
  VAR_20 = VAR_8;
  FUNC_2(VAR_12, VAR_5, "rc = %d\n", VAR_20);
  goto err;
 }

 FUNC_14(VAR_12, VAR_19, &VAR_18->rdma_sent_pstats,
     VAR_15, sizeof(struct rdma_sent_stats));

 FUNC_14(VAR_12, VAR_19, &VAR_18->rdma_rcv_tstats,
     VAR_16, sizeof(struct rdma_rcv_stats));

 VAR_17 = VAR_1 +
        FUNC_11(VAR_12->rel_pf_id);
 FUNC_14(VAR_12, VAR_19, &VAR_18->roce.event_stats, VAR_17,
     sizeof(struct roce_events_stats));

 VAR_17 = VAR_3 +
  FUNC_13(VAR_12->rel_pf_id);
 FUNC_14(VAR_12, VAR_19, &VAR_18->roce.dcqcn_rx_stats, VAR_17,
     sizeof(struct roce_dcqcn_received_stats));

 VAR_17 = VAR_0 +
        FUNC_8(VAR_12->rel_pf_id);
 FUNC_14(VAR_12, VAR_19, &VAR_18->roce.dcqcn_tx_stats, VAR_17,
     sizeof(struct roce_dcqcn_sent_stats));






 FUNC_16(VAR_12, VAR_19);

 FUNC_6(VAR_11, 0, sizeof(*VAR_11));

 VAR_11->sent_bytes =
  FUNC_3(VAR_18->rdma_sent_pstats.sent_bytes);
 VAR_11->sent_pkts =
  FUNC_3(VAR_18->rdma_sent_pstats.sent_pkts);
 VAR_11->rcv_bytes =
  FUNC_3(VAR_18->rdma_rcv_tstats.rcv_bytes);
 VAR_11->rcv_pkts =
  FUNC_3(VAR_18->rdma_rcv_tstats.rcv_pkts);

 VAR_11->silent_drops =
  FUNC_4(VAR_18->roce.event_stats.silent_drops);
 VAR_11->rnr_nacks_sent =
  FUNC_4(VAR_18->roce.event_stats.rnr_naks_sent);
 VAR_11->icrc_errors =
  FUNC_5(VAR_18->roce.event_stats.icrc_error_count);
 VAR_11->retransmit_events =
  FUNC_5(VAR_18->roce.event_stats.retransmit_count);
 VAR_11->ecn_pkt_rcv =
  FUNC_3(VAR_18->roce.dcqcn_rx_stats.ecn_pkt_rcv);
 VAR_11->cnp_pkt_rcv =
  FUNC_3(VAR_18->roce.dcqcn_rx_stats.cnp_pkt_rcv);
 VAR_11->cnp_pkt_sent =
  FUNC_3(VAR_18->roce.dcqcn_tx_stats.cnp_pkt_sent);
err:
 FUNC_17(VAR_12);

 return VAR_20;
}
