
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct skb_frag_struct {int page_offset; int size; } ;
struct sk_buff {int truesize; } ;
struct net_lro_desc {struct skb_frag_struct* next_frag; struct sk_buff* parent; } ;
struct iphdr {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (struct iphdr*,struct tcphdr*) ;
 int FUNC_1 (struct net_lro_desc*,struct iphdr*,struct tcphdr*,int) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct net_lro_desc *VAR_0,
     int VAR_1, int VAR_2, int VAR_3,
     struct skb_frag_struct *VAR_4,
     struct iphdr *VAR_5, struct tcphdr *VAR_6)
{
 struct sk_buff *VAR_7 = VAR_0->parent;
 int VAR_8 = FUNC_0(VAR_5, VAR_6);

 FUNC_1(VAR_0, VAR_5, VAR_6, VAR_8);

 VAR_7->truesize += VAR_3;

 VAR_4[0].page_offset += VAR_2;
 VAR_4[0].size -= VAR_2;

 while (VAR_8 > 0) {
  *(VAR_0->next_frag) = *VAR_4;
  VAR_8 -= VAR_4->size;
  VAR_0->next_frag++;
  VAR_4++;
  FUNC_2(VAR_7)->nr_frags++;
 }
}
