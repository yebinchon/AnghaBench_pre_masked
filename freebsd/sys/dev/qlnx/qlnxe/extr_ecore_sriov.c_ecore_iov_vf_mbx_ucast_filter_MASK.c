
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vfpf_ucast_filter_tlv {int vlan; int mac; scalar_t__ type; scalar_t__ opcode; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct ecore_iov_vf_mbx {TYPE_2__* req_virt; } ;
struct TYPE_3__ {struct ecore_bulletin_content* p_virt; } ;
struct ecore_vf_info {int opaque_fid; int relative_vf_id; int abs_vf_id; int vport_instance; int vport_id; struct ecore_iov_vf_mbx vf_mbx; TYPE_1__ bulletin; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_filter_ucast {int opcode; int type; int is_rx_filter; int is_tx_filter; int * mac; int vlan; int vport_to_add_to; int vport_to_remove_from; } ;
struct ecore_bulletin_content {int valid_bitmap; int mac; } ;
typedef enum ecore_filter_ucast_type { ____Placeholder_ecore_filter_ucast_type } ecore_filter_ucast_type ;
typedef enum ecore_filter_opcode { ____Placeholder_ecore_filter_opcode } ecore_filter_opcode ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {struct vfpf_ucast_filter_tlv ucast_filter; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ecore_hwfn*,int ,struct ecore_filter_ucast*) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct ecore_filter_ucast*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,struct ecore_vf_info*,struct ecore_filter_ucast*) ;
 int FUNC_7 (struct ecore_hwfn*,int ,struct ecore_filter_ucast*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ecore_hwfn *VAR_18,
       struct ecore_ptt *VAR_19,
       struct ecore_vf_info *VAR_20)
{
 struct ecore_bulletin_content *VAR_21 = VAR_20->bulletin.p_virt;
 struct ecore_iov_vf_mbx *VAR_22 = &VAR_20->vf_mbx;
 struct vfpf_ucast_filter_tlv *VAR_23;
 u8 VAR_24 = VAR_16;
 struct ecore_filter_ucast VAR_25;
 enum _ecore_status_t VAR_26;


 FUNC_4(&VAR_25, 0, sizeof(struct ecore_filter_ucast));
 VAR_23 = &VAR_22->req_virt->ucast_filter;
 VAR_25.opcode = (enum ecore_filter_opcode)VAR_23->opcode;
 VAR_25.type = (enum ecore_filter_ucast_type)VAR_23->type;


 VAR_25.is_rx_filter = 1;
 VAR_25.is_tx_filter = 1;
 VAR_25.vport_to_remove_from = VAR_20->vport_id;
 VAR_25.vport_to_add_to = VAR_20->vport_id;
 FUNC_3(VAR_25.mac, VAR_23->mac, VAR_11);
 VAR_25.vlan = VAR_23->vlan;

 FUNC_0(VAR_18, VAR_8,
     "VF[%d]: opcode 0x%02x type 0x%02x [%s %s] [vport 0x%02x] MAC %02x:%02x:%02x:%02x:%02x:%02x, vlan 0x%04x\n",
     VAR_20->abs_vf_id, VAR_25.opcode, VAR_25.type,
     VAR_25.is_rx_filter ? "RX" : "",
     VAR_25.is_tx_filter ? "TX" : "",
     VAR_25.vport_to_add_to,
     VAR_25.mac[0], VAR_25.mac[1], VAR_25.mac[2],
     VAR_25.mac[3], VAR_25.mac[4], VAR_25.mac[5], VAR_25.vlan);

 if (!VAR_20->vport_instance) {
  FUNC_0(VAR_18, VAR_8,
      "No VPORT instance available for VF[%d], failing ucast MAC configuration\n",
      VAR_20->abs_vf_id);
  VAR_24 = VAR_14;
  goto out;
 }





 if (FUNC_6(VAR_18, VAR_20, &VAR_25) !=
     VAR_10)
  goto out;


 if ((VAR_21->valid_bitmap & (1 << VAR_17)) &&
     (VAR_25.type == VAR_6 ||
      VAR_25.type == VAR_4)) {



  if (VAR_25.opcode == VAR_2 ||
      VAR_25.opcode == VAR_5)
   VAR_24 = VAR_15;
  goto out;
 }

 if ((VAR_21->valid_bitmap & (1 << VAR_12)) &&
     (VAR_25.type == VAR_3 ||
      VAR_25.type == VAR_4)) {
  if (FUNC_2(VAR_21->mac, VAR_25.mac, VAR_11) ||
      (VAR_25.opcode != VAR_2 &&
       VAR_25.opcode != VAR_5))
   VAR_24 = VAR_15;
  goto out;
 }

 VAR_26 = FUNC_1(VAR_18, VAR_20->relative_vf_id, &VAR_25);
 if (VAR_26 == VAR_1) {
  goto out;
 } else if (VAR_26 == VAR_7) {
  VAR_24 = VAR_14;
  goto out;
 }

 VAR_26 = FUNC_7(VAR_18, VAR_20->opaque_fid, &VAR_25,
           VAR_9, VAR_13);
 if (VAR_26)
  VAR_24 = VAR_14;

out:
 FUNC_5(VAR_18, VAR_19, VAR_20, VAR_0,
          sizeof(struct pfvf_def_resp_tlv), VAR_24);
}
