
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_start_tunnel_config {int tunnel_clss_ipgre; int tunnel_clss_l2gre; int tunnel_clss_ipgeneve; int geneve_udp_port; int set_geneve_udp_port_flg; int tunnel_clss_l2geneve; int vxlan_udp_port; int set_vxlan_udp_port_flg; int tunnel_clss_vxlan; } ;
struct ecore_tunnel_info {int ip_gre; int l2_gre; int ip_geneve; int geneve_port; int l2_geneve; int vxlan_port; int vxlan; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
struct TYPE_2__ {struct ecore_tunnel_info tunnel; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ecore_tunnel_info*,struct ecore_tunnel_info*,int) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (struct ecore_tunnel_info*,struct ecore_tunnel_info*) ;
 int FUNC_6 (struct ecore_tunnel_info*,struct ecore_tunnel_info*) ;

__attribute__((used)) static void
FUNC_7(struct ecore_hwfn *VAR_0,
          struct ecore_tunnel_info *VAR_1,
          struct pf_start_tunnel_config *VAR_2)
{
 struct ecore_tunnel_info *VAR_3 = &VAR_0->p_dev->tunnel;

 if (FUNC_1(VAR_0->p_dev)) {
  FUNC_0(VAR_0, 1,
     "A0 chip: tunnel pf start config is not supported\n");
  return;
 }

 if (!VAR_1)
  return;

 FUNC_3(VAR_3, VAR_1, 1);
 FUNC_5(VAR_3, VAR_1);
 FUNC_6(VAR_3, VAR_1);

 FUNC_4(&VAR_2->tunnel_clss_vxlan,
          &VAR_3->vxlan,
          &VAR_2->set_vxlan_udp_port_flg,
          &VAR_2->vxlan_udp_port,
          &VAR_3->vxlan_port);

 FUNC_4(&VAR_2->tunnel_clss_l2geneve,
          &VAR_3->l2_geneve,
          &VAR_2->set_geneve_udp_port_flg,
          &VAR_2->geneve_udp_port,
          &VAR_3->geneve_port);

 FUNC_2(&VAR_2->tunnel_clss_ipgeneve,
     &VAR_3->ip_geneve);

 FUNC_2(&VAR_2->tunnel_clss_l2gre,
     &VAR_3->l2_gre);

 FUNC_2(&VAR_2->tunnel_clss_ipgre,
     &VAR_3->ip_gre);
}
