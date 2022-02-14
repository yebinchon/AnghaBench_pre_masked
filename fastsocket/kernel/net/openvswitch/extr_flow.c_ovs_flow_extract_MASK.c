
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u16 ;
struct udphdr {int source; int dest; } ;
struct tcphdr {int source; int dest; } ;
struct TYPE_26__ {scalar_t__ proto; scalar_t__ frag; int ttl; int tos; } ;
struct TYPE_20__ {int src; int dst; } ;
struct TYPE_21__ {TYPE_3__ tp; } ;
struct TYPE_23__ {int tci; int type; int * dst; int * src; } ;
struct TYPE_19__ {int * tha; int * sha; } ;
struct TYPE_24__ {int dst; int src; } ;
struct TYPE_18__ {int src; int dst; } ;
struct TYPE_25__ {TYPE_2__ arp; TYPE_7__ addr; TYPE_1__ tp; } ;
struct TYPE_22__ {int skb_mark; int in_port; int priority; } ;
struct sw_flow_key {TYPE_9__ ip; TYPE_4__ ipv6; TYPE_6__ eth; TYPE_8__ ipv4; TYPE_5__ phy; int tun_key; } ;
struct sk_buff {int network_header; int transport_header; scalar_t__ data; int vlan_tci; int mark; int priority; } ;
struct iphdr {scalar_t__ protocol; int frag_off; int ttl; int tos; int daddr; int saddr; } ;
struct icmphdr {int code; int type; } ;
struct ethhdr {int h_proto; scalar_t__ h_dest; scalar_t__ h_source; } ;
struct arp_eth_header {int ar_hrd; int ar_pro; int ar_hln; int ar_pln; scalar_t__ ar_tha; scalar_t__ ar_sha; scalar_t__ ar_tip; scalar_t__ ar_sip; int ar_op; } ;
typedef int __be16 ;
struct TYPE_17__ {scalar_t__ tun_key; } ;
struct TYPE_16__ {int arp; int tp; int addr; } ;
struct TYPE_15__ {int tp; } ;
struct TYPE_14__ {int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_13__* FUNC_0 (struct sk_buff*) ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct ethhdr* VAR_20 ;
 struct ethhdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 struct icmphdr* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 struct iphdr* FUNC_11 (struct sk_buff*) ;
 TYPE_12__ VAR_21 ;
 TYPE_11__ VAR_22 ;
 int FUNC_12 (int *,scalar_t__,int) ;
 int FUNC_13 (struct sw_flow_key*,int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,struct sw_flow_key*,int*,int) ;
 int FUNC_17 (struct sk_buff*,struct sw_flow_key*,int*) ;
 int FUNC_18 (struct sk_buff*,struct sw_flow_key*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 TYPE_10__* FUNC_23 (struct sk_buff*) ;
 struct tcphdr* FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 struct udphdr* FUNC_26 (struct sk_buff*) ;
 scalar_t__ FUNC_27 (struct sk_buff*) ;
 scalar_t__ FUNC_28 (int) ;
 scalar_t__ FUNC_29 (struct sk_buff*) ;

int FUNC_30(struct sk_buff *VAR_23, u16 VAR_24, struct sw_flow_key *VAR_25,
   int *VAR_26)
{
 int VAR_27 = 0;
 int VAR_28 = FUNC_1(VAR_20);
 struct ethhdr *VAR_29;

 FUNC_13(VAR_25, 0, sizeof(*VAR_25));

 VAR_25->phy.priority = VAR_23->priority;
 if (FUNC_0(VAR_23)->tun_key)
  FUNC_12(&VAR_25->tun_key, FUNC_0(VAR_23)->tun_key, sizeof(VAR_25->tun_key));
 VAR_25->phy.in_port = VAR_24;
 VAR_25->phy.skb_mark = VAR_23->mark;

 FUNC_21(VAR_23);




 VAR_29 = FUNC_6(VAR_23);
 FUNC_12(VAR_25->eth.src, VAR_29->h_source, VAR_3);
 FUNC_12(VAR_25->eth.dst, VAR_29->h_dest, VAR_3);

 FUNC_2(VAR_23, 2 * VAR_3);




 if (FUNC_29(VAR_23))
  VAR_25->eth.tci = FUNC_7(VAR_23->vlan_tci);
 else if (VAR_29->h_proto == FUNC_7(VAR_4))
  if (FUNC_28(FUNC_18(VAR_23, VAR_25)))
   return -VAR_2;

 VAR_25->eth.type = FUNC_15(VAR_23);
 if (FUNC_28(VAR_25->eth.type == FUNC_7(0)))
  return -VAR_2;

 FUNC_22(VAR_23);
 FUNC_3(VAR_23, VAR_23->data - FUNC_19(VAR_23));


 if (VAR_25->eth.type == FUNC_7(VAR_6)) {
  struct iphdr *VAR_30;
  __be16 VAR_31;

  VAR_28 = FUNC_1(VAR_21);

  VAR_27 = FUNC_5(VAR_23);
  if (FUNC_28(VAR_27)) {
   if (VAR_27 == -VAR_1) {
    VAR_23->transport_header = VAR_23->network_header;
    VAR_27 = 0;
   }
   goto out;
  }

  VAR_30 = FUNC_11(VAR_23);
  VAR_25->ipv4.addr.src = VAR_30->saddr;
  VAR_25->ipv4.addr.dst = VAR_30->daddr;

  VAR_25->ip.proto = VAR_30->protocol;
  VAR_25->ip.tos = VAR_30->tos;
  VAR_25->ip.ttl = VAR_30->ttl;

  VAR_31 = VAR_30->frag_off & FUNC_7(VAR_13);
  if (VAR_31) {
   VAR_25->ip.frag = VAR_18;
   goto out;
  }
  if (VAR_30->frag_off & FUNC_7(VAR_12) ||
    FUNC_23(VAR_23)->gso_type & VAR_19)
   VAR_25->ip.frag = VAR_17;


  if (VAR_25->ip.proto == VAR_10) {
   VAR_28 = FUNC_1(VAR_21);
   if (FUNC_25(VAR_23)) {
    struct tcphdr *VAR_32 = FUNC_24(VAR_23);
    VAR_25->ipv4.tp.src = VAR_32->source;
    VAR_25->ipv4.tp.dst = VAR_32->dest;
   }
  } else if (VAR_25->ip.proto == VAR_11) {
   VAR_28 = FUNC_1(VAR_21);
   if (FUNC_27(VAR_23)) {
    struct udphdr *VAR_33 = FUNC_26(VAR_23);
    VAR_25->ipv4.tp.src = VAR_33->source;
    VAR_25->ipv4.tp.dst = VAR_33->dest;
   }
  } else if (VAR_25->ip.proto == VAR_9) {
   VAR_28 = FUNC_1(VAR_21);
   if (FUNC_10(VAR_23)) {
    struct icmphdr *VAR_34 = FUNC_9(VAR_23);



    VAR_25->ipv4.tp.src = FUNC_7(VAR_34->type);
    VAR_25->ipv4.tp.dst = FUNC_7(VAR_34->code);
   }
  }

 } else if ((VAR_25->eth.type == FUNC_7(VAR_5) ||
     VAR_25->eth.type == FUNC_7(VAR_8)) && FUNC_4(VAR_23)) {
  struct arp_eth_header *VAR_35;

  VAR_35 = (struct arp_eth_header *)FUNC_20(VAR_23);

  if (VAR_35->ar_hrd == FUNC_7(VAR_0)
    && VAR_35->ar_pro == FUNC_7(VAR_6)
    && VAR_35->ar_hln == VAR_3
    && VAR_35->ar_pln == 4) {


   if (FUNC_14(VAR_35->ar_op) <= 0xff)
    VAR_25->ip.proto = FUNC_14(VAR_35->ar_op);
   FUNC_12(&VAR_25->ipv4.addr.src, VAR_35->ar_sip, sizeof(VAR_25->ipv4.addr.src));
   FUNC_12(&VAR_25->ipv4.addr.dst, VAR_35->ar_tip, sizeof(VAR_25->ipv4.addr.dst));
   FUNC_12(VAR_25->ipv4.arp.sha, VAR_35->ar_sha, VAR_3);
   FUNC_12(VAR_25->ipv4.arp.tha, VAR_35->ar_tha, VAR_3);
   VAR_28 = FUNC_1(VAR_21);
  }
 } else if (VAR_25->eth.type == FUNC_7(VAR_7)) {
  int VAR_36;

  VAR_36 = FUNC_17(VAR_23, VAR_25, &VAR_28);
  if (FUNC_28(VAR_36 < 0)) {
   if (VAR_36 == -VAR_1)
    VAR_23->transport_header = VAR_23->network_header;
   else
    VAR_27 = VAR_36;
   goto out;
  }

  if (VAR_25->ip.frag == VAR_18)
   goto out;
  if (FUNC_23(VAR_23)->gso_type & VAR_19)
   VAR_25->ip.frag = VAR_17;


  if (VAR_25->ip.proto == VAR_15) {
   VAR_28 = FUNC_1(VAR_22);
   if (FUNC_25(VAR_23)) {
    struct tcphdr *VAR_37 = FUNC_24(VAR_23);
    VAR_25->ipv6.tp.src = VAR_37->source;
    VAR_25->ipv6.tp.dst = VAR_37->dest;
   }
  } else if (VAR_25->ip.proto == VAR_16) {
   VAR_28 = FUNC_1(VAR_22);
   if (FUNC_27(VAR_23)) {
    struct udphdr *VAR_38 = FUNC_26(VAR_23);
    VAR_25->ipv6.tp.src = VAR_38->source;
    VAR_25->ipv6.tp.dst = VAR_38->dest;
   }
  } else if (VAR_25->ip.proto == VAR_14) {
   VAR_28 = FUNC_1(VAR_22);
   if (FUNC_8(VAR_23)) {
    VAR_27 = FUNC_16(VAR_23, VAR_25, &VAR_28, VAR_36);
    if (VAR_27 < 0)
     goto out;
   }
  }
 }

out:
 *VAR_26 = VAR_28;
 return VAR_27;
}
