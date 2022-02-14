
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skb_frag_struct {int size; int page_offset; } ;
struct sk_buff {int len; int data_len; int truesize; int tail; int protocol; int csum; int ip_summed; int data; } ;
struct net_lro_mgr {int dev; int frag_align_pad; } ;
typedef int __wsum ;
struct TYPE_2__ {struct skb_frag_struct* frags; int nr_frags; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int,int) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct net_lro_mgr *VAR_0,
       struct skb_frag_struct *VAR_1,
       int VAR_2, int VAR_3,
       void *VAR_4,
       int VAR_5, __wsum VAR_6,
       u32 VAR_7)
{
 struct sk_buff *VAR_8;
 struct skb_frag_struct *VAR_9;
 int VAR_10 = VAR_2;
 int VAR_11 = FUNC_2(VAR_2, VAR_5);

 VAR_8 = FUNC_3(VAR_0->dev, VAR_5 + VAR_0->frag_align_pad);
 if (!VAR_8)
  return ((void*)0);

 FUNC_4(VAR_8, VAR_0->frag_align_pad);
 VAR_8->len = VAR_2;
 VAR_8->data_len = VAR_2 - VAR_11;
 VAR_8->truesize += VAR_3;
 VAR_8->tail += VAR_11;

 FUNC_1(VAR_8->data, VAR_4, VAR_11);

 VAR_9 = FUNC_5(VAR_8)->frags;
 while (VAR_10 > 0) {
  *VAR_9 = *VAR_1;
  VAR_10 -= VAR_1->size;
  VAR_9++;
  VAR_1++;
  FUNC_5(VAR_8)->nr_frags++;
 }

 FUNC_5(VAR_8)->frags[0].page_offset += VAR_11;
 FUNC_5(VAR_8)->frags[0].size -= VAR_11;

 VAR_8->ip_summed = VAR_7;
 VAR_8->csum = VAR_6;
 VAR_8->protocol = FUNC_0(VAR_8, VAR_0->dev);
 return VAR_8;
}
