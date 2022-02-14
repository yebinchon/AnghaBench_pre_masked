
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int syn_phy_addr_hi; int syn_phy_addr_lo; int syn_ip_payload_length; int connect_mode; int rcv_wnd_scale; int mss; int remote_port; int local_port; int tos_or_tc; int ttl; int flow_label; int * remote_ip; int * local_ip; int ip_version; int flags; int vlan_id; int remote_mac_addr_hi; int remote_mac_addr_mid; int remote_mac_addr_lo; int local_mac_addr_hi; int local_mac_addr_mid; int local_mac_addr_lo; } ;
struct iwarp_tcp_offload_ramrod_data {TYPE_1__ tcp; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct ecore_hwfn *VAR_1,
        struct iwarp_tcp_offload_ramrod_data *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, ">>> PRINT TCP RAMROD\n");

 FUNC_0(VAR_1, VAR_0, "local_mac=%x %x %x\n",
     VAR_2->tcp.local_mac_addr_lo,
     VAR_2->tcp.local_mac_addr_mid,
     VAR_2->tcp.local_mac_addr_hi);

 FUNC_0(VAR_1, VAR_0, "remote_mac=%x %x %x\n",
     VAR_2->tcp.remote_mac_addr_lo,
     VAR_2->tcp.remote_mac_addr_mid,
     VAR_2->tcp.remote_mac_addr_hi);

 FUNC_0(VAR_1, VAR_0, "vlan_id=%x\n",
     VAR_2->tcp.vlan_id);
 FUNC_0(VAR_1, VAR_0, "flags=%x\n",
     VAR_2->tcp.flags);

 FUNC_0(VAR_1, VAR_0, "ip_version=%x\n",
     VAR_2->tcp.ip_version);
 FUNC_0(VAR_1, VAR_0, "local_ip=%x.%x.%x.%x\n",
     VAR_2->tcp.local_ip[0],
     VAR_2->tcp.local_ip[1],
     VAR_2->tcp.local_ip[2],
     VAR_2->tcp.local_ip[3]);
 FUNC_0(VAR_1, VAR_0, "remote_ip=%x.%x.%x.%x\n",
     VAR_2->tcp.remote_ip[0],
     VAR_2->tcp.remote_ip[1],
     VAR_2->tcp.remote_ip[2],
     VAR_2->tcp.remote_ip[3]);
 FUNC_0(VAR_1, VAR_0, "flow_label=%x\n",
     VAR_2->tcp.flow_label);
 FUNC_0(VAR_1, VAR_0, "ttl=%x\n",
     VAR_2->tcp.ttl);
 FUNC_0(VAR_1, VAR_0, "tos_or_tc=%x\n",
     VAR_2->tcp.tos_or_tc);
 FUNC_0(VAR_1, VAR_0, "local_port=%x\n",
     VAR_2->tcp.local_port);
 FUNC_0(VAR_1, VAR_0, "remote_port=%x\n",
     VAR_2->tcp.remote_port);
 FUNC_0(VAR_1, VAR_0, "mss=%x\n",
     VAR_2->tcp.mss);
 FUNC_0(VAR_1, VAR_0, "rcv_wnd_scale=%x\n",
     VAR_2->tcp.rcv_wnd_scale);
 FUNC_0(VAR_1, VAR_0, "connect_mode=%x\n",
     VAR_2->tcp.connect_mode);
 FUNC_0(VAR_1, VAR_0, "syn_ip_payload_length=%x\n",
     VAR_2->tcp.syn_ip_payload_length);
 FUNC_0(VAR_1, VAR_0, "syn_phy_addr_lo=%x\n",
     VAR_2->tcp.syn_phy_addr_lo);
 FUNC_0(VAR_1, VAR_0, "syn_phy_addr_hi=%x\n",
     VAR_2->tcp.syn_phy_addr_hi);

 FUNC_0(VAR_1, VAR_0, "<<<f  PRINT TCP RAMROD\n");
}
