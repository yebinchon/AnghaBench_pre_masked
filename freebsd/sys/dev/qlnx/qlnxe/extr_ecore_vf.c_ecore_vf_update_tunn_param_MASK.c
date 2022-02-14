
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pfvf_update_tunn_param_tlv {int vxlan_udp_port; int geneve_udp_port; int ipgre_clss; int ipgre_mode; int l2gre_clss; int l2gre_mode; int ipgeneve_clss; int ipgeneve_mode; int l2geneve_clss; int l2geneve_mode; int vxlan_clss; int vxlan_mode; int tunn_feature_mask; } ;
struct TYPE_6__ {int b_mode_enabled; } ;
struct TYPE_5__ {int port; } ;
struct TYPE_4__ {int port; } ;
struct ecore_tunnel_info {TYPE_3__ ip_gre; TYPE_3__ l2_gre; TYPE_3__ ip_geneve; TYPE_3__ l2_geneve; TYPE_3__ vxlan; TYPE_2__ vxlan_port; TYPE_1__ geneve_port; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ecore_hwfn *VAR_6,
      struct ecore_tunnel_info *VAR_7,
      struct pfvf_update_tunn_param_tlv *VAR_8)
{

 u16 VAR_9 = VAR_8->tunn_feature_mask;

 FUNC_1(&VAR_7->vxlan, VAR_9,
         VAR_8->vxlan_mode, VAR_8->vxlan_clss,
         VAR_4);
 FUNC_1(&VAR_7->l2_geneve, VAR_9,
         VAR_8->l2geneve_mode,
         VAR_8->l2geneve_clss,
         VAR_2);
 FUNC_1(&VAR_7->ip_geneve, VAR_9,
         VAR_8->ipgeneve_mode,
         VAR_8->ipgeneve_clss,
         VAR_0);
 FUNC_1(&VAR_7->l2_gre, VAR_9,
         VAR_8->l2gre_mode, VAR_8->l2gre_clss,
         VAR_3);
 FUNC_1(&VAR_7->ip_gre, VAR_9,
         VAR_8->ipgre_mode, VAR_8->ipgre_clss,
         VAR_1);
 VAR_7->geneve_port.port = VAR_8->geneve_udp_port;
 VAR_7->vxlan_port.port = VAR_8->vxlan_udp_port;

 FUNC_0(VAR_6, VAR_5,
     "tunn mode: vxlan=0x%x, l2geneve=0x%x, ipgeneve=0x%x, l2gre=0x%x, ipgre=0x%x",
     VAR_7->vxlan.b_mode_enabled, VAR_7->l2_geneve.b_mode_enabled,
     VAR_7->ip_geneve.b_mode_enabled,
     VAR_7->l2_gre.b_mode_enabled,
     VAR_7->ip_gre.b_mode_enabled);
}
