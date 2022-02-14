
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u8 ;
struct tcphdr {int rst; int doff; int ack; scalar_t__ check; scalar_t__ urg_ptr; scalar_t__ window; scalar_t__ seq; scalar_t__ fin; scalar_t__ syn; scalar_t__ ack_seq; int source; int dest; } ;
struct sk_buff {int data; int len; } ;
struct net {int dummy; } ;
struct ipv6hdr {scalar_t__ nexthdr; int version; int daddr; int saddr; int hop_limit; } ;
struct flowi {int fl_ip_dport; int fl_ip_sport; int fl6_dst; int fl6_src; scalar_t__ proto; } ;
struct dst_entry {scalar_t__ header_len; scalar_t__ trailer_len; TYPE_1__* dev; scalar_t__ error; } ;
typedef int fl ;
struct TYPE_2__ {int hard_header_len; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int,scalar_t__,int ) ;
 int FUNC_3 (struct tcphdr*,int,int ) ;
 int FUNC_4 (struct dst_entry*,int ) ;
 int FUNC_5 (struct dst_entry*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 struct dst_entry* FUNC_8 (struct net*,int *,struct flowi*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 struct ipv6hdr* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__*,scalar_t__*) ;
 int FUNC_13 (struct flowi*,int ,int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct sk_buff*,struct flowi*) ;
 int FUNC_20 (struct sk_buff*,int,unsigned int,int ) ;
 scalar_t__ FUNC_21 (struct sk_buff*,int,struct tcphdr*,int) ;
 int FUNC_22 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_23 (struct sk_buff*,int) ;
 int FUNC_24 (struct sk_buff*,scalar_t__) ;
 int FUNC_25 (struct sk_buff*) ;
 scalar_t__ FUNC_26 (struct net*,struct dst_entry**,struct flowi*,int *,int ) ;

__attribute__((used)) static void FUNC_27(struct net *VAR_4, struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6;
 struct tcphdr VAR_7, *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11, VAR_12;
 const struct ipv6hdr *VAR_13 = FUNC_11(VAR_5);
 struct ipv6hdr *VAR_14;
 struct dst_entry *VAR_15 = ((void*)0);
 u8 VAR_16;
 struct flowi VAR_17;

 if ((!(FUNC_10(&VAR_13->saddr) & VAR_2)) ||
     (!(FUNC_10(&VAR_13->daddr) & VAR_2))) {
  FUNC_17("ip6t_REJECT: addr is not unicast.\n");
  return;
 }

 VAR_16 = VAR_13->nexthdr;
 VAR_11 = FUNC_12(VAR_5, ((u8*)(VAR_13+1) - VAR_5->data), &VAR_16);

 if ((VAR_11 < 0) || (VAR_11 > VAR_5->len)) {
  FUNC_17("ip6t_REJECT: Can't get TCP header.\n");
  return;
 }

 VAR_9 = VAR_5->len - VAR_11;


 if (VAR_16 != VAR_1 || VAR_9 < sizeof(struct tcphdr)) {
  FUNC_17("ip6t_REJECT: proto(%d) != IPPROTO_TCP, "
    "or too short. otcplen = %d\n",
    VAR_16, VAR_9);
  return;
 }

 if (FUNC_21(VAR_5, VAR_11, &VAR_7, sizeof(struct tcphdr)))
  FUNC_0();


 if (VAR_7.rst) {
  FUNC_17("ip6t_REJECT: RST is set\n");
  return;
 }


 if (FUNC_2(&VAR_13->saddr, &VAR_13->daddr, VAR_9, VAR_1,
       FUNC_20(VAR_5, VAR_11, VAR_9, 0))) {
  FUNC_17("ip6t_REJECT: TCP checksum is invalid\n");
  return;
 }

 FUNC_13(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.proto = VAR_1;
 FUNC_9(&VAR_17.fl6_src, &VAR_13->daddr);
 FUNC_9(&VAR_17.fl6_dst, &VAR_13->saddr);
 VAR_17.fl_ip_sport = VAR_7.dest;
 VAR_17.fl_ip_dport = VAR_7.source;
 FUNC_19(VAR_5, &VAR_17);
 VAR_15 = FUNC_8(VAR_4, ((void*)0), &VAR_17);
 if (VAR_15 == ((void*)0))
  return;
 if (VAR_15->error || FUNC_26(VAR_4, &VAR_15, &VAR_17, ((void*)0), 0))
  return;

 VAR_10 = (VAR_15->dev->hard_header_len + 15)&~15;
 VAR_6 = FUNC_1(VAR_10 + 15 + VAR_15->header_len + sizeof(struct ipv6hdr)
    + sizeof(struct tcphdr) + VAR_15->trailer_len,
    VAR_0);

 if (!VAR_6) {
  if (FUNC_14())
   FUNC_18("ip6t_REJECT: Can't alloc skb\n");
  FUNC_5(VAR_15);
  return;
 }

 FUNC_22(VAR_6, VAR_15);

 FUNC_24(VAR_6, VAR_10 + VAR_15->header_len);

 FUNC_23(VAR_6, sizeof(struct ipv6hdr));
 FUNC_25(VAR_6);
 VAR_14 = FUNC_11(VAR_6);
 VAR_14->version = 6;
 VAR_14->hop_limit = FUNC_4(VAR_15, VAR_3);
 VAR_14->nexthdr = VAR_1;
 FUNC_9(&VAR_14->saddr, &VAR_13->daddr);
 FUNC_9(&VAR_14->daddr, &VAR_13->saddr);

 VAR_8 = (struct tcphdr *)FUNC_23(VAR_6, sizeof(struct tcphdr));

 VAR_8->doff = sizeof(struct tcphdr)/4;
 VAR_8->source = VAR_7.dest;
 VAR_8->dest = VAR_7.source;

 if (VAR_7.ack) {
  VAR_12 = 0;
  VAR_8->seq = VAR_7.ack_seq;
  VAR_8->ack_seq = 0;
 } else {
  VAR_12 = 1;
  VAR_8->ack_seq = FUNC_6(FUNC_16(VAR_7.seq) + VAR_7.syn + VAR_7.fin
          + VAR_9 - (VAR_7.doff<<2));
  VAR_8->seq = 0;
 }


 ((u_int8_t *)VAR_8)[13] = 0;
 VAR_8->rst = 1;
 VAR_8->ack = VAR_12;
 VAR_8->window = 0;
 VAR_8->urg_ptr = 0;
 VAR_8->check = 0;


 VAR_8->check = FUNC_2(&FUNC_11(VAR_6)->saddr,
          &FUNC_11(VAR_6)->daddr,
          sizeof(struct tcphdr), VAR_1,
          FUNC_3(VAR_8,
         sizeof(struct tcphdr), 0));

 FUNC_15(VAR_6, VAR_5);

 FUNC_7(VAR_6);
}
