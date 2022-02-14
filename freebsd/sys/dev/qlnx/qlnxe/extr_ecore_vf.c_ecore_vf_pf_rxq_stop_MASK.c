
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfpf_stop_rxqs_tlv {int num_rxqs; int cqe_completion; int rx_qid; } ;
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
 struct vfpf_stop_rxqs_tlv* FUNC_3 (struct ecore_hwfn*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_4,
       struct ecore_queue_cid *VAR_5,
       bool VAR_6)
{
 struct ecore_vf_iov *VAR_7 = VAR_4->vf_iov_info;
 struct vfpf_stop_rxqs_tlv *VAR_8;
 struct pfvf_def_resp_tlv *VAR_9;
 enum _ecore_status_t VAR_10;


 VAR_8 = FUNC_3(VAR_4, VAR_1, sizeof(*VAR_8));

 VAR_8->rx_qid = VAR_5->rel.queue_id;
 VAR_8->num_rxqs = 1;
 VAR_8->cqe_completion = VAR_6;

 FUNC_2(VAR_4, VAR_5);


 FUNC_0(&VAR_7->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_9 = &VAR_7->pf2vf_reply->default_resp;
 VAR_10 = FUNC_1(VAR_4, &VAR_9->hdr.status, sizeof(*VAR_9));
 if (VAR_10)
  goto exit;

 if (VAR_9->hdr.status != VAR_3) {
  VAR_10 = VAR_2;
  goto exit;
 }

exit:
 FUNC_4(VAR_4, VAR_10);

 return VAR_10;
}
