
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct vfpf_vport_start_tlv {int max_buffers_per_cqe; int zero_placement_offset; int inner_vlan_removal; int tpa_mode; int only_untagged; int mtu; int * sb_addr; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_8__ {TYPE_3__* p_virt; } ;
struct TYPE_6__ {int inner_vlan_removal; } ;
struct ecore_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct ecore_vf_info {int num_sbs; int req_spoofchk_val; int opaque_fid; int vport_id; scalar_t__ relative_vf_id; int vport_instance; int mtu; int concrete_fid; TYPE_4__ bulletin; TYPE_2__ shadow_config; int abs_vf_id; int * igu_sbs; int state; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_sp_vport_start_params {int tx_switching; int drop_ttl0; int check_mac; int mtu; int max_buffers_per_cqe; int vport_id; int opaque_fid; int concrete_fid; int only_untagged; int zero_placement_offset; int remove_inner_vlan; int tpa_mode; int member_0; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_7__ {int valid_bitmap; int default_only_untagged; } ;
struct TYPE_5__ {struct vfpf_vport_start_tlv start_vport; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,...) ;
 int FUNC_3 (struct ecore_hwfn*,int ,char*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct ecore_hwfn*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,scalar_t__,struct ecore_sp_vport_start_params*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_vf_info*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int ,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 struct ecore_vf_info* FUNC_10 (struct ecore_hwfn*,int ,int) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,int,int ) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_sp_vport_start_params*) ;

__attribute__((used)) static void FUNC_13(struct ecore_hwfn *VAR_8,
      struct ecore_ptt *VAR_9,
      struct ecore_vf_info *VAR_10)
{
 struct ecore_sp_vport_start_params VAR_11 = {0};
 struct ecore_iov_vf_mbx *VAR_12 = &VAR_10->vf_mbx;
 struct vfpf_vport_start_tlv *VAR_13;
 u8 VAR_14 = VAR_4;
 struct ecore_vf_info *VAR_15;
 u64 *VAR_16;
 int VAR_17;
 enum _ecore_status_t VAR_18;

 VAR_15 = FUNC_10(VAR_8, (u16)VAR_10->relative_vf_id, 1);
 if (!VAR_15) {
  FUNC_2(VAR_8->p_dev, 1,
     "Failed to get VF info, invalid vfid [%d]\n",
     VAR_10->relative_vf_id);
  return;
 }

 VAR_10->state = VAR_7;
 VAR_13 = &VAR_12->req_virt->start_vport;

 FUNC_9(VAR_8, VAR_9, VAR_10);


 for (VAR_17 = 0; VAR_17 < VAR_10->num_sbs; VAR_17++) {
  if (!VAR_13->sb_addr[VAR_17]) {
   FUNC_3(VAR_8, VAR_1,
       "VF[%d] did not fill the address of SB %d\n",
       VAR_10->relative_vf_id, VAR_17);
   break;
  }

  FUNC_7(VAR_8, VAR_9,
          VAR_13->sb_addr[VAR_17],
          VAR_10->igu_sbs[VAR_17],
          VAR_10->abs_vf_id, 1);
 }

 VAR_10->mtu = VAR_13->mtu;
 VAR_10->shadow_config.inner_vlan_removal = VAR_13->inner_vlan_removal;





 VAR_16 = &VAR_15->bulletin.p_virt->valid_bitmap;
 if (!(*VAR_16 & (1 << VAR_6))) {
  u8 VAR_19 = VAR_13->only_untagged;

  VAR_15->bulletin.p_virt->default_only_untagged = VAR_19;
  *VAR_16 |= 1 << VAR_5;
 }

 VAR_11.tpa_mode = VAR_13->tpa_mode;
 VAR_11.remove_inner_vlan = VAR_13->inner_vlan_removal;
 VAR_11.tx_switching = 1;
 VAR_11.zero_placement_offset = VAR_13->zero_placement_offset;


 if (FUNC_0(VAR_8->p_dev)) {
  FUNC_2(VAR_8, 0, "FPGA: Don't configure VF for Tx-switching [no pVFC]\n");
  VAR_11.tx_switching = 0;
 }


 VAR_11.only_untagged = VAR_15->bulletin.p_virt->default_only_untagged;
 VAR_11.drop_ttl0 = 0;
 VAR_11.concrete_fid = VAR_10->concrete_fid;
 VAR_11.opaque_fid = VAR_10->opaque_fid;
 VAR_11.vport_id = VAR_10->vport_id;
 VAR_11.max_buffers_per_cqe = VAR_13->max_buffers_per_cqe;
 VAR_11.mtu = VAR_10->mtu;
 VAR_11.check_mac = 1;


 VAR_18 = FUNC_5(VAR_8, VAR_10->relative_vf_id, &VAR_11);
 if (VAR_18 != VAR_2) {
  FUNC_1(VAR_8, "OSAL_IOV_PRE_START_VPORT returned error %d\n", VAR_18);
  VAR_14 = VAR_3;
  goto exit;
 }


 VAR_18 = FUNC_12(VAR_8, &VAR_11);
 if (VAR_18 != VAR_2) {
  FUNC_1(VAR_8, "ecore_iov_vf_mbx_start_vport returned error %d\n", VAR_18);
  VAR_14 = VAR_3;
 } else {
  VAR_10->vport_instance++;


  FUNC_8(VAR_8, VAR_10, *VAR_16);
  FUNC_4(VAR_8, VAR_10->relative_vf_id,
       VAR_10->vport_id, VAR_10->opaque_fid);
  FUNC_6(VAR_8, VAR_10, VAR_10->req_spoofchk_val);
 }

exit:

 FUNC_11(VAR_8, VAR_9, VAR_10, VAR_0,
          sizeof(struct pfvf_def_resp_tlv), VAR_14);
}
