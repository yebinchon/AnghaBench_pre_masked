
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int rst; int doff; int ack; scalar_t__ syn; scalar_t__ fin; int check; int seq; int ack_seq; int source; int dest; } ;
struct sk_buff {scalar_t__ len; int ip_summed; } ;
struct iphdr {int frag_off; int version; int ihl; int ttl; int daddr; int saddr; scalar_t__ check; int protocol; scalar_t__ id; scalar_t__ tos; } ;
typedef int _otcph ;
struct TYPE_2__ {int rt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct tcphdr*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 struct iphdr* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct tcphdr*,int ,int) ;
 int FUNC_13 (struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 struct tcphdr* FUNC_18 (struct sk_buff*,scalar_t__,int,struct tcphdr*) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*,scalar_t__) ;
 int FUNC_21 (struct sk_buff*) ;
 TYPE_1__* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_24(struct sk_buff *VAR_10, int VAR_11)
{
 struct sk_buff *VAR_12;
 const struct iphdr *VAR_13;
 struct iphdr *VAR_14;
 const struct tcphdr *VAR_15;
 struct tcphdr VAR_16, *VAR_17;


 if (FUNC_7(VAR_10)->frag_off & FUNC_6(VAR_4))
  return;

 VAR_15 = FUNC_18(VAR_10, FUNC_8(VAR_10),
     sizeof(VAR_16), &VAR_16);
 if (VAR_15 == ((void*)0))
  return;


 if (VAR_15->rst)
  return;

 if (FUNC_22(VAR_10)->rt_flags & (VAR_7 | VAR_8))
  return;


 if (FUNC_14(VAR_10, VAR_11, FUNC_8(VAR_10), VAR_2))
  return;
 VAR_13 = FUNC_7(VAR_10);

 VAR_12 = FUNC_0(sizeof(struct iphdr) + sizeof(struct tcphdr) +
    VAR_5, VAR_1);
 if (!VAR_12)
  return;

 FUNC_20(VAR_12, VAR_5);

 FUNC_21(VAR_12);
 VAR_14 = (struct iphdr *)FUNC_19(VAR_12, sizeof(struct iphdr));
 VAR_14->version = 4;
 VAR_14->ihl = sizeof(struct iphdr) / 4;
 VAR_14->tos = 0;
 VAR_14->id = 0;
 VAR_14->frag_off = FUNC_6(VAR_3);
 VAR_14->protocol = VAR_2;
 VAR_14->check = 0;
 VAR_14->saddr = VAR_13->daddr;
 VAR_14->daddr = VAR_13->saddr;

 VAR_17 = (struct tcphdr *)FUNC_19(VAR_12, sizeof(struct tcphdr));
 FUNC_12(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->source = VAR_15->dest;
 VAR_17->dest = VAR_15->source;
 VAR_17->doff = sizeof(struct tcphdr) / 4;

 if (VAR_15->ack)
  VAR_17->seq = VAR_15->ack_seq;
 else {
  VAR_17->ack_seq = FUNC_5(FUNC_15(VAR_15->seq) + VAR_15->syn + VAR_15->fin +
          VAR_10->len - FUNC_8(VAR_10) -
          (VAR_15->doff << 2));
  VAR_17->ack = 1;
 }

 VAR_17->rst = 1;
 VAR_17->check = FUNC_23(sizeof(struct tcphdr),
           VAR_14->saddr, VAR_14->daddr,
           FUNC_1(VAR_17,
          sizeof(struct tcphdr), 0));


 FUNC_17(VAR_12, FUNC_2(FUNC_16(VAR_10)));

 if (FUNC_10(VAR_12, VAR_9))
  goto free_nskb;

 VAR_14->ttl = FUNC_3(FUNC_16(VAR_12), VAR_6);
 VAR_12->ip_summed = VAR_0;


 if (VAR_12->len > FUNC_4(FUNC_16(VAR_12)))
  goto free_nskb;

 FUNC_13(VAR_12, VAR_10);

 FUNC_9(VAR_12);
 return;

 free_nskb:
 FUNC_11(VAR_12);
}
