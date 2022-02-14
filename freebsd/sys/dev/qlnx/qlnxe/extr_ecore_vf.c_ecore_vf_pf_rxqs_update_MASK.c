
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct vfpf_update_rxq_tlv {int num_rxqs; int flags; int rx_qid; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_3__ hdr; } ;
struct ecore_vf_iov {int offset; TYPE_1__* pf2vf_reply; } ;
struct TYPE_5__ {int queue_id; } ;
struct ecore_queue_cid {TYPE_2__ rel; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 struct vfpf_update_rxq_tlv* FUNC_4 (struct ecore_hwfn*,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_6,
          struct ecore_queue_cid **VAR_7,
          u8 VAR_8,
          u8 VAR_9,
          u8 VAR_10)
{
 struct ecore_vf_iov *VAR_11 = VAR_6->vf_iov_info;
 struct pfvf_def_resp_tlv *VAR_12 = &VAR_11->pf2vf_reply->default_resp;
 struct vfpf_update_rxq_tlv *VAR_13;
 enum _ecore_status_t VAR_14;






 if (VAR_8 != 1) {
  FUNC_0(VAR_6, 1,
     "VFs can no longer update more than a single queue\n");
  return VAR_2;
 }


 VAR_13 = FUNC_4(VAR_6, VAR_1, sizeof(*VAR_13));

 VAR_13->rx_qid = (*VAR_7)->rel.queue_id;
 VAR_13->num_rxqs = 1;

 if (VAR_9)
  VAR_13->flags |= VAR_4;
 if (VAR_10)
  VAR_13->flags |= VAR_5;

 FUNC_3(VAR_6, *VAR_7);


 FUNC_1(&VAR_11->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_14 = FUNC_2(VAR_6, &VAR_12->hdr.status, sizeof(*VAR_12));
 if (VAR_14)
  goto exit;

 if (VAR_12->hdr.status != VAR_3) {
  VAR_14 = VAR_2;
  goto exit;
 }

exit:
 FUNC_5(VAR_6, VAR_14);
 return VAR_14;
}
