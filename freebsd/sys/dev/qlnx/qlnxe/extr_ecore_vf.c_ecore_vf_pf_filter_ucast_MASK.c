
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct vfpf_ucast_filter_tlv {int vlan; int mac; void* type; void* opcode; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_2__ hdr; } ;
struct ecore_vf_iov {TYPE_1__* pf2vf_reply; int offset; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;
struct ecore_filter_ucast {scalar_t__ opcode; int vlan; int mac; scalar_t__ type; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,scalar_t__*,int) ;
 struct vfpf_ucast_filter_tlv* FUNC_4 (struct ecore_hwfn*,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_7,
           struct ecore_filter_ucast *VAR_8)
{
 struct ecore_vf_iov *VAR_9 = VAR_7->vf_iov_info;
 struct vfpf_ucast_filter_tlv *VAR_10;
 struct pfvf_def_resp_tlv *VAR_11;
 enum _ecore_status_t VAR_12;



 if (VAR_8->opcode == VAR_3) {
  FUNC_0(VAR_7, 1, "VFs don't support Moving of filters\n");
  return VAR_4;
 }



 VAR_10 = FUNC_4(VAR_7, VAR_1, sizeof(*VAR_10));
 VAR_10->opcode = (u8)VAR_8->opcode;
 VAR_10->type = (u8)VAR_8->type;
 FUNC_1(VAR_10->mac, VAR_8->mac, VAR_5);
 VAR_10->vlan = VAR_8->vlan;


 FUNC_2(&VAR_9->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_11 = &VAR_9->pf2vf_reply->default_resp;
 VAR_12 = FUNC_3(VAR_7, &VAR_11->hdr.status, sizeof(*VAR_11));
 if (VAR_12)
  goto exit;

 if (VAR_11->hdr.status != VAR_6) {
  VAR_12 = VAR_2;
  goto exit;
 }

exit:
 FUNC_5(VAR_7, VAR_12);

 return VAR_12;
}
