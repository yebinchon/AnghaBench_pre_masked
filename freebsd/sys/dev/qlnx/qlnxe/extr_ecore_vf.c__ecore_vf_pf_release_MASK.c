
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef int u32 ;
struct vfpf_first_tlv {int dummy; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_1__ hdr; } ;
struct TYPE_5__ {int phys; TYPE_3__* p_virt; } ;
struct ecore_vf_iov {int mutex; TYPE_2__ bulletin; int pf2vf_reply_phys; TYPE_3__* pf2vf_reply; int vf2pf_request_phys; TYPE_3__* vf2pf_request; int offset; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; int p_dev; scalar_t__ b_int_enabled; } ;
struct ecore_bulletin_content {int dummy; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*,int ,int) ;
 int FUNC_1 (int ,struct ecore_vf_iov*) ;
 int FUNC_2 (int *) ;
 struct ecore_vf_iov* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,scalar_t__*,int) ;
 struct vfpf_first_tlv* FUNC_5 (struct ecore_hwfn*,int ,int) ;
 int FUNC_6 (struct ecore_hwfn*,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_7(struct ecore_hwfn *VAR_6,
       bool VAR_7)
{
 struct ecore_vf_iov *VAR_8 = VAR_6->vf_iov_info;
 struct pfvf_def_resp_tlv *VAR_9;
 struct vfpf_first_tlv *VAR_10;
 u32 VAR_11;
 enum _ecore_status_t VAR_12;


 VAR_10 = FUNC_5(VAR_6, VAR_1, sizeof(*VAR_10));


 FUNC_3(&VAR_8->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_9 = &VAR_8->pf2vf_reply->default_resp;
 VAR_12 = FUNC_4(VAR_6, &VAR_9->hdr.status, sizeof(*VAR_9));

 if (VAR_12 == VAR_3 && VAR_9->hdr.status != VAR_5)
  VAR_12 = VAR_2;

 FUNC_6(VAR_6, VAR_12);
 if (!VAR_7)
  return VAR_12;

 VAR_6->b_int_enabled = 0;

 if (VAR_8->vf2pf_request)
  FUNC_0(VAR_6->p_dev,
           VAR_8->vf2pf_request,
           VAR_8->vf2pf_request_phys,
           sizeof(union vfpf_tlvs));
 if (VAR_8->pf2vf_reply)
  FUNC_0(VAR_6->p_dev,
           VAR_8->pf2vf_reply,
           VAR_8->pf2vf_reply_phys,
           sizeof(union pfvf_tlvs));

 if (VAR_8->bulletin.p_virt) {
  VAR_11 = sizeof(struct ecore_bulletin_content);
  FUNC_0(VAR_6->p_dev,
           VAR_8->bulletin.p_virt,
           VAR_8->bulletin.phys,
           VAR_11);
 }





 FUNC_1(VAR_6->p_dev, VAR_6->vf_iov_info);
 VAR_6->vf_iov_info = VAR_4;

 return VAR_12;
}
