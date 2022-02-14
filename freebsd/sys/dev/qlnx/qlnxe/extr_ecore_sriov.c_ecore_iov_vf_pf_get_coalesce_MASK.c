
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct vfpf_read_coal_req_tlv {size_t qid; scalar_t__ is_rx; } ;
struct pfvf_read_coal_resp_tlv {size_t coal; } ;
struct ecore_vf_queue {TYPE_2__* cids; } ;
struct ecore_iov_vf_mbx {int * offset; TYPE_1__* req_virt; scalar_t__ reply_virt; } ;
struct ecore_vf_info {struct ecore_vf_queue* vf_queues; int abs_vf_id; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {struct ecore_queue_cid* p_cid; int b_is_tx; } ;
struct TYPE_3__ {struct vfpf_read_coal_req_tlv read_coal_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct ecore_queue_cid* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pfvf_read_coal_resp_tlv* FUNC_1 (int **,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_queue_cid*,size_t*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_queue_cid*,size_t*) ;
 struct ecore_queue_cid* FUNC_4 (struct ecore_vf_queue*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;

__attribute__((used)) static void FUNC_8(struct ecore_hwfn *VAR_9,
      struct ecore_ptt *VAR_10,
      struct ecore_vf_info *VAR_11)
{
 struct ecore_iov_vf_mbx *VAR_12 = &VAR_11->vf_mbx;
 struct pfvf_read_coal_resp_tlv *VAR_13;
 struct vfpf_read_coal_req_tlv *VAR_14;
 u8 VAR_15 = VAR_7;
 struct ecore_vf_queue *VAR_16;
 struct ecore_queue_cid *VAR_17;
 enum _ecore_status_t VAR_18 = VAR_4;
 u16 VAR_19 = 0, VAR_20, VAR_21;
 bool VAR_22;

 VAR_12->offset = (u8 *)VAR_12->reply_virt;
 VAR_14 = &VAR_12->req_virt->read_coal_req;

 VAR_20 = VAR_14->qid;
 VAR_22 = VAR_14->is_rx ? 1 : 0;

 if (VAR_22) {
  if (!FUNC_6(VAR_9, VAR_11, VAR_20,
         VAR_2)) {
   FUNC_0(VAR_9, VAR_3,
       "VF[%d]: Invalid Rx queue_id = %d\n",
       VAR_11->abs_vf_id, VAR_20);
   goto send_resp;
  }

  VAR_17 = FUNC_4(&VAR_11->vf_queues[VAR_20]);
  VAR_18 = FUNC_2(VAR_9, VAR_10, VAR_17, &VAR_19);
  if (VAR_18 != VAR_4)
   goto send_resp;
 } else {
  if (!FUNC_7(VAR_9, VAR_11, VAR_20,
         VAR_2)) {
   FUNC_0(VAR_9, VAR_3,
       "VF[%d]: Invalid Tx queue_id = %d\n",
       VAR_11->abs_vf_id, VAR_20);
   goto send_resp;
  }
  for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
   VAR_16 = &VAR_11->vf_queues[VAR_20];
   if ((VAR_16->cids[VAR_21].p_cid == VAR_6) ||
       (!VAR_16->cids[VAR_21].b_is_tx))
    continue;

   VAR_17 = VAR_16->cids[VAR_21].p_cid;

   VAR_18 = FUNC_3(VAR_9, VAR_10,
          VAR_17, &VAR_19);
   if (VAR_18 != VAR_4)
    goto send_resp;
   break;
  }
 }

 VAR_15 = VAR_8;

send_resp:
 VAR_13 = FUNC_1(&VAR_12->offset, VAR_0,
          sizeof(*VAR_13));
 VAR_13->coal = VAR_19;

 FUNC_1(&VAR_12->offset, VAR_1,
        sizeof(struct channel_list_end_tlv));

 FUNC_5(VAR_9, VAR_10, VAR_11, sizeof(*VAR_13), VAR_15);
}
