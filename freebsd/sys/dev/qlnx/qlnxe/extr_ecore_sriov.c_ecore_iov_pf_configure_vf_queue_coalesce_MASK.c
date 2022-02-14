
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct ecore_vf_queue {TYPE_2__* cids; int fw_rx_qid; } ;
struct ecore_vf_info {size_t rx_coal; size_t tx_coal; int abs_vf_id; struct ecore_vf_queue* vf_queues; } ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* pf_iov_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {scalar_t__ p_cid; int b_is_tx; } ;
struct TYPE_3__ {struct ecore_vf_info* vfs_array; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int ,size_t) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,size_t) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ecore_queue_cid* FUNC_3 (struct ecore_vf_queue*) ;
 int FUNC_4 (struct ecore_hwfn*,size_t,int,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;
 struct ecore_ptt* FUNC_7 (struct ecore_hwfn*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,size_t,struct ecore_queue_cid*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,size_t,scalar_t__) ;

enum _ecore_status_t
FUNC_11(struct ecore_hwfn *VAR_7,
      u16 VAR_8, u16 VAR_9,
      u16 VAR_10, u16 VAR_11)
{
 struct ecore_queue_cid *VAR_12;
 struct ecore_vf_info *VAR_13;
 struct ecore_ptt *VAR_14;
 int VAR_15, VAR_16 = 0;

 if (!FUNC_4(VAR_7, VAR_10, 1, 1)) {
  FUNC_1(VAR_7, 1,
     "VF[%d] - Can not set coalescing: VF is not active\n",
     VAR_10);
  return VAR_1;
 }

 VAR_13 = &VAR_7->pf_iov_info->vfs_array[VAR_10];
 VAR_14 = FUNC_7(VAR_7);
 if (!VAR_14)
  return VAR_0;

 if (!FUNC_5(VAR_7, VAR_13, VAR_11,
        VAR_2) &&
     VAR_8) {
  FUNC_0(VAR_7, "VF[%d]: Invalid Rx queue_id = %d\n",
         VAR_13->abs_vf_id, VAR_11);
  goto out;
 }

 if (!FUNC_6(VAR_7, VAR_13, VAR_11,
        VAR_2) &&
     VAR_9) {
  FUNC_0(VAR_7, "VF[%d]: Invalid Tx queue_id = %d\n",
         VAR_13->abs_vf_id, VAR_11);
  goto out;
 }

 FUNC_2(VAR_7, VAR_3,
     "VF[%d]: Setting coalesce for VF rx_coal = %d, tx_coal = %d at queue = %d\n",
     VAR_13->abs_vf_id, VAR_8, VAR_9, VAR_11);

 if (VAR_8) {
  VAR_12 = FUNC_3(&VAR_13->vf_queues[VAR_11]);

  VAR_16 = FUNC_9(VAR_7, VAR_14, VAR_8, VAR_12);
  if (VAR_16 != VAR_4) {
   FUNC_2(VAR_7, VAR_3,
       "VF[%d]: Unable to set rx queue = %d coalesce\n",
       VAR_13->abs_vf_id, VAR_13->vf_queues[VAR_11].fw_rx_qid);
   goto out;
  }
  VAR_13->rx_coal = VAR_8;
 }




 if (VAR_9) {
  struct ecore_vf_queue *VAR_17 = &VAR_13->vf_queues[VAR_11];

  for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
   if (VAR_17->cids[VAR_15].p_cid == VAR_6)
    continue;

   if (!VAR_17->cids[VAR_15].b_is_tx)
    continue;

   VAR_16 = FUNC_10(VAR_7, VAR_14, VAR_9,
          VAR_17->cids[VAR_15].p_cid);
   if (VAR_16 != VAR_4) {
    FUNC_2(VAR_7, VAR_3,
        "VF[%d]: Unable to set tx queue coalesce\n",
        VAR_13->abs_vf_id);
    goto out;
   }
  }
  VAR_13->tx_coal = VAR_9;
 }

out:
 FUNC_8(VAR_7, VAR_14);

 return VAR_16;
}
