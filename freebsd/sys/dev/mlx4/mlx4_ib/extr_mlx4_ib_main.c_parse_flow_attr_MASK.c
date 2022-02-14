
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int src_port; int dst_port; int dst_ip; int src_ip; int vlan_tag; int dst_mac; } ;
struct TYPE_24__ {int src_port; int dst_port; } ;
struct TYPE_14__ {TYPE_12__ mask; TYPE_9__ val; } ;
struct TYPE_21__ {int dst_ip; int src_ip; } ;
struct TYPE_23__ {TYPE_12__ mask; TYPE_6__ val; } ;
struct TYPE_19__ {TYPE_12__ mask; } ;
struct TYPE_16__ {int vlan_tag; int dst_mac; } ;
struct TYPE_18__ {TYPE_12__ mask; TYPE_1__ val; } ;
union ib_flow_spec {int type; TYPE_11__ tcp_udp; TYPE_8__ ipv4; TYPE_4__ ib; TYPE_3__ eth; } ;
typedef int u32 ;
struct mlx4_dev {int dummy; } ;
struct TYPE_13__ {int src_port_msk; int src_port; int dst_port_msk; int dst_port; } ;
struct TYPE_22__ {int dst_ip_msk; int dst_ip; int src_ip_msk; int src_ip; } ;
struct TYPE_20__ {void* qpn_mask; void* l3_qpn; } ;
struct TYPE_17__ {int vlan_tag_msk; int vlan_tag; int dst_mac_msk; int dst_mac; } ;
struct _rule_hw {int size; int id; TYPE_10__ tcp_udp; TYPE_7__ ipv4; TYPE_5__ ib; TYPE_2__ eth; } ;
typedef enum mlx4_net_trans_rule_id { ____Placeholder_mlx4_net_trans_rule_id } mlx4_net_trans_rule_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_12__,int ) ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,int) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_13,
      u32 VAR_14,
      union ib_flow_spec *VAR_15,
      struct _rule_hw *VAR_16)
{
 enum mlx4_net_trans_rule_id VAR_17;

 switch (VAR_15->type) {
 case 132:
  if (FUNC_0(VAR_15->eth.mask, VAR_3))
   return -VAR_1;

  VAR_17 = VAR_8;
  FUNC_3(VAR_16->eth.dst_mac, VAR_15->eth.val.dst_mac,
         VAR_2);
  FUNC_3(VAR_16->eth.dst_mac_msk, VAR_15->eth.mask.dst_mac,
         VAR_2);
  VAR_16->eth.vlan_tag = VAR_15->eth.val.vlan_tag;
  VAR_16->eth.vlan_tag_msk = VAR_15->eth.mask.vlan_tag;
  break;
 case 131:
  if (FUNC_0(VAR_15->ib.mask, VAR_4))
   return -VAR_1;

  VAR_17 = VAR_9;
  VAR_16->ib.l3_qpn =
   FUNC_2(VAR_14);
  VAR_16->ib.qpn_mask =
   FUNC_2(VAR_7);
  break;


 case 130:
  if (FUNC_0(VAR_15->ipv4.mask, VAR_5))
   return -VAR_1;

  VAR_17 = VAR_10;
  VAR_16->ipv4.src_ip = VAR_15->ipv4.val.src_ip;
  VAR_16->ipv4.src_ip_msk = VAR_15->ipv4.mask.src_ip;
  VAR_16->ipv4.dst_ip = VAR_15->ipv4.val.dst_ip;
  VAR_16->ipv4.dst_ip_msk = VAR_15->ipv4.mask.dst_ip;
  break;

 case 129:
 case 128:
  if (FUNC_0(VAR_15->tcp_udp.mask, VAR_6))
   return -VAR_1;

  VAR_17 = VAR_15->type == 129 ?
     VAR_11 :
     VAR_12;
  VAR_16->tcp_udp.dst_port = VAR_15->tcp_udp.val.dst_port;
  VAR_16->tcp_udp.dst_port_msk = VAR_15->tcp_udp.mask.dst_port;
  VAR_16->tcp_udp.src_port = VAR_15->tcp_udp.val.src_port;
  VAR_16->tcp_udp.src_port_msk = VAR_15->tcp_udp.mask.src_port;
  break;

 default:
  return -VAR_0;
 }
 if (FUNC_5(VAR_13, VAR_17) < 0 ||
     FUNC_4(VAR_13, VAR_17) < 0)
  return -VAR_0;
 VAR_16->id = FUNC_1(FUNC_5(VAR_13, VAR_17));
 VAR_16->size = FUNC_4(VAR_13, VAR_17) >> 2;
 return FUNC_4(VAR_13, VAR_17);
}
