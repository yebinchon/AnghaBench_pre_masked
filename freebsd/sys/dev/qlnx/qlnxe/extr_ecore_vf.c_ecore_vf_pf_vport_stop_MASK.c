
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfpf_first_tlv {int dummy; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_1__ hdr; } ;
struct ecore_vf_iov {int offset; TYPE_2__* pf2vf_reply; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,scalar_t__*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_4)
{
 struct ecore_vf_iov *VAR_5 = VAR_4->vf_iov_info;
 struct pfvf_def_resp_tlv *VAR_6 = &VAR_5->pf2vf_reply->default_resp;
 enum _ecore_status_t VAR_7;


 FUNC_2(VAR_4, VAR_1,
    sizeof(struct vfpf_first_tlv));


 FUNC_0(&VAR_5->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_7 = FUNC_1(VAR_4, &VAR_6->hdr.status, sizeof(*VAR_6));
 if (VAR_7)
  goto exit;

 if (VAR_6->hdr.status != VAR_3) {
  VAR_7 = VAR_2;
  goto exit;
 }

exit:
 FUNC_3(VAR_4, VAR_7);

 return VAR_7;
}
