
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct vfpf_read_coal_req_tlv {int is_rx; int qid; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct pfvf_read_coal_resp_tlv {int coal; TYPE_3__ hdr; } ;
struct ecore_vf_iov {TYPE_2__* pf2vf_reply; int offset; } ;
struct TYPE_4__ {int queue_id; } ;
struct ecore_queue_cid {scalar_t__ b_is_rx; TYPE_1__ rel; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {struct pfvf_read_coal_resp_tlv read_coal_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,scalar_t__*,int) ;
 struct vfpf_read_coal_req_tlv* FUNC_2 (struct ecore_hwfn*,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_4,
           u16 *VAR_5,
           struct ecore_queue_cid *VAR_6)
{
 struct ecore_vf_iov *VAR_7 = VAR_4->vf_iov_info;
 struct pfvf_read_coal_resp_tlv *VAR_8;
 struct vfpf_read_coal_req_tlv *VAR_9;
 enum _ecore_status_t VAR_10;


 VAR_9 = FUNC_2(VAR_4, VAR_0,
          sizeof(*VAR_9));
 VAR_9->qid = VAR_6->rel.queue_id;
 VAR_9->is_rx = VAR_6->b_is_rx ? 1 : 0;

 FUNC_0(&VAR_7->offset, VAR_1,
        sizeof(struct channel_list_end_tlv));
 VAR_8 = &VAR_7->pf2vf_reply->read_coal_resp;

 VAR_10 = FUNC_1(VAR_4, &VAR_8->hdr.status, sizeof(*VAR_8));
 if (VAR_10 != VAR_2)
  goto exit;

 if (VAR_8->hdr.status != VAR_3)
  goto exit;

 *VAR_5 = VAR_8->coal;
exit:
 FUNC_3(VAR_4, VAR_10);

 return VAR_10;
}
