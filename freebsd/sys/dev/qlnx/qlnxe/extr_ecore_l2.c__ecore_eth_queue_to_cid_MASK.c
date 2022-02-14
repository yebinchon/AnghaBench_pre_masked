
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ecore_queue_start_common_params {int sb_idx; TYPE_1__* p_sb; int stats_id; int queue_id; int vport_id; } ;
struct TYPE_4__ {int stats_id; int queue_id; int vport_id; } ;
struct ecore_queue_cid_vf_params {int b_is_rx; scalar_t__ vfid; int sb_idx; int sb_igu_id; TYPE_2__ abs; TYPE_2__ rel; int qid_usage_idx; int cid; int opaque_fid; int vf_legacy; int vf_qid; struct ecore_hwfn* p_owner; } ;
struct ecore_queue_cid {int b_is_rx; scalar_t__ vfid; int sb_idx; int sb_igu_id; TYPE_2__ abs; TYPE_2__ rel; int qid_usage_idx; int cid; int opaque_fid; int vf_legacy; int vf_qid; struct ecore_hwfn* p_owner; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int igu_sb_id; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 struct ecore_queue_cid_vf_params* VAR_3 ;
 int FUNC_2 (int ,struct ecore_queue_cid_vf_params*) ;
 struct ecore_queue_cid_vf_params* FUNC_3 (int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_queue_cid_vf_params*) ;
 int FUNC_5 (struct ecore_hwfn*,int ,int *) ;
 int FUNC_6 (struct ecore_hwfn*,int ,int *) ;

__attribute__((used)) static struct ecore_queue_cid *
FUNC_7(struct ecore_hwfn *VAR_4,
   u16 VAR_5, u32 VAR_6,
   struct ecore_queue_start_common_params *VAR_7,
   bool VAR_8,
   struct ecore_queue_cid_vf_params *VAR_9)
{
 struct ecore_queue_cid *VAR_10;
 enum _ecore_status_t VAR_11;

 VAR_10 = FUNC_3(VAR_4->p_dev, sizeof(*VAR_10));
 if (VAR_10 == VAR_3)
  return VAR_3;

 VAR_10->opaque_fid = VAR_5;
 VAR_10->cid = VAR_6;
 VAR_10->p_owner = VAR_4;


 VAR_10->rel.vport_id = VAR_7->vport_id;
 VAR_10->rel.queue_id = VAR_7->queue_id;
 VAR_10->rel.stats_id = VAR_7->stats_id;
 VAR_10->sb_igu_id = VAR_7->p_sb->igu_sb_id;
 VAR_10->b_is_rx = VAR_8;
 VAR_10->sb_idx = VAR_7->sb_idx;


 if (VAR_9 != VAR_3) {
  VAR_10->vfid = VAR_9->vfid;
  VAR_10->vf_qid = VAR_9->vf_qid;
  VAR_10->vf_legacy = VAR_9->vf_legacy;
 } else {
  VAR_10->vfid = VAR_1;
 }


 if (FUNC_1(VAR_4->p_dev)) {
  VAR_10->abs = VAR_10->rel;

  goto out;
 }





 VAR_11 = FUNC_6(VAR_4, VAR_10->rel.vport_id, &VAR_10->abs.vport_id);
 if (VAR_11 != VAR_2)
  goto fail;

 VAR_11 = FUNC_5(VAR_4, VAR_10->rel.queue_id,
          &VAR_10->abs.queue_id);
 if (VAR_11 != VAR_2)
  goto fail;




 if (VAR_10->vfid == VAR_1) {
  VAR_11 = FUNC_6(VAR_4, VAR_10->rel.stats_id,
        &VAR_10->abs.stats_id);
  if (VAR_11 != VAR_2)
   goto fail;
 } else {
  VAR_10->abs.stats_id = VAR_10->rel.stats_id;
 }

out:



 if (!VAR_9) {
  if (!FUNC_4(VAR_4, VAR_10))
   goto fail;
 } else {
  VAR_10->qid_usage_idx = VAR_9->qid_usage_idx;
 }

 FUNC_0(VAR_4, VAR_0,
     "opaque_fid: %04x CID %08x vport %02x [%02x] qzone %04x.%02x [%04x] stats %02x [%02x] SB %04x PI %02x\n",
     VAR_10->opaque_fid, VAR_10->cid,
     VAR_10->rel.vport_id, VAR_10->abs.vport_id,
     VAR_10->rel.queue_id, VAR_10->qid_usage_idx,
     VAR_10->abs.queue_id,
     VAR_10->rel.stats_id, VAR_10->abs.stats_id,
     VAR_10->sb_igu_id, VAR_10->sb_idx);

 return VAR_10;

fail:
 FUNC_2(VAR_4->p_dev, VAR_10);
 return VAR_3;
}
