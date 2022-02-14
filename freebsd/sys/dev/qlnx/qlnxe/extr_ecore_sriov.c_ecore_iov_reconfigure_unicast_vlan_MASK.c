
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vlans; } ;
struct ecore_vf_info {int relative_vf_id; int opaque_fid; TYPE_2__ shadow_config; int vport_id; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_filter_ucast {int is_rx_filter; int is_tx_filter; int vlan; int type; int opcode; int vport_to_add_to; } ;
typedef int filter ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int vid; int used; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ecore_filter_ucast*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (struct ecore_hwfn*,int ,struct ecore_filter_ucast*,int ,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_7,
              struct ecore_vf_info *VAR_8)
{
 struct ecore_filter_ucast VAR_9;
 enum _ecore_status_t VAR_10 = VAR_5;
 int VAR_11;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.is_rx_filter = 1;
 VAR_9.is_tx_filter = 1;
 VAR_9.vport_to_add_to = VAR_8->vport_id;
 VAR_9.opcode = VAR_1;


 for (VAR_11 = 0; VAR_11 < VAR_0 + 1; VAR_11++) {
  if (!VAR_8->shadow_config.vlans[VAR_11].used)
   continue;

  VAR_9.type = VAR_2;
  VAR_9.vlan = VAR_8->shadow_config.vlans[VAR_11].vid;
  FUNC_1(VAR_7, VAR_3,
      "Reconfiguring VLAN [0x%04x] for VF [%04x]\n",
      VAR_9.vlan, VAR_8->relative_vf_id);
  VAR_10 = FUNC_3(VAR_7, VAR_8->opaque_fid,
            &VAR_9, VAR_4, VAR_6);
  if (VAR_10) {
   FUNC_0(VAR_7, 1, "Failed to configure VLAN [%04x] to VF [%04x]\n",
      VAR_9.vlan,
      VAR_8->relative_vf_id);
   break;
  }
 }

 return VAR_10;
}
