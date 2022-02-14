
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


struct TYPE_23__ {int * tll; int * sll; int target; } ;
struct TYPE_22__ {int dst; int src; } ;
struct TYPE_16__ {int dst; int src; } ;
struct TYPE_24__ {TYPE_8__ nd; TYPE_7__ tp; int label; TYPE_1__ addr; } ;
struct TYPE_21__ {scalar_t__ proto; scalar_t__ frag; int ttl; int tos; } ;
struct TYPE_14__ {scalar_t__ type; scalar_t__ tci; int * dst; int * src; } ;
struct TYPE_19__ {int dst; int src; } ;
struct TYPE_18__ {int * tha; int * sha; } ;
struct TYPE_17__ {int dst; int src; } ;
struct TYPE_20__ {TYPE_4__ tp; TYPE_3__ arp; TYPE_2__ addr; } ;
struct TYPE_13__ {scalar_t__ priority; scalar_t__ in_port; scalar_t__ skb_mark; } ;
struct TYPE_15__ {scalar_t__ ipv4_dst; } ;
struct sw_flow_key {TYPE_9__ ipv6; TYPE_6__ ip; TYPE_11__ eth; TYPE_5__ ipv4; TYPE_10__ phy; TYPE_12__ tun_key; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_udp {int udp_dst; int udp_src; } ;
struct ovs_key_tcp {int tcp_dst; int tcp_src; } ;
struct ovs_key_nd {int nd_tll; int nd_sll; int nd_target; } ;
struct ovs_key_ipv6 {scalar_t__ ipv6_proto; scalar_t__ ipv6_frag; int ipv6_hlimit; int ipv6_tclass; int ipv6_label; int ipv6_dst; int ipv6_src; } ;
struct ovs_key_ipv4 {scalar_t__ ipv4_proto; scalar_t__ ipv4_frag; int ipv4_ttl; int ipv4_tos; int ipv4_dst; int ipv4_src; } ;
struct ovs_key_icmpv6 {scalar_t__ icmpv6_type; void* icmpv6_code; } ;
struct ovs_key_icmp {void* icmp_code; void* icmp_type; } ;
struct ovs_key_ethernet {int eth_dst; int eth_src; } ;
struct ovs_key_arp {int arp_tha; int arp_sha; scalar_t__ arp_op; int arp_tip; int arp_sip; } ;
struct nlattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct ovs_key_arp*,int ,int) ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ,int) ;
 void* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,TYPE_12__*) ;

int FUNC_11(const struct sw_flow_key *VAR_31, struct sk_buff *VAR_32)
{
 struct ovs_key_ethernet *VAR_33;
 struct nlattr *VAR_34, *VAR_35;

 if (VAR_31->phy.priority &&
     FUNC_7(VAR_32, VAR_26, VAR_31->phy.priority))
  goto nla_put_failure;

 if (VAR_31->tun_key.ipv4_dst &&
     FUNC_10(VAR_32, &VAR_31->tun_key))
  goto nla_put_failure;

 if (VAR_31->phy.in_port != VAR_0 &&
     FUNC_7(VAR_32, VAR_22, VAR_31->phy.in_port))
  goto nla_put_failure;

 if (VAR_31->phy.skb_mark &&
     FUNC_7(VAR_32, VAR_27, VAR_31->phy.skb_mark))
  goto nla_put_failure;

 VAR_34 = FUNC_8(VAR_32, VAR_18, sizeof(*VAR_33));
 if (!VAR_34)
  goto nla_put_failure;
 VAR_33 = FUNC_3(VAR_34);
 FUNC_1(VAR_33->eth_src, VAR_31->eth.src, VAR_2);
 FUNC_1(VAR_33->eth_dst, VAR_31->eth.dst, VAR_2);

 if (VAR_31->eth.tci || VAR_31->eth.type == FUNC_0(VAR_3)) {
  if (FUNC_6(VAR_32, VAR_19, FUNC_0(VAR_3)) ||
      FUNC_6(VAR_32, VAR_30, VAR_31->eth.tci))
   goto nla_put_failure;
  VAR_35 = FUNC_5(VAR_32, VAR_17);
  if (!VAR_31->eth.tci)
   goto unencap;
 } else {
  VAR_35 = ((void*)0);
 }

 if (VAR_31->eth.type == FUNC_0(VAR_4))
  goto unencap;

 if (FUNC_6(VAR_32, VAR_19, VAR_31->eth.type))
  goto nla_put_failure;

 if (VAR_31->eth.type == FUNC_0(VAR_6)) {
  struct ovs_key_ipv4 *VAR_36;

  VAR_34 = FUNC_8(VAR_32, VAR_23, sizeof(*VAR_36));
  if (!VAR_34)
   goto nla_put_failure;
  VAR_36 = FUNC_3(VAR_34);
  VAR_36->ipv4_src = VAR_31->ipv4.addr.src;
  VAR_36->ipv4_dst = VAR_31->ipv4.addr.dst;
  VAR_36->ipv4_proto = VAR_31->ip.proto;
  VAR_36->ipv4_tos = VAR_31->ip.tos;
  VAR_36->ipv4_ttl = VAR_31->ip.ttl;
  VAR_36->ipv4_frag = VAR_31->ip.frag;
 } else if (VAR_31->eth.type == FUNC_0(VAR_7)) {
  struct ovs_key_ipv6 *VAR_37;

  VAR_34 = FUNC_8(VAR_32, VAR_24, sizeof(*VAR_37));
  if (!VAR_34)
   goto nla_put_failure;
  VAR_37 = FUNC_3(VAR_34);
  FUNC_1(VAR_37->ipv6_src, &VAR_31->ipv6.addr.src,
    sizeof(VAR_37->ipv6_src));
  FUNC_1(VAR_37->ipv6_dst, &VAR_31->ipv6.addr.dst,
    sizeof(VAR_37->ipv6_dst));
  VAR_37->ipv6_label = VAR_31->ipv6.label;
  VAR_37->ipv6_proto = VAR_31->ip.proto;
  VAR_37->ipv6_tclass = VAR_31->ip.tos;
  VAR_37->ipv6_hlimit = VAR_31->ip.ttl;
  VAR_37->ipv6_frag = VAR_31->ip.frag;
 } else if (VAR_31->eth.type == FUNC_0(VAR_5) ||
     VAR_31->eth.type == FUNC_0(VAR_8)) {
  struct ovs_key_arp *VAR_38;

  VAR_34 = FUNC_8(VAR_32, VAR_16, sizeof(*VAR_38));
  if (!VAR_34)
   goto nla_put_failure;
  VAR_38 = FUNC_3(VAR_34);
  FUNC_2(VAR_38, 0, sizeof(struct ovs_key_arp));
  VAR_38->arp_sip = VAR_31->ipv4.addr.src;
  VAR_38->arp_tip = VAR_31->ipv4.addr.dst;
  VAR_38->arp_op = FUNC_0(VAR_31->ip.proto);
  FUNC_1(VAR_38->arp_sha, VAR_31->ipv4.arp.sha, VAR_2);
  FUNC_1(VAR_38->arp_tha, VAR_31->ipv4.arp.tha, VAR_2);
 }

 if ((VAR_31->eth.type == FUNC_0(VAR_6) ||
      VAR_31->eth.type == FUNC_0(VAR_7)) &&
      VAR_31->ip.frag != VAR_15) {

  if (VAR_31->ip.proto == VAR_11) {
   struct ovs_key_tcp *VAR_39;

   VAR_34 = FUNC_8(VAR_32, VAR_28, sizeof(*VAR_39));
   if (!VAR_34)
    goto nla_put_failure;
   VAR_39 = FUNC_3(VAR_34);
   if (VAR_31->eth.type == FUNC_0(VAR_6)) {
    VAR_39->tcp_src = VAR_31->ipv4.tp.src;
    VAR_39->tcp_dst = VAR_31->ipv4.tp.dst;
   } else if (VAR_31->eth.type == FUNC_0(VAR_7)) {
    VAR_39->tcp_src = VAR_31->ipv6.tp.src;
    VAR_39->tcp_dst = VAR_31->ipv6.tp.dst;
   }
  } else if (VAR_31->ip.proto == VAR_12) {
   struct ovs_key_udp *VAR_40;

   VAR_34 = FUNC_8(VAR_32, VAR_29, sizeof(*VAR_40));
   if (!VAR_34)
    goto nla_put_failure;
   VAR_40 = FUNC_3(VAR_34);
   if (VAR_31->eth.type == FUNC_0(VAR_6)) {
    VAR_40->udp_src = VAR_31->ipv4.tp.src;
    VAR_40->udp_dst = VAR_31->ipv4.tp.dst;
   } else if (VAR_31->eth.type == FUNC_0(VAR_7)) {
    VAR_40->udp_src = VAR_31->ipv6.tp.src;
    VAR_40->udp_dst = VAR_31->ipv6.tp.dst;
   }
  } else if (VAR_31->eth.type == FUNC_0(VAR_6) &&
      VAR_31->ip.proto == VAR_9) {
   struct ovs_key_icmp *VAR_41;

   VAR_34 = FUNC_8(VAR_32, VAR_20, sizeof(*VAR_41));
   if (!VAR_34)
    goto nla_put_failure;
   VAR_41 = FUNC_3(VAR_34);
   VAR_41->icmp_type = FUNC_9(VAR_31->ipv4.tp.src);
   VAR_41->icmp_code = FUNC_9(VAR_31->ipv4.tp.dst);
  } else if (VAR_31->eth.type == FUNC_0(VAR_7) &&
      VAR_31->ip.proto == VAR_10) {
   struct ovs_key_icmpv6 *VAR_42;

   VAR_34 = FUNC_8(VAR_32, VAR_21,
      sizeof(*VAR_42));
   if (!VAR_34)
    goto nla_put_failure;
   VAR_42 = FUNC_3(VAR_34);
   VAR_42->icmpv6_type = FUNC_9(VAR_31->ipv6.tp.src);
   VAR_42->icmpv6_code = FUNC_9(VAR_31->ipv6.tp.dst);

   if (VAR_42->icmpv6_type == VAR_14 ||
       VAR_42->icmpv6_type == VAR_13) {
    struct ovs_key_nd *VAR_43;

    VAR_34 = FUNC_8(VAR_32, VAR_25, sizeof(*VAR_43));
    if (!VAR_34)
     goto nla_put_failure;
    VAR_43 = FUNC_3(VAR_34);
    FUNC_1(VAR_43->nd_target, &VAR_31->ipv6.nd.target,
       sizeof(VAR_43->nd_target));
    FUNC_1(VAR_43->nd_sll, VAR_31->ipv6.nd.sll, VAR_2);
    FUNC_1(VAR_43->nd_tll, VAR_31->ipv6.nd.tll, VAR_2);
   }
  }
 }

unencap:
 if (VAR_35)
  FUNC_4(VAR_32, VAR_35);

 return 0;

nla_put_failure:
 return -VAR_1;
}
