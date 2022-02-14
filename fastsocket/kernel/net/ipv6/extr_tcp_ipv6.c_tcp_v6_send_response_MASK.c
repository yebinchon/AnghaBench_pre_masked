
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {unsigned int doff; int ack; int rst; int source; int fl_ip_sport; int dest; int fl_ip_dport; int oif; int proto; int fl6_dst; int fl6_src; int check; int window; void* ack_seq; void* seq; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int csum; } ;
struct TYPE_4__ {struct sock* tcp_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct ipv6hdr {int dummy; } ;
struct flowi {unsigned int doff; int ack; int rst; int source; int fl_ip_sport; int dest; int fl_ip_dport; int oif; int proto; int fl6_dst; int fl6_src; int check; int window; void* ack_seq; void* seq; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
typedef int __u8 ;
typedef int __be32 ;
struct TYPE_6__ {int daddr; int saddr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int *,unsigned int,int ,int ) ;
 int FUNC_3 (struct tcphdr*,unsigned int,int ) ;
 struct net* FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*,struct dst_entry**,struct tcphdr*) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct tcphdr*,int *,int ) ;
 int FUNC_10 (int *,int *) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct tcphdr*,int ,int) ;
 int FUNC_14 (struct sk_buff*,struct tcphdr*) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_17 (struct sk_buff*,unsigned int) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 (struct sk_buff*) ;
 struct tcphdr* FUNC_20 (struct sk_buff*) ;
 int VAR_12 ;
 int FUNC_21 (int *,struct tcp_md5sig_key*,int *,int *,struct tcphdr*) ;
 scalar_t__ FUNC_22 (struct net*,struct dst_entry**,struct tcphdr*,int *,int ) ;

__attribute__((used)) static void FUNC_23(struct sk_buff *VAR_13, u32 VAR_14, u32 VAR_15, u32 VAR_16,
     u32 VAR_17, struct tcp_md5sig_key *VAR_18, int VAR_19)
{
 struct tcphdr *VAR_20 = FUNC_20(VAR_13), *VAR_21;
 struct sk_buff *VAR_22;
 struct flowi VAR_23;
 struct net *VAR_24 = FUNC_4(FUNC_15(VAR_13)->dev);
 struct sock *VAR_25 = VAR_24->ipv6.tcp_sk;
 unsigned int VAR_26 = sizeof(struct tcphdr);
 struct dst_entry *VAR_27;
 __be32 *VAR_28;

 if (VAR_17)
  VAR_26 += VAR_6;





 VAR_22 = FUNC_1(VAR_2 + sizeof(struct ipv6hdr) + VAR_26,
    VAR_0);
 if (VAR_22 == ((void*)0))
  return;

 FUNC_18(VAR_22, VAR_2 + sizeof(struct ipv6hdr) + VAR_26);

 VAR_21 = (struct tcphdr *) FUNC_17(VAR_22, VAR_26);
 FUNC_19(VAR_22);


 FUNC_13(VAR_21, 0, sizeof(*VAR_21));
 VAR_21->dest = VAR_20->source;
 VAR_21->source = VAR_20->dest;
 VAR_21->doff = VAR_26 / 4;
 VAR_21->seq = FUNC_5(VAR_14);
 VAR_21->ack_seq = FUNC_5(VAR_15);
 VAR_21->ack = !VAR_19 || !VAR_20->ack;
 VAR_21->rst = VAR_19;
 VAR_21->window = FUNC_6(VAR_16);

 VAR_28 = (__be32 *)(VAR_21 + 1);

 if (VAR_17) {
  *VAR_28++ = FUNC_5((VAR_8 << 24) | (VAR_8 << 16) |
    (VAR_9 << 8) | VAR_5);
  *VAR_28++ = FUNC_5(VAR_12);
  *VAR_28++ = FUNC_5(VAR_17);
 }
 VAR_22->csum = FUNC_3(VAR_21, VAR_26, 0);

 FUNC_13(&VAR_23, 0, sizeof(VAR_23));
 FUNC_10(&VAR_23.fl6_dst, &FUNC_11(VAR_13)->saddr);
 FUNC_10(&VAR_23.fl6_src, &FUNC_11(VAR_13)->daddr);

 VAR_21->check = FUNC_2(&VAR_23.fl6_src, &VAR_23.fl6_dst,
        VAR_26, VAR_1,
        VAR_22->csum);

 VAR_23.proto = VAR_1;
 VAR_23.oif = FUNC_7(VAR_13);
 VAR_23.fl_ip_dport = VAR_21->dest;
 VAR_23.fl_ip_sport = VAR_21->source;
 FUNC_14(VAR_13, &VAR_23);





 if (!FUNC_8(VAR_25, &VAR_27, &VAR_23)) {
  if (FUNC_22(VAR_24, &VAR_27, &VAR_23, ((void*)0), 0) >= 0) {
   FUNC_16(VAR_22, VAR_27);
   FUNC_9(VAR_25, VAR_22, &VAR_23, ((void*)0), 0);
   FUNC_0(VAR_24, VAR_11);
   if (VAR_19)
    FUNC_0(VAR_24, VAR_10);
   return;
  }
 }

 FUNC_12(VAR_22);
}
