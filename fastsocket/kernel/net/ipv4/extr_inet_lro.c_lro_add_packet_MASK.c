
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct sk_buff {struct sk_buff* next; scalar_t__ truesize; scalar_t__ len; } ;
struct net_lro_desc {struct sk_buff* last_skb; struct sk_buff* parent; } ;
struct iphdr {int dummy; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 int FUNC_0 (struct iphdr*,struct tcphdr*) ;
 int FUNC_1 (struct net_lro_desc*,struct iphdr*,struct tcphdr*,int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct net_lro_desc *VAR_0, struct sk_buff *VAR_1,
      struct iphdr *VAR_2, struct tcphdr *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_0->parent;
 int VAR_5 = FUNC_0(VAR_2, VAR_3);

 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_5);

 FUNC_2(VAR_1, (VAR_1->len - VAR_5));
 VAR_4->truesize += VAR_1->truesize;

 if (VAR_0->last_skb)
  VAR_0->last_skb->next = VAR_1;
 else
  FUNC_3(VAR_4)->frag_list = VAR_1;

 VAR_0->last_skb = VAR_1;
}
