
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int update_tx_mode_config; int update_rx_mode_config; } ;
struct ecore_sp_vport_update_params {int sge_tpa_params; int rss_params; TYPE_1__ accept_flags; int update_approx_mcast_flg; int update_accept_any_vlan_flg; int update_inner_vlan_removal_flg; int update_tx_switching_flg; int update_vport_active_tx_flg; int update_vport_active_rx_flg; } ;
struct ecore_hwfn {int p_dev; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*,int,int ) ;
 int * VAR_0 ;

__attribute__((used)) static bool
FUNC_2(struct ecore_hwfn *VAR_1,
        struct ecore_sp_vport_update_params *VAR_2,
        u16 VAR_3)
{
 switch (VAR_3) {
 case 133:
  return !!(VAR_2->update_vport_active_rx_flg ||
     VAR_2->update_vport_active_tx_flg);
 case 129:


  return !!(VAR_2->update_tx_switching_flg &&
     !FUNC_0(VAR_1->p_dev));



 case 128:
  return !!VAR_2->update_inner_vlan_removal_flg;
 case 135:
  return !!VAR_2->update_accept_any_vlan_flg;
 case 132:
  return !!VAR_2->update_approx_mcast_flg;
 case 134:
  return !!(VAR_2->accept_flags.update_rx_mode_config ||
     VAR_2->accept_flags.update_tx_mode_config);
 case 131:
  return !!VAR_2->rss_params;
 case 130:
  return !!VAR_2->sge_tpa_params;
 default:
  FUNC_1(VAR_1, "Unexpected vport-update TLV[%d] %s\n",
   VAR_3, VAR_0[VAR_3]);
  return 0;
 }
}
