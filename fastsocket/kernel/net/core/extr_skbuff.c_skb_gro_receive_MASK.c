
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_shared_info {int nr_frags; unsigned int gso_size; TYPE_1__* frags; struct sk_buff* frag_list; } ;
struct sk_buff {unsigned int len; unsigned int truesize; unsigned int data_len; struct sk_buff* prev; struct sk_buff* next; scalar_t__ data; int mac_len; } ;
struct TYPE_3__ {unsigned int page_offset; unsigned int size; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_4__ {int free; int same_flow; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 unsigned int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,unsigned int) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 struct skb_shared_info* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (int) ;

int FUNC_20(struct sk_buff **VAR_4, struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6 = *VAR_4;
 struct sk_buff *VAR_7;
 struct skb_shared_info *VAR_8 = FUNC_17(VAR_5);
 struct skb_shared_info *VAR_9 = FUNC_17(VAR_6);
 unsigned int VAR_10;
 unsigned int VAR_11 = FUNC_6(VAR_5);
 unsigned int VAR_12 = FUNC_7(VAR_5);
 unsigned int VAR_13 = FUNC_9(VAR_5);

 if (VAR_6->len + VAR_11 >= 65536)
  return -VAR_0;

 if (VAR_9->frag_list)
  goto merge;
 else if (VAR_13 <= VAR_12) {
  skb_frag_t *VAR_14;
  skb_frag_t *VAR_15;
  int VAR_16 = VAR_8->nr_frags;
  int VAR_17 = VAR_9->nr_frags + VAR_16;

  VAR_12 -= VAR_13;

  if (VAR_17 > VAR_3)
   return -VAR_0;

  VAR_9->nr_frags = VAR_17;
  VAR_8->nr_frags = 0;

  VAR_14 = VAR_9->frags + VAR_17;
  VAR_15 = VAR_8->frags + VAR_16;
  do {
   *--VAR_14 = *--VAR_15;
  } while (--VAR_16);

  VAR_14->page_offset += VAR_12;
  VAR_14->size -= VAR_12;

  VAR_5->truesize -= VAR_5->data_len;
  VAR_5->len -= VAR_5->data_len;
  VAR_5->data_len = 0;

  FUNC_0(VAR_5)->free = 1;
  goto done;
 } else if (FUNC_6(VAR_6) != VAR_9->gso_size)
  return -VAR_0;

 VAR_10 = FUNC_10(VAR_6);
 VAR_7 = FUNC_4(VAR_10 + FUNC_7(VAR_6), VAR_2);
 if (FUNC_19(!VAR_7))
  return -VAR_1;

 FUNC_1(VAR_7, VAR_6);
 VAR_7->mac_len = VAR_6->mac_len;

 FUNC_13(VAR_7, VAR_10);
 FUNC_3(VAR_7, FUNC_7(VAR_6));

 FUNC_14(VAR_7, FUNC_11(VAR_6) - VAR_6->data);
 FUNC_15(VAR_7, FUNC_12(VAR_6));
 FUNC_16(VAR_7, FUNC_18(VAR_6));

 FUNC_2(VAR_6, FUNC_7(VAR_6));
 FUNC_5(FUNC_11(VAR_7), FUNC_11(VAR_6),
        VAR_6->data - FUNC_11(VAR_6));

 *FUNC_0(VAR_7) = *FUNC_0(VAR_6);
 FUNC_17(VAR_7)->frag_list = VAR_6;
 FUNC_17(VAR_7)->gso_size = VAR_9->gso_size;
 VAR_9->gso_size = 0;
 FUNC_8(VAR_6);
 VAR_7->prev = VAR_6;

 VAR_7->data_len += VAR_6->len;
 VAR_7->truesize += VAR_6->len;
 VAR_7->len += VAR_6->len;

 *VAR_4 = VAR_7;
 VAR_7->next = VAR_6->next;
 VAR_6->next = ((void*)0);

 VAR_6 = VAR_7;

merge:
 if (VAR_12 > VAR_13) {
  unsigned int VAR_18 = VAR_12 - VAR_13;

  VAR_8->frags[0].page_offset += VAR_18;
  VAR_8->frags[0].size -= VAR_18;
  VAR_5->data_len -= VAR_18;
  VAR_5->len -= VAR_18;
  VAR_12 = VAR_13;
 }

 FUNC_2(VAR_5, VAR_12);

 VAR_6->prev->next = VAR_5;
 VAR_6->prev = VAR_5;
 FUNC_8(VAR_5);

done:
 FUNC_0(VAR_6)->count++;
 VAR_6->data_len += VAR_11;
 VAR_6->truesize += VAR_11;
 VAR_6->len += VAR_11;

 FUNC_0(VAR_5)->same_flow = 1;
 return 0;
}
