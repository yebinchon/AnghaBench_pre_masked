
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vf_params ;
typedef size_t u8 ;
struct vfpf_start_rxq_tlv {size_t rx_qid; int cqe_pbl_size; int cqe_pbl_addr; int rxq_addr; int bd_max_bytes; int sb_index; int hw_sb; } ;
struct ecore_vf_queue {TYPE_2__* cids; scalar_t__ fw_rx_qid; } ;
struct ecore_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct ecore_vf_info {int num_active_rxqs; scalar_t__ abs_vf_id; int opaque_fid; int relative_vf_id; int vport_id; struct ecore_vf_queue* vf_queues; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_sb_info {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int igu_sb_id; } ;
struct ecore_queue_start_common_params {size_t queue_id; int sb_idx; struct ecore_sb_info* p_sb; scalar_t__ stats_id; int vport_id; } ;
struct ecore_queue_cid_vf_params {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int igu_sb_id; } ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef int sb_dummy ;
typedef int params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int b_is_tx; struct ecore_queue_cid* p_cid; } ;
struct TYPE_3__ {struct vfpf_start_rxq_tlv start_rxq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (struct ecore_queue_start_common_params*,int ,int) ;
 int FUNC_2 (struct ecore_sb_info*,int) ;
 struct ecore_queue_cid* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (struct ecore_hwfn*,scalar_t__,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 struct ecore_queue_cid* FUNC_5 (struct ecore_hwfn*,int ,struct ecore_queue_start_common_params*,int,struct ecore_sb_info*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_queue_cid*,int ,int ,int ,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_vf_info*,int ) ;
 size_t FUNC_9 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,size_t,int) ;
 size_t FUNC_11 (struct ecore_vf_info*) ;

__attribute__((used)) static void FUNC_12(struct ecore_hwfn *VAR_9,
           struct ecore_ptt *VAR_10,
           struct ecore_vf_info *VAR_11)
{
 struct ecore_queue_start_common_params VAR_12;
 struct ecore_queue_cid_vf_params VAR_13;
 struct ecore_iov_vf_mbx *VAR_14 = &VAR_11->vf_mbx;
 u8 VAR_15 = VAR_7;
 u8 VAR_16, VAR_17 = 0;
 struct ecore_vf_queue *VAR_18;
 struct vfpf_start_rxq_tlv *VAR_19;
 struct ecore_queue_cid *VAR_20;
 struct ecore_sb_info VAR_21;
 enum _ecore_status_t VAR_22;

 VAR_19 = &VAR_14->req_virt->start_rxq;

 if (!FUNC_7(VAR_9, VAR_11, VAR_19->rx_qid,
        VAR_1) ||
     !FUNC_8(VAR_9, VAR_11, VAR_19->hw_sb))
  goto out;

 VAR_16 = FUNC_9(VAR_9, VAR_11, 0);
 if (VAR_16 == VAR_0)
  goto out;

 VAR_18 = &VAR_11->vf_queues[VAR_19->rx_qid];
 if (VAR_18->cids[VAR_16].p_cid)
  goto out;

 VAR_17 = FUNC_11(VAR_11);


 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.queue_id = (u8)VAR_18->fw_rx_qid;
 VAR_12.vport_id = VAR_11->vport_id;
 VAR_12.stats_id = VAR_11->abs_vf_id + 0x10;


 FUNC_2(&VAR_21, sizeof(VAR_21));
 VAR_21.igu_sb_id = VAR_19->hw_sb;
 VAR_12.p_sb = &VAR_21;
 VAR_12.sb_idx = VAR_19->sb_index;

 FUNC_2(&VAR_13, sizeof(VAR_13));
 VAR_13.vfid = VAR_11->relative_vf_id;
 VAR_13.vf_qid = (u8)VAR_19->rx_qid;
 VAR_13.vf_legacy = VAR_17;
 VAR_13.qid_usage_idx = VAR_16;

 VAR_20 = FUNC_5(VAR_9, VAR_11->opaque_fid,
           &VAR_12, 1, &VAR_13);
 if (VAR_20 == VAR_5)
  goto out;




 if (!(VAR_17 & VAR_2))
  FUNC_3(VAR_9,
         VAR_4 +
         FUNC_0(VAR_11->abs_vf_id, VAR_19->rx_qid),
         0);

 VAR_22 = FUNC_6(VAR_9, VAR_20,
     VAR_19->bd_max_bytes,
     VAR_19->rxq_addr,
     VAR_19->cqe_pbl_addr,
     VAR_19->cqe_pbl_size);
 if (VAR_22 != VAR_3) {
  VAR_15 = VAR_6;
  FUNC_4(VAR_9, VAR_20);
 } else {
  VAR_18->cids[VAR_16].p_cid = VAR_20;
  VAR_18->cids[VAR_16].b_is_tx = 0;
  VAR_15 = VAR_8;
  VAR_11->num_active_rxqs++;
 }

out:
 FUNC_10(VAR_9, VAR_10, VAR_11, VAR_15,
     !!(VAR_17 &
        VAR_2));
}
