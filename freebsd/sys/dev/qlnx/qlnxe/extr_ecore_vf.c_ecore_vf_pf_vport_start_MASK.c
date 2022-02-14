
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct vfpf_vport_start_tlv {int tpa_mode; int * sb_addr; void* zero_placement_offset; void* only_untagged; void* max_buffers_per_cqe; void* inner_vlan_removal; void* vport_id; int mtu; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_4__ hdr; } ;
struct TYPE_5__ {int num_sbs; } ;
struct TYPE_6__ {TYPE_1__ resc; } ;
struct ecore_vf_iov {TYPE_3__* pf2vf_reply; int offset; struct ecore_sb_info** sbs_info; TYPE_2__ acquire_resp; } ;
struct ecore_sb_info {int sb_phys; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum ecore_tpa_mode { ____Placeholder_ecore_tpa_mode } ecore_tpa_mode ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_7__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,scalar_t__*,int) ;
 struct vfpf_vport_start_tlv* FUNC_2 (struct ecore_hwfn*,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_4,
          u8 VAR_5,
          u16 VAR_6,
          u8 VAR_7,
          enum ecore_tpa_mode VAR_8,
          u8 VAR_9,
          u8 VAR_10,
          u8 VAR_11)
{
 struct ecore_vf_iov *VAR_12 = VAR_4->vf_iov_info;
 struct vfpf_vport_start_tlv *VAR_13;
 struct pfvf_def_resp_tlv *VAR_14;
 enum _ecore_status_t VAR_15;
 int VAR_16;


 VAR_13 = FUNC_2(VAR_4, VAR_1, sizeof(*VAR_13));

 VAR_13->mtu = VAR_6;
 VAR_13->vport_id = VAR_5;
 VAR_13->inner_vlan_removal = VAR_7;
 VAR_13->tpa_mode = VAR_8;
 VAR_13->max_buffers_per_cqe = VAR_9;
 VAR_13->only_untagged = VAR_10;
 VAR_13->zero_placement_offset = VAR_11;


 for (VAR_16 = 0; VAR_16 < VAR_4->vf_iov_info->acquire_resp.resc.num_sbs; VAR_16++) {
  struct ecore_sb_info *VAR_17 = VAR_4->vf_iov_info->sbs_info[VAR_16];

  if (VAR_17)
   VAR_13->sb_addr[VAR_16] = VAR_17->sb_phys;
 }


 FUNC_0(&VAR_12->offset,
        VAR_0,
        sizeof(struct channel_list_end_tlv));

 VAR_14 = &VAR_12->pf2vf_reply->default_resp;
 VAR_15 = FUNC_1(VAR_4, &VAR_14->hdr.status, sizeof(*VAR_14));
 if (VAR_15)
  goto exit;

 if (VAR_14->hdr.status != VAR_3) {
  VAR_15 = VAR_2;
  goto exit;
 }

exit:
 FUNC_3(VAR_4, VAR_15);

 return VAR_15;
}
