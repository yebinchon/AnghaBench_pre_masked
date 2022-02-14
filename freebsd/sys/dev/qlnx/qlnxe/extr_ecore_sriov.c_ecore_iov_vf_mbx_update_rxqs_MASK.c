
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct vfpf_update_rxq_tlv {int flags; int num_rxqs; size_t rx_qid; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_7__ {int capabilities; } ;
struct TYPE_8__ {TYPE_2__ vfdev_info; } ;
struct ecore_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct ecore_vf_info {TYPE_5__* vf_queues; int relative_vf_id; TYPE_3__ acquire; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_10__ {TYPE_4__* cids; } ;
struct TYPE_9__ {struct ecore_queue_cid* p_cid; scalar_t__ b_is_tx; } ;
struct TYPE_6__ {struct vfpf_update_rxq_tlv update_rxq; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,...) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,size_t,size_t) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 size_t FUNC_3 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 int FUNC_4 (struct ecore_hwfn*,void**,size_t,size_t,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_13,
      struct ecore_ptt *VAR_14,
      struct ecore_vf_info *VAR_15)
{
 struct ecore_queue_cid *VAR_16[VAR_3];
 u16 VAR_17 = sizeof(struct pfvf_def_resp_tlv);
 struct ecore_iov_vf_mbx *VAR_18 = &VAR_15->vf_mbx;
 struct vfpf_update_rxq_tlv *VAR_19;
 u8 VAR_20 = VAR_8;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 enum _ecore_status_t VAR_24;
 u16 VAR_25;

 VAR_19 = &VAR_18->req_virt->update_rxq;
 VAR_22 = !!(VAR_19->flags & VAR_11);
 VAR_21 = !!(VAR_19->flags & VAR_12);

 VAR_23 = FUNC_3(VAR_13, VAR_15, 0);
 if (VAR_23 == VAR_1)
  goto out;




 if ((VAR_15->acquire.vfdev_info.capabilities &
      VAR_10) &&
      VAR_19->num_rxqs != 1) {
  FUNC_0(VAR_13, VAR_4,
      "VF[%d] supports QIDs but sends multiple queues\n",
      VAR_15->relative_vf_id);
  goto out;
 }




 for (VAR_25 = VAR_19->rx_qid; VAR_25 < VAR_19->rx_qid + VAR_19->num_rxqs; VAR_25++) {
  if (!FUNC_2(VAR_13, VAR_15, VAR_25,
         VAR_2) ||
      !VAR_15->vf_queues[VAR_25].cids[VAR_23].p_cid ||
      VAR_15->vf_queues[VAR_25].cids[VAR_23].b_is_tx) {
   FUNC_0(VAR_13, VAR_4,
       "VF[%d]: Incorrect Rxqs [%04x, %02x]\n",
       VAR_15->relative_vf_id, VAR_19->rx_qid,
       VAR_19->num_rxqs);
   goto out;
  }
 }

 for (VAR_25 = 0; VAR_25 < VAR_19->num_rxqs; VAR_25++) {
  u16 VAR_26 = VAR_19->rx_qid + VAR_25;

  VAR_16[VAR_25] = VAR_15->vf_queues[VAR_26].cids[VAR_23].p_cid;
 }

 VAR_24 = FUNC_4(VAR_13, (void **)&VAR_16,
        VAR_19->num_rxqs,
        VAR_22,
        VAR_21,
        VAR_5,
        VAR_7);
 if (VAR_24 != VAR_6)
  goto out;

 VAR_20 = VAR_9;
out:
 FUNC_1(VAR_13, VAR_14, VAR_15, VAR_0,
          VAR_17, VAR_20);
}
