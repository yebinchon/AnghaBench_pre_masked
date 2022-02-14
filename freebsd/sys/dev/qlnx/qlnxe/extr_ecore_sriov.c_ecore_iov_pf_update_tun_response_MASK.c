
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct pfvf_update_tunn_param_tlv {int vxlan_udp_port; int geneve_udp_port; int ipgeneve_clss; int l2geneve_clss; int ipgre_clss; int l2gre_clss; int vxlan_clss; int ipgre_mode; int l2gre_mode; int ipgeneve_mode; int l2geneve_mode; int vxlan_mode; int tunn_feature_mask; } ;
struct TYPE_14__ {int port; } ;
struct TYPE_13__ {int port; } ;
struct TYPE_12__ {int tun_cls; int b_mode_enabled; } ;
struct TYPE_11__ {int tun_cls; int b_mode_enabled; } ;
struct TYPE_10__ {int tun_cls; } ;
struct TYPE_9__ {int tun_cls; int b_mode_enabled; } ;
struct TYPE_8__ {int tun_cls; int b_mode_enabled; } ;
struct ecore_tunnel_info {TYPE_7__ vxlan_port; TYPE_6__ geneve_port; TYPE_5__ ip_geneve; TYPE_4__ l2_geneve; TYPE_3__ ip_gre; TYPE_2__ l2_gre; TYPE_1__ vxlan; } ;



__attribute__((used)) static void
FUNC_0(struct pfvf_update_tunn_param_tlv *VAR_0,
     struct ecore_tunnel_info *VAR_1,
     u16 VAR_2)
{
 VAR_0->tunn_feature_mask = VAR_2;
 VAR_0->vxlan_mode = VAR_1->vxlan.b_mode_enabled;
 VAR_0->l2geneve_mode = VAR_1->l2_geneve.b_mode_enabled;
 VAR_0->ipgeneve_mode = VAR_1->ip_geneve.b_mode_enabled;
 VAR_0->l2gre_mode = VAR_1->l2_gre.b_mode_enabled;
 VAR_0->ipgre_mode = VAR_1->l2_gre.b_mode_enabled;
 VAR_0->vxlan_clss = VAR_1->vxlan.tun_cls;
 VAR_0->l2gre_clss = VAR_1->l2_gre.tun_cls;
 VAR_0->ipgre_clss = VAR_1->ip_gre.tun_cls;
 VAR_0->l2geneve_clss = VAR_1->l2_geneve.tun_cls;
 VAR_0->ipgeneve_clss = VAR_1->ip_geneve.tun_cls;
 VAR_0->geneve_udp_port = VAR_1->geneve_port.port;
 VAR_0->vxlan_udp_port = VAR_1->vxlan_port.port;
}
