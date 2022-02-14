
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfpf_stop_txqs_tlv {int num_txqs; int tx_qid; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_3__ hdr; } ;
struct ecore_vf_iov {TYPE_2__* pf2vf_reply; int offset; } ;
struct TYPE_4__ {int queue_id; } ;
struct ecore_queue_cid {TYPE_1__ rel; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,scalar_t__*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 struct vfpf_stop_txqs_tlv* FUNC_3 (struct ecore_hwfn*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_4,
       struct ecore_queue_cid *VAR_5)
{
 struct ecore_vf_iov *VAR_6 = VAR_4->vf_iov_info;
 struct vfpf_stop_txqs_tlv *VAR_7;
 struct pfvf_def_resp_tlv *VAR_8;
 enum _ecore_status_t VAR_9;


 VAR_7 = FUNC_3(VAR_4, VAR_1, sizeof(*VAR_7));

 VAR_7->tx_qid = VAR_5->rel.queue_id;
 VAR_7->num_txqs = 1;

 FUNC_2(VAR_4, VAR_5);


 FUNC_0(&VAR_6->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_8 = &VAR_6->pf2vf_reply->default_resp;
 VAR_9 = FUNC_1(VAR_4, &VAR_8->hdr.status, sizeof(*VAR_8));
 if (VAR_9)
  goto exit;

 if (VAR_8->hdr.status != VAR_3) {
  VAR_9 = VAR_2;
  goto exit;
 }

exit:
 FUNC_4(VAR_4, VAR_9);

 return VAR_9;
}
