
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u16 ;
struct vfpf_update_coalesce {int qid; void* tx_coal; void* rx_coal; } ;
struct TYPE_7__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_3__ hdr; } ;
struct ecore_vf_iov {TYPE_2__* pf2vf_reply; int offset; } ;
struct TYPE_5__ {int queue_id; } ;
struct ecore_queue_cid {TYPE_1__ rel; } ;
struct ecore_hwfn {TYPE_4__* p_dev; struct ecore_vf_iov* vf_iov_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_8__ {void* tx_coalesce_usecs; void* rx_coalesce_usecs; } ;
struct TYPE_6__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,void*,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__*,int) ;
 struct vfpf_update_coalesce* FUNC_3 (struct ecore_hwfn*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,int) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_5, u16 VAR_6, u16 VAR_7,
    struct ecore_queue_cid *VAR_8)
{
 struct ecore_vf_iov *VAR_9 = VAR_5->vf_iov_info;
 struct vfpf_update_coalesce *VAR_10;
 struct pfvf_def_resp_tlv *VAR_11;
 enum _ecore_status_t VAR_12;


 VAR_10 = FUNC_3(VAR_5, VAR_0,
          sizeof(*VAR_10));

 VAR_10->rx_coal = VAR_6;
 VAR_10->tx_coal = VAR_7;
 VAR_10->qid = VAR_8->rel.queue_id;

 FUNC_0(VAR_5, VAR_2,
     "Setting coalesce rx_coal = %d, tx_coal = %d at queue = %d\n",
     VAR_6, VAR_7, VAR_10->qid);


 FUNC_1(&VAR_9->offset, VAR_1,
        sizeof(struct channel_list_end_tlv));

 VAR_11 = &VAR_9->pf2vf_reply->default_resp;
 VAR_12 = FUNC_2(VAR_5, &VAR_11->hdr.status, sizeof(*VAR_11));

 if (VAR_12 != VAR_3)
  goto exit;

 if (VAR_11->hdr.status != VAR_4)
  goto exit;

 VAR_5->p_dev->rx_coalesce_usecs = VAR_6;
 VAR_5->p_dev->tx_coalesce_usecs = VAR_7;

exit:
 FUNC_4(VAR_5, VAR_12);
 return VAR_12;
}
