
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_16__ {int * tha; int * sha; } ;
struct TYPE_14__ {int dst; int src; } ;
struct TYPE_17__ {TYPE_5__ arp; TYPE_3__ addr; } ;
struct TYPE_15__ {int proto; scalar_t__ frag; int ttl; int tos; } ;
struct TYPE_19__ {int tci; int type; int * dst; int * src; } ;
struct TYPE_12__ {int dst; int src; } ;
struct TYPE_13__ {TYPE_1__ addr; int label; } ;
struct TYPE_18__ {int in_port; void* skb_mark; void* priority; } ;
struct sw_flow_key {TYPE_6__ ipv4; TYPE_4__ ip; TYPE_8__ eth; TYPE_2__ ipv6; int tun_key; TYPE_7__ phy; } ;
struct ovs_key_ipv6 {scalar_t__ ipv6_frag; int ipv6_proto; int ipv6_dst; int ipv6_src; int ipv6_hlimit; int ipv6_tclass; int ipv6_label; } ;
struct ovs_key_ipv4 {scalar_t__ ipv4_frag; int ipv4_proto; int ipv4_dst; int ipv4_src; int ipv4_ttl; int ipv4_tos; } ;
struct ovs_key_ethernet {int eth_dst; int eth_src; } ;
struct ovs_key_arp {int arp_op; int arp_tha; int arp_sha; int arp_tip; int arp_sip; } ;
struct nlattr {int dummy; } ;
typedef int __be16 ;
struct TYPE_20__ {int label; } ;
struct TYPE_11__ {int arp; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int) ;
 TYPE_10__ VAR_25 ;
 int FUNC_2 (struct sw_flow_key*,int*,struct nlattr const**,int*) ;
 TYPE_9__ VAR_26 ;
 int FUNC_3 (struct sw_flow_key*,int*,struct nlattr const**,int*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct sw_flow_key*,int ,int) ;
 void* FUNC_6 (struct nlattr const*) ;
 int FUNC_7 (struct nlattr const*) ;
 void* FUNC_8 (struct nlattr const*) ;
 scalar_t__ FUNC_9 (struct nlattr const*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct nlattr const*,int *) ;
 int FUNC_12 (struct nlattr const*,struct nlattr const**,int*) ;

int FUNC_13(struct sw_flow_key *VAR_27, int *VAR_28,
        const struct nlattr *VAR_29)
{
 const struct nlattr *VAR_30[VAR_18 + 1];
 const struct ovs_key_ethernet *VAR_31;
 int VAR_32;
 u32 VAR_33;
 int VAR_34;

 FUNC_5(VAR_27, 0, sizeof(struct sw_flow_key));
 VAR_32 = FUNC_0(VAR_24);

 VAR_34 = FUNC_12(VAR_29, VAR_30, &VAR_33);
 if (VAR_34)
  return VAR_34;


 if (VAR_33 & (1 << VAR_19)) {
  VAR_27->phy.priority = FUNC_8(VAR_30[VAR_19]);
  VAR_33 &= ~(1 << VAR_19);
 }
 if (VAR_33 & (1 << VAR_15)) {
  u32 VAR_35 = FUNC_8(VAR_30[VAR_15]);
  if (VAR_35 >= VAR_0)
   return -VAR_1;
  VAR_27->phy.in_port = VAR_35;
  VAR_33 &= ~(1 << VAR_15);
 } else {
  VAR_27->phy.in_port = VAR_0;
 }
 if (VAR_33 & (1 << VAR_20)) {
  VAR_27->phy.skb_mark = FUNC_8(VAR_30[VAR_20]);
  VAR_33 &= ~(1 << VAR_20);
 }

 if (VAR_33 & (1 << VAR_21)) {
  VAR_34 = FUNC_11(VAR_30[VAR_21], &VAR_27->tun_key);
  if (VAR_34)
   return VAR_34;

  VAR_33 &= ~(1 << VAR_21);
 }


 if (!(VAR_33 & (1 << VAR_13)))
  return -VAR_1;
 VAR_33 &= ~(1 << VAR_13);

 VAR_31 = FUNC_6(VAR_30[VAR_13]);
 FUNC_4(VAR_27->eth.src, VAR_31->eth_src, VAR_2);
 FUNC_4(VAR_27->eth.dst, VAR_31->eth_dst, VAR_2);

 if (VAR_33 & (1u << VAR_14) &&
     FUNC_7(VAR_30[VAR_14]) == FUNC_1(VAR_3)) {
  const struct nlattr *VAR_36;
  __be16 VAR_37;

  if (VAR_33 != ((1 << VAR_22) |
         (1 << VAR_14) |
         (1 << VAR_12)))
   return -VAR_1;

  VAR_36 = VAR_30[VAR_12];
  VAR_37 = FUNC_7(VAR_30[VAR_22]);
  if (VAR_37 & FUNC_1(VAR_23)) {
   VAR_27->eth.tci = VAR_37;

   VAR_34 = FUNC_12(VAR_36, VAR_30, &VAR_33);
   if (VAR_34)
    return VAR_34;
  } else if (!VAR_37) {

   if (FUNC_9(VAR_36))
    return -VAR_1;

   VAR_27->eth.type = FUNC_1(VAR_3);
   *VAR_28 = VAR_32;
   return 0;
  } else {
   return -VAR_1;
  }
 }

 if (VAR_33 & (1 << VAR_14)) {
  VAR_27->eth.type = FUNC_7(VAR_30[VAR_14]);
  if (FUNC_10(VAR_27->eth.type) < 1536)
   return -VAR_1;
  VAR_33 &= ~(1 << VAR_14);
 } else {
  VAR_27->eth.type = FUNC_1(VAR_4);
 }

 if (VAR_27->eth.type == FUNC_1(VAR_6)) {
  const struct ovs_key_ipv4 *VAR_38;

  if (!(VAR_33 & (1 << VAR_16)))
   return -VAR_1;
  VAR_33 &= ~(1 << VAR_16);

  VAR_32 = FUNC_0(VAR_25);
  VAR_38 = FUNC_6(VAR_30[VAR_16]);
  if (VAR_38->ipv4_frag > VAR_10)
   return -VAR_1;
  VAR_27->ip.proto = VAR_38->ipv4_proto;
  VAR_27->ip.tos = VAR_38->ipv4_tos;
  VAR_27->ip.ttl = VAR_38->ipv4_ttl;
  VAR_27->ip.frag = VAR_38->ipv4_frag;
  VAR_27->ipv4.addr.src = VAR_38->ipv4_src;
  VAR_27->ipv4.addr.dst = VAR_38->ipv4_dst;

  if (VAR_27->ip.frag != VAR_9) {
   VAR_34 = FUNC_2(VAR_27, &VAR_32, VAR_30, &VAR_33);
   if (VAR_34)
    return VAR_34;
  }
 } else if (VAR_27->eth.type == FUNC_1(VAR_7)) {
  const struct ovs_key_ipv6 *VAR_39;

  if (!(VAR_33 & (1 << VAR_17)))
   return -VAR_1;
  VAR_33 &= ~(1 << VAR_17);

  VAR_32 = FUNC_0(VAR_26);
  VAR_39 = FUNC_6(VAR_30[VAR_17]);
  if (VAR_39->ipv6_frag > VAR_10)
   return -VAR_1;
  VAR_27->ipv6.label = VAR_39->ipv6_label;
  VAR_27->ip.proto = VAR_39->ipv6_proto;
  VAR_27->ip.tos = VAR_39->ipv6_tclass;
  VAR_27->ip.ttl = VAR_39->ipv6_hlimit;
  VAR_27->ip.frag = VAR_39->ipv6_frag;
  FUNC_4(&VAR_27->ipv6.addr.src, VAR_39->ipv6_src,
         sizeof(VAR_27->ipv6.addr.src));
  FUNC_4(&VAR_27->ipv6.addr.dst, VAR_39->ipv6_dst,
         sizeof(VAR_27->ipv6.addr.dst));

  if (VAR_27->ip.frag != VAR_9) {
   VAR_34 = FUNC_3(VAR_27, &VAR_32, VAR_30, &VAR_33);
   if (VAR_34)
    return VAR_34;
  }
 } else if (VAR_27->eth.type == FUNC_1(VAR_5) ||
     VAR_27->eth.type == FUNC_1(VAR_8)) {
  const struct ovs_key_arp *VAR_40;

  if (!(VAR_33 & (1 << VAR_11)))
   return -VAR_1;
  VAR_33 &= ~(1 << VAR_11);

  VAR_32 = FUNC_0(VAR_25);
  VAR_40 = FUNC_6(VAR_30[VAR_11]);
  VAR_27->ipv4.addr.src = VAR_40->arp_sip;
  VAR_27->ipv4.addr.dst = VAR_40->arp_tip;
  if (VAR_40->arp_op & FUNC_1(0xff00))
   return -VAR_1;
  VAR_27->ip.proto = FUNC_10(VAR_40->arp_op);
  FUNC_4(VAR_27->ipv4.arp.sha, VAR_40->arp_sha, VAR_2);
  FUNC_4(VAR_27->ipv4.arp.tha, VAR_40->arp_tha, VAR_2);
 }

 if (VAR_33)
  return -VAR_1;
 *VAR_28 = VAR_32;

 return 0;
}
