
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vf_params ;
typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct vfpf_start_txq_tlv {size_t tx_qid; int pbl_size; int pbl_addr; int sb_index; int hw_sb; } ;
struct ecore_vf_queue {TYPE_2__* cids; int fw_tx_qid; } ;
struct ecore_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct ecore_vf_info {int relative_vf_id; int opaque_fid; scalar_t__ abs_vf_id; int vport_id; struct ecore_vf_queue* vf_queues; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_sb_info {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int igu_sb_id; } ;
struct ecore_queue_start_common_params {int sb_idx; struct ecore_sb_info* p_sb; scalar_t__ stats_id; int vport_id; int queue_id; } ;
struct ecore_queue_cid_vf_params {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int igu_sb_id; } ;
struct ecore_queue_cid {int cid; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef int sb_dummy ;
typedef int params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int b_is_tx; struct ecore_queue_cid* p_cid; } ;
struct TYPE_3__ {struct vfpf_start_txq_tlv start_txq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_queue_start_common_params*,int ,int) ;
 int FUNC_1 (struct ecore_sb_info*,int) ;
 struct ecore_queue_cid* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 struct ecore_queue_cid* FUNC_3 (struct ecore_hwfn*,int ,struct ecore_queue_start_common_params*,int,struct ecore_sb_info*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_queue_cid*,int ,int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_vf_info*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 size_t FUNC_8 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,size_t) ;
 size_t FUNC_10 (struct ecore_vf_info*) ;

__attribute__((used)) static void FUNC_11(struct ecore_hwfn *VAR_7,
           struct ecore_ptt *VAR_8,
           struct ecore_vf_info *VAR_9)
{
 struct ecore_queue_start_common_params VAR_10;
 struct ecore_queue_cid_vf_params VAR_11;
 struct ecore_iov_vf_mbx *VAR_12 = &VAR_9->vf_mbx;
 u8 VAR_13 = VAR_5;
 struct ecore_vf_queue *VAR_14;
 struct vfpf_start_txq_tlv *VAR_15;
 struct ecore_queue_cid *VAR_16;
 struct ecore_sb_info VAR_17;
 u8 VAR_18, VAR_19;
 u32 VAR_20 = 0;
 enum _ecore_status_t VAR_21;
 u16 VAR_22;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_15 = &VAR_12->req_virt->start_txq;

 if (!FUNC_7(VAR_7, VAR_9, VAR_15->tx_qid,
        VAR_1) ||
     !FUNC_6(VAR_7, VAR_9, VAR_15->hw_sb))
  goto out;

 VAR_18 = FUNC_8(VAR_7, VAR_9, 1);
 if (VAR_18 == VAR_0)
  goto out;

 VAR_14 = &VAR_9->vf_queues[VAR_15->tx_qid];
 if (VAR_14->cids[VAR_18].p_cid)
  goto out;

 VAR_19 = FUNC_10(VAR_9);


 VAR_10.queue_id = VAR_14->fw_tx_qid;
 VAR_10.vport_id = VAR_9->vport_id;
 VAR_10.stats_id = VAR_9->abs_vf_id + 0x10;


 FUNC_1(&VAR_17, sizeof(VAR_17));
 VAR_17.igu_sb_id = VAR_15->hw_sb;
 VAR_10.p_sb = &VAR_17;
 VAR_10.sb_idx = VAR_15->sb_index;

 FUNC_1(&VAR_11, sizeof(VAR_11));
 VAR_11.vfid = VAR_9->relative_vf_id;
 VAR_11.vf_qid = (u8)VAR_15->tx_qid;
 VAR_11.vf_legacy = VAR_19;
 VAR_11.qid_usage_idx = VAR_18;

 VAR_16 = FUNC_3(VAR_7, VAR_9->opaque_fid,
           &VAR_10, 0, &VAR_11);
 if (VAR_16 == VAR_3)
  goto out;

 VAR_22 = FUNC_5(VAR_7,
        VAR_9->relative_vf_id);
 VAR_21 = FUNC_4(VAR_7, VAR_16,
     VAR_15->pbl_addr, VAR_15->pbl_size, VAR_22);
 if (VAR_21 != VAR_2) {
  VAR_13 = VAR_4;
  FUNC_2(VAR_7, VAR_16);
 } else {
  VAR_13 = VAR_6;
  VAR_14->cids[VAR_18].p_cid = VAR_16;
  VAR_14->cids[VAR_18].b_is_tx = 1;
  VAR_20 = VAR_16->cid;
 }

out:
 FUNC_9(VAR_7, VAR_8, VAR_9,
     VAR_20, VAR_13);
}
