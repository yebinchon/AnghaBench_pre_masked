
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct vfpf_update_coalesce {size_t rx_coal; size_t tx_coal; size_t qid; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct ecore_vf_queue {TYPE_2__* cids; int fw_rx_qid; } ;
struct ecore_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct ecore_vf_info {size_t rx_coal; size_t tx_coal; int abs_vf_id; struct ecore_vf_queue* vf_queues; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {scalar_t__ p_cid; int b_is_tx; } ;
struct TYPE_3__ {struct vfpf_update_coalesce update_coalesce; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int ,size_t) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ecore_queue_cid* FUNC_2 (struct ecore_vf_queue*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,int,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,size_t,struct ecore_queue_cid*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ecore_hwfn *VAR_8,
      struct ecore_ptt *VAR_9,
      struct ecore_vf_info *VAR_10)
{
 struct ecore_iov_vf_mbx *VAR_11 = &VAR_10->vf_mbx;
 enum _ecore_status_t VAR_12 = VAR_3;
 struct vfpf_update_coalesce *VAR_13;
 u8 VAR_14 = VAR_6;
 struct ecore_queue_cid *VAR_15;
 u16 VAR_16, VAR_17;
 u16 VAR_18;
 int VAR_19;

 VAR_13 = &VAR_11->req_virt->update_coalesce;

 VAR_16 = VAR_13->rx_coal;
 VAR_17 = VAR_13->tx_coal;
 VAR_18 = VAR_13->qid;

 if (!FUNC_4(VAR_8, VAR_10, VAR_18,
        VAR_1) &&
     VAR_16) {
  FUNC_0(VAR_8, "VF[%d]: Invalid Rx queue_id = %d\n",
         VAR_10->abs_vf_id, VAR_18);
  goto out;
 }

 if (!FUNC_5(VAR_8, VAR_10, VAR_18,
        VAR_1) &&
     VAR_17) {
  FUNC_0(VAR_8, "VF[%d]: Invalid Tx queue_id = %d\n",
         VAR_10->abs_vf_id, VAR_18);
  goto out;
 }

 FUNC_1(VAR_8, VAR_2,
     "VF[%d]: Setting coalesce for VF rx_coal = %d, tx_coal = %d at queue = %d\n",
     VAR_10->abs_vf_id, VAR_16, VAR_17, VAR_18);

 if (VAR_16) {
  VAR_15 = FUNC_2(&VAR_10->vf_queues[VAR_18]);

  VAR_12 = FUNC_6(VAR_8, VAR_9, VAR_16, VAR_15);
  if (VAR_12 != VAR_3) {
   FUNC_1(VAR_8, VAR_2,
       "VF[%d]: Unable to set rx queue = %d coalesce\n",
       VAR_10->abs_vf_id, VAR_10->vf_queues[VAR_18].fw_rx_qid);
   goto out;
  }
  VAR_10->rx_coal = VAR_16;
 }




 if (VAR_17) {
  struct ecore_vf_queue *VAR_20 = &VAR_10->vf_queues[VAR_18];

  for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
   if (VAR_20->cids[VAR_19].p_cid == VAR_5)
    continue;

   if (!VAR_20->cids[VAR_19].b_is_tx)
    continue;

   VAR_12 = FUNC_7(VAR_8, VAR_9, VAR_17,
          VAR_20->cids[VAR_19].p_cid);
   if (VAR_12 != VAR_3) {
    FUNC_1(VAR_8, VAR_2,
        "VF[%d]: Unable to set tx queue coalesce\n",
        VAR_10->abs_vf_id);
    goto out;
   }
  }
  VAR_10->tx_coal = VAR_17;
 }

 VAR_14 = VAR_7;
out:
 FUNC_3(VAR_8, VAR_9, VAR_10, VAR_0,
          sizeof(struct pfvf_def_resp_tlv), VAR_14);
}
