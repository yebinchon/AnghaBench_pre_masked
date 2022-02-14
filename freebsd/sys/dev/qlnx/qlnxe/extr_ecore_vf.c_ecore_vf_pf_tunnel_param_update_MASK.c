
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfpf_update_tunn_param_tlv {int update_tun_cls; int ipgre_clss; int l2gre_clss; int ipgeneve_clss; int geneve_port; int update_geneve_port; int l2geneve_clss; int vxlan_port; int update_vxlan_port; int vxlan_clss; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct pfvf_update_tunn_param_tlv {TYPE_3__ hdr; } ;
struct ecore_vf_iov {TYPE_2__* pf2vf_reply; int offset; } ;
struct ecore_tunnel_info {int ip_gre; int l2_gre; int ip_geneve; int geneve_port; int l2_geneve; int vxlan_port; int vxlan; scalar_t__ b_update_tx_cls; scalar_t__ b_update_rx_cls; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; TYPE_1__* p_dev; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum ecore_tunn_clss { ____Placeholder_ecore_tunn_clss } ecore_tunn_clss ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {struct pfvf_update_tunn_param_tlv tunn_param_resp; } ;
struct TYPE_4__ {struct ecore_tunnel_info tunnel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct vfpf_update_tunn_param_tlv*,int *,int,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,scalar_t__*,int) ;
 struct vfpf_update_tunn_param_tlv* FUNC_4 (struct ecore_hwfn*,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,int) ;
 int FUNC_6 (struct vfpf_update_tunn_param_tlv*,int *,int,int *,int *,int *,int *) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_tunnel_info*,struct pfvf_update_tunn_param_tlv*) ;

enum _ecore_status_t
FUNC_8(struct ecore_hwfn *VAR_10,
    struct ecore_tunnel_info *VAR_11)
{
 struct ecore_tunnel_info *VAR_12 = &VAR_10->p_dev->tunnel;
 struct ecore_vf_iov *VAR_13 = VAR_10->vf_iov_info;
 struct pfvf_update_tunn_param_tlv *VAR_14;
 struct vfpf_update_tunn_param_tlv *VAR_15;
 enum _ecore_status_t VAR_16;

 VAR_15 = FUNC_4(VAR_10, VAR_1,
     sizeof(*VAR_15));

 if (VAR_11->b_update_rx_cls && VAR_11->b_update_tx_cls)
  VAR_15->update_tun_cls = 1;

 FUNC_6(VAR_15, &VAR_11->vxlan, (enum ecore_tunn_clss)VAR_7,
       &VAR_15->vxlan_clss, &VAR_11->vxlan_port,
       &VAR_15->update_vxlan_port,
       &VAR_15->vxlan_port);
 FUNC_6(VAR_15, &VAR_11->l2_geneve,
       (enum ecore_tunn_clss)VAR_5,
       &VAR_15->l2geneve_clss, &VAR_11->geneve_port,
       &VAR_15->update_geneve_port,
       &VAR_15->geneve_port);
 FUNC_1(VAR_15, &VAR_11->ip_geneve,
         (enum ecore_tunn_clss)VAR_3,
         &VAR_15->ipgeneve_clss);
 FUNC_1(VAR_15, &VAR_11->l2_gre,
         (enum ecore_tunn_clss)VAR_6, &VAR_15->l2gre_clss);
 FUNC_1(VAR_15, &VAR_11->ip_gre,
         (enum ecore_tunn_clss)VAR_4, &VAR_15->ipgre_clss);


 FUNC_2(&VAR_13->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_14 = &VAR_13->pf2vf_reply->tunn_param_resp;
 VAR_16 = FUNC_3(VAR_10, &VAR_14->hdr.status, sizeof(*VAR_14));

 if (VAR_16)
  goto exit;

 if (VAR_14->hdr.status != VAR_9) {
  FUNC_0(VAR_10, VAR_8,
      "Failed to update tunnel parameters\n");
  VAR_16 = VAR_2;
 }

 FUNC_7(VAR_10, VAR_12, VAR_14);
exit:
 FUNC_5(VAR_10, VAR_16);
 return VAR_16;
}
