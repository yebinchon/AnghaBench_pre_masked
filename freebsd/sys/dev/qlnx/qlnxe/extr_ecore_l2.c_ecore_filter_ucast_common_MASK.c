
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_4__ {int rx; int tx; int cmd_cnt; } ;
struct vport_filter_update_ramrod_data {struct eth_filter_cmd* filter_cmds; TYPE_2__ filter_cmd_hdr; } ;
struct eth_filter_cmd {scalar_t__ type; int action; void* vport_id; int vni; int vlan_id; int mac_lsb; int mac_mid; int mac_msb; } ;
struct TYPE_3__ {struct vport_filter_update_ramrod_data vport_filter_update; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_spq_comp_cb {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; struct ecore_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct ecore_hwfn {int p_dev; } ;
struct ecore_filter_ucast {int opcode; int type; int vni; int vlan; scalar_t__ mac; scalar_t__ is_tx_filter; scalar_t__ is_rx_filter; int vport_to_add_to; int vport_to_remove_from; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
typedef enum eth_filter_action { ____Placeholder_eth_filter_action } eth_filter_action ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int const) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*) ;
 int const VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct eth_filter_cmd*,struct eth_filter_cmd*,int) ;
 int FUNC_6 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_18 ;
 int FUNC_7 (int const) ;
 int FUNC_8 (struct ecore_hwfn*,int ,void**) ;
 int FUNC_9 (int *,int *,int *,void**) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_11 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_12(struct ecore_hwfn *VAR_19,
     u16 VAR_20,
     struct ecore_filter_ucast *VAR_21,
     struct vport_filter_update_ramrod_data **VAR_22,
     struct ecore_spq_entry **VAR_23,
     enum spq_mode VAR_24,
     struct ecore_spq_comp_cb *VAR_25)
{
 u8 VAR_26 = 0, VAR_27 = 0;
 struct vport_filter_update_ramrod_data *VAR_28;
 struct eth_filter_cmd *VAR_29;
 struct eth_filter_cmd *VAR_30;
 struct ecore_sp_init_data VAR_31;
 enum eth_filter_action VAR_32;
 enum _ecore_status_t VAR_33;

 VAR_33 = FUNC_8(VAR_19, VAR_21->vport_to_remove_from,
       &VAR_27);
 if (VAR_33 != VAR_3)
  return VAR_33;

 VAR_33 = FUNC_8(VAR_19, VAR_21->vport_to_add_to,
       &VAR_26);
 if (VAR_33 != VAR_3)
  return VAR_33;


 FUNC_6(&VAR_31, 0, sizeof(VAR_31));
 VAR_31.cid = FUNC_11(VAR_19);
 VAR_31.opaque_fid = VAR_20;
 VAR_31.comp_mode = VAR_24;
 VAR_31.p_comp_data = VAR_25;

 VAR_33 = FUNC_10(VAR_19, VAR_23,
       VAR_16,
       VAR_18, &VAR_31);
 if (VAR_33 != VAR_3)
  return VAR_33;

 *VAR_22 = &(*VAR_23)->ramrod.vport_filter_update;
 VAR_28 = *VAR_22;
 VAR_28->filter_cmd_hdr.rx = VAR_21->is_rx_filter ? 1 : 0;
 VAR_28->filter_cmd_hdr.tx = VAR_21->is_tx_filter ? 1 : 0;


 if (FUNC_0(VAR_19->p_dev)) {
  FUNC_2(VAR_19, VAR_1,
      "Non-Asic - prevent Tx filters\n");
  VAR_28->filter_cmd_hdr.tx = 0;
 }



 switch (VAR_21->opcode) {
 case 130:
 case 131:
  VAR_28->filter_cmd_hdr.cmd_cnt = 2; break;
 default:
  VAR_28->filter_cmd_hdr.cmd_cnt = 1; break;
 }

 VAR_29 = &VAR_28->filter_cmds[0];
 VAR_30 = &VAR_28->filter_cmds[1];

 switch (VAR_21->type) {
 case 134:
  VAR_29->type = VAR_11; break;
 case 129:
  VAR_29->type = VAR_14; break;
 case 133:
  VAR_29->type = VAR_13; break;
 case 138:
  VAR_29->type = VAR_7; break;
 case 135:
  VAR_29->type = VAR_10; break;
 case 136:
  VAR_29->type = VAR_9; break;
 case 137:
  VAR_29->type = VAR_8;
  break;
 case 132:
  VAR_29->type = VAR_12; break;
 case 128:
  VAR_29->type = VAR_15; break;
 }

 if ((VAR_29->type == VAR_11) ||
     (VAR_29->type == VAR_13) ||
     (VAR_29->type == VAR_7) ||
     (VAR_29->type == VAR_9) ||
     (VAR_29->type == VAR_8) ||
     (VAR_29->type == VAR_12))
  FUNC_9(&VAR_29->mac_msb,
          &VAR_29->mac_mid,
          &VAR_29->mac_lsb,
          (u8 *)VAR_21->mac);

 if ((VAR_29->type == VAR_14) ||
     (VAR_29->type == VAR_13) ||
     (VAR_29->type == VAR_10) ||
     (VAR_29->type == VAR_9))
  VAR_29->vlan_id = FUNC_3(VAR_21->vlan);

 if ((VAR_29->type == VAR_8) ||
     (VAR_29->type == VAR_12) ||
     (VAR_29->type == VAR_15))
  VAR_29->vni = FUNC_4(VAR_21->vni);

 if (VAR_21->opcode == 131) {
  VAR_30->type = VAR_29->type;
  VAR_30->mac_msb = VAR_29->mac_msb;
  VAR_30->mac_mid = VAR_29->mac_mid;
  VAR_30->mac_lsb = VAR_29->mac_lsb;
  VAR_30->vlan_id = VAR_29->vlan_id;
  VAR_30->vni = VAR_29->vni;

  VAR_29->action = VAR_5;

  VAR_29->vport_id = VAR_27;

  VAR_30->action = VAR_4;
  VAR_30->vport_id = VAR_26;
 } else if (VAR_21->opcode == 130) {
  VAR_29->vport_id = VAR_26;
  FUNC_5(VAR_30, VAR_29,
       sizeof(*VAR_30));
  VAR_29->action = VAR_6;
  VAR_30->action = VAR_4;
 } else {
  VAR_32 = FUNC_7(VAR_21->opcode);

  if (VAR_32 == VAR_17) {
   FUNC_1(VAR_19, 1,
      "%d is not supported yet\n",
      VAR_21->opcode);
   return VAR_2;
  }

  VAR_29->action = VAR_32;
  VAR_29->vport_id =
   (VAR_21->opcode == VAR_0) ?
   VAR_27 : VAR_26;
 }

 return VAR_3;
}
