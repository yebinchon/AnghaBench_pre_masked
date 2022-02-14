
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vport_update ;
typedef int u8 ;
typedef int u64 ;
struct ecore_vf_queue {int dummy; } ;
struct TYPE_7__ {int inner_vlan_removal; } ;
struct TYPE_6__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {int configured_features; struct ecore_vf_queue* vf_queues; TYPE_3__ shadow_config; int vport_id; int opaque_fid; TYPE_2__ bulletin; int vport_instance; } ;
struct ecore_sp_vport_update_params {int is_rx_filter; int is_tx_filter; int update_default_vlan_enable_flg; int default_vlan_enable_flg; int update_default_vlan_flg; int update_inner_vlan_removal_flg; int inner_vlan_removal_flg; int silent_vlan_removal_flg; scalar_t__ vlan; scalar_t__ default_vlan; int vport_id; int opaque_fid; void* opcode; int vport_to_add_to; int type; int mac; } ;
struct TYPE_8__ {int queue_id; } ;
struct ecore_queue_cid {TYPE_4__ rel; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_filter_ucast {int is_rx_filter; int is_tx_filter; int update_default_vlan_enable_flg; int default_vlan_enable_flg; int update_default_vlan_flg; int update_inner_vlan_removal_flg; int inner_vlan_removal_flg; int silent_vlan_removal_flg; scalar_t__ vlan; scalar_t__ default_vlan; int vport_id; int opaque_fid; void* opcode; int vport_to_add_to; int type; int mac; } ;
typedef int filter ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {scalar_t__ pvid; int mac; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,...) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ecore_sp_vport_update_params*,int ,int) ;
 struct ecore_queue_cid* VAR_11 ;
 int VAR_12 ;
 struct ecore_queue_cid* FUNC_3 (struct ecore_vf_queue*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 int FUNC_5 (struct ecore_hwfn*,int ,struct ecore_sp_vport_update_params*,int ,struct ecore_queue_cid*) ;
 int FUNC_6 (struct ecore_hwfn*,void**,int,int ,int,int ,struct ecore_queue_cid*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,int ,struct ecore_queue_cid*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_8(struct ecore_hwfn *VAR_13,
     struct ecore_vf_info *VAR_14,
     u64 VAR_15)
{
 enum _ecore_status_t VAR_16 = VAR_8;
 struct ecore_filter_ucast VAR_17;

 if (!VAR_14->vport_instance)
  return VAR_4;

 if (VAR_15 & (1 << VAR_10)) {



  FUNC_2(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.type = VAR_1;
  VAR_17.opcode = VAR_2;
  VAR_17.is_rx_filter = 1;
  VAR_17.is_tx_filter = 1;
  VAR_17.vport_to_add_to = VAR_14->vport_id;
  FUNC_1(VAR_17.mac,
       VAR_14->bulletin.p_virt->mac,
       VAR_9);

  VAR_16 = FUNC_5(VAR_13, VAR_14->opaque_fid,
            &VAR_17,
            VAR_6, VAR_11);
  if (VAR_16) {
   FUNC_0(VAR_13, 1,
      "PF failed to configure MAC for VF\n");
   return VAR_16;
  }

  VAR_14->configured_features |= 1 << VAR_10;
 }

 if (VAR_15 & (1 << VAR_12)) {
  struct ecore_sp_vport_update_params VAR_18;
  u8 VAR_19;
  int VAR_20;

  FUNC_2(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.type = VAR_3;
  VAR_17.is_rx_filter = 1;
  VAR_17.is_tx_filter = 1;
  VAR_17.vport_to_add_to = VAR_14->vport_id;
  VAR_17.vlan = VAR_14->bulletin.p_virt->pvid;
  VAR_17.opcode = VAR_17.vlan ? VAR_2 :
           VAR_0;


  VAR_16 = FUNC_5(VAR_13, VAR_14->opaque_fid,
            &VAR_17,
            VAR_6, VAR_11);
  if (VAR_16) {
   FUNC_0(VAR_13, 1,
      "PF failed to configure VLAN for VF\n");
   return VAR_16;
  }


  FUNC_2(&VAR_18, 0, sizeof(VAR_18));
  VAR_18.opaque_fid = VAR_14->opaque_fid;
  VAR_18.vport_id = VAR_14->vport_id;
  VAR_18.update_default_vlan_enable_flg = 1;
  VAR_18.default_vlan_enable_flg = VAR_17.vlan ? 1 : 0;
  VAR_18.update_default_vlan_flg = 1;
  VAR_18.default_vlan = VAR_17.vlan;

  VAR_18.update_inner_vlan_removal_flg = 1;
  VAR_19 = VAR_17.vlan ?
     1 : VAR_14->shadow_config.inner_vlan_removal;
  VAR_18.inner_vlan_removal_flg = VAR_19;
  VAR_18.silent_vlan_removal_flg = VAR_17.vlan ? 1 : 0;
  VAR_16 = FUNC_7(VAR_13, &VAR_18,
        VAR_7,
        VAR_11);
  if (VAR_16) {
   FUNC_0(VAR_13, 1,
      "PF failed to configure VF vport for vlan\n");
   return VAR_16;
  }


  for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
   struct ecore_vf_queue *VAR_21 = &VAR_14->vf_queues[VAR_20];
   struct ecore_queue_cid *VAR_22 = VAR_11;


   VAR_22 = FUNC_3(VAR_21);
   if (VAR_22 == VAR_11)
    continue;

   VAR_16 = FUNC_6(VAR_13,
          (void **)&VAR_22,
          1, 0, 1,
          VAR_7,
          VAR_11);
   if (VAR_16) {
    FUNC_0(VAR_13, 1,
       "Failed to send Rx update fo queue[0x%04x]\n",
       VAR_22->rel.queue_id);
    return VAR_16;
   }
  }

  if (VAR_17.vlan)
   VAR_14->configured_features |= 1 << VAR_12;
  else
   VAR_14->configured_features &= ~(1 << VAR_12);
 }




 if (VAR_15)
  FUNC_4(VAR_13, VAR_14, VAR_15);

 return VAR_16;
}
