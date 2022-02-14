
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct ecore_vf_queue {TYPE_1__* cids; } ;
struct ecore_vf_info {int num_active_rxqs; int relative_vf_id; struct ecore_vf_queue* vf_queues; } ;
struct ecore_queue_cid {int qid_usage_idx; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ p_cid; scalar_t__ b_is_tx; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,size_t,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,scalar_t__,int,int) ;
 struct ecore_queue_cid* FUNC_2 (struct ecore_vf_queue*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_5,
         struct ecore_vf_info *VAR_6,
         u16 VAR_7,
         u8 VAR_8,
         bool VAR_9)
{
 struct ecore_vf_queue *VAR_10;
 enum _ecore_status_t VAR_11 = VAR_3;

 if (!FUNC_3(VAR_5, VAR_6, VAR_7,
        VAR_1)) {
  FUNC_0(VAR_5, VAR_2,
      "VF[%d] Tried Closing Rx 0x%04x.%02x which is inactive\n",
      VAR_6->relative_vf_id, VAR_7, VAR_8);
  return VAR_0;
 }

 VAR_10 = &VAR_6->vf_queues[VAR_7];




 if (!VAR_10->cids[VAR_8].p_cid ||
     VAR_10->cids[VAR_8].b_is_tx) {
  struct ecore_queue_cid *VAR_12;

  VAR_12 = FUNC_2(VAR_10);
  FUNC_0(VAR_5, VAR_2,
      "VF[%d] - Tried Closing Rx 0x%04x.%02x, but Rx is at %04x.%02x\n",
       VAR_6->relative_vf_id, VAR_7, VAR_8,
       VAR_7, VAR_12->qid_usage_idx);
  return VAR_0;
 }


 VAR_11 = FUNC_1(VAR_5,
         VAR_10->cids[VAR_8].p_cid,
         0, VAR_9);
 if (VAR_11 != VAR_3)
  return VAR_11;

 VAR_10->cids[VAR_8].p_cid = VAR_4;
 VAR_6->num_active_rxqs--;

 return VAR_3;
}
