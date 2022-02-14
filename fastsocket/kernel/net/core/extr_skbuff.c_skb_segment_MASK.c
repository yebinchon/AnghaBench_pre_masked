
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned int data; unsigned int len; int head; unsigned int truesize; scalar_t__ ip_summed; unsigned int data_len; struct sk_buff* next; int csum; scalar_t__ network_header; scalar_t__ transport_header; int mac_len; int csum_start; } ;
struct TYPE_4__ {int size; unsigned int page_offset; int page; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int __be16 ;
struct TYPE_6__ {unsigned int gso_size; int nr_frags; struct sk_buff* frag_list; TYPE_1__* frags; } ;
struct TYPE_5__ {int shared_frag; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,unsigned int,int,int ) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_13 (struct sk_buff*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_14 (struct sk_buff*,unsigned int) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 unsigned int FUNC_17 (struct sk_buff*) ;
 unsigned int FUNC_18 (struct sk_buff*) ;
 unsigned int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 unsigned int FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,unsigned int) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_27 (struct sk_buff*) ;
 unsigned int FUNC_28 (struct sk_buff*) ;
 TYPE_2__* FUNC_29 (struct sk_buff*) ;
 scalar_t__ FUNC_30 (int) ;

struct sk_buff *FUNC_31(struct sk_buff *VAR_6, int VAR_7)
{
 struct sk_buff *VAR_8 = ((void*)0);
 struct sk_buff *VAR_9 = ((void*)0);
 struct sk_buff *VAR_10 = FUNC_27(VAR_6)->frag_list;
 unsigned int VAR_11 = FUNC_27(VAR_6)->gso_size;
 unsigned int VAR_12 = VAR_6->data - FUNC_19(VAR_6);
 unsigned int VAR_13 = VAR_12;
 unsigned int VAR_14 = FUNC_28(VAR_6);
 unsigned int VAR_15;
 unsigned int VAR_16;
 __be16 VAR_17;
 bool VAR_18;
 int VAR_19 = !!(VAR_7 & VAR_5);
 int VAR_20 = FUNC_27(VAR_6)->nr_frags;
 int VAR_21 = -VAR_3;
 int VAR_22 = 0;
 int VAR_23;

 VAR_17 = FUNC_21(VAR_6);
 if (FUNC_30(!VAR_17))
  return FUNC_1(-VAR_2);

 VAR_18 = !!FUNC_7(VAR_7, VAR_17);
 FUNC_4(VAR_6, VAR_12);
 VAR_15 = FUNC_18(VAR_6);
 VAR_23 = FUNC_17(VAR_6);

 do {
  struct sk_buff *VAR_24;
  skb_frag_t *VAR_25;
  int VAR_26;
  int VAR_27;

  VAR_16 = VAR_6->len - VAR_13;
  if (VAR_16 > VAR_11)
   VAR_16 = VAR_11;

  VAR_26 = FUNC_17(VAR_6) - VAR_13;
  if (VAR_26 < 0)
   VAR_26 = 0;
  if (VAR_26 > VAR_16 || !VAR_19)
   VAR_26 = VAR_16;

  if (!VAR_26 && VAR_22 >= VAR_20) {
   FUNC_0(VAR_10->len != VAR_16);

   VAR_23 += VAR_16;
   VAR_24 = FUNC_11(VAR_10, VAR_4);
   VAR_10 = VAR_10->next;

   if (FUNC_30(!VAR_24))
    goto err;

   VAR_26 = FUNC_15(VAR_24) - VAR_24->head;
   if (FUNC_14(VAR_24, VAR_12 + VAR_15)) {
    FUNC_9(VAR_24);
    goto err;
   }

   VAR_24->truesize += FUNC_15(VAR_24) - VAR_24->head -
       VAR_26;
   FUNC_23(VAR_24);
   FUNC_4(VAR_24, VAR_12);
  } else {
   VAR_24 = FUNC_6(VAR_26 + VAR_12 + VAR_15,
      VAR_4);

   if (FUNC_30(!VAR_24))
    goto err;

   FUNC_24(VAR_24, VAR_15);
   FUNC_5(VAR_24, VAR_12);
  }

  if (VAR_8)
   VAR_9->next = VAR_24;
  else
   VAR_8 = VAR_24;
  VAR_9 = VAR_24;

  FUNC_3(VAR_24, VAR_6);
  VAR_24->mac_len = VAR_6->mac_len;


  if (VAR_24->ip_summed == VAR_1)
   VAR_24->csum_start += FUNC_18(VAR_24) - VAR_15;

  FUNC_25(VAR_24);
  FUNC_26(VAR_24, VAR_6->mac_len);
  VAR_24->transport_header = (VAR_24->network_header +
       FUNC_20(VAR_6));

  FUNC_13(VAR_6, -VAR_14,
       VAR_24->data - VAR_14,
       VAR_12 + VAR_14);

  if (VAR_10 != FUNC_27(VAR_6)->frag_list)
   goto perform_csum_check;

  if (!VAR_19) {
   VAR_24->ip_summed = VAR_0;
   VAR_24->csum = FUNC_12(VAR_6, VAR_13,
           FUNC_22(VAR_24, VAR_16),
           VAR_16, 0);
   continue;
  }

  VAR_25 = FUNC_27(VAR_24)->frags;

  FUNC_13(VAR_6, VAR_13,
       FUNC_22(VAR_24, VAR_26), VAR_26);

  FUNC_29(VAR_24)->shared_frag = FUNC_29(VAR_6)->shared_frag;

  while (VAR_23 < VAR_13 + VAR_16 && VAR_22 < VAR_20) {
   *VAR_25 = FUNC_27(VAR_6)->frags[VAR_22];
   FUNC_8(VAR_25->page);
   VAR_27 = VAR_25->size;

   if (VAR_23 < VAR_13) {
    VAR_25->page_offset += VAR_13 - VAR_23;
    VAR_25->size -= VAR_13 - VAR_23;
   }

   FUNC_27(VAR_24)->nr_frags++;

   if (VAR_23 + VAR_27 <= VAR_13 + VAR_16) {
    VAR_22++;
    VAR_23 += VAR_27;
   } else {
    VAR_25->size -= VAR_23 + VAR_27 - (VAR_13 + VAR_16);
    goto skip_fraglist;
   }

   VAR_25++;
  }

  if (VAR_23 < VAR_13 + VAR_16) {
   struct sk_buff *VAR_28 = VAR_10;

   FUNC_0(VAR_23 + VAR_10->len != VAR_13 + VAR_16);

   VAR_23 += VAR_10->len;
   VAR_10 = VAR_10->next;

   if (VAR_28->next) {
    VAR_28 = FUNC_11(VAR_28, VAR_4);
    if (!VAR_28)
     goto err;
   } else
    FUNC_16(VAR_28);

   FUNC_2(VAR_24);
   FUNC_27(VAR_24)->frag_list = VAR_28;
  }

skip_fraglist:
  VAR_24->data_len = VAR_16 - VAR_26;
  VAR_24->len += VAR_24->data_len;
  VAR_24->truesize += VAR_24->data_len;

perform_csum_check:
  if (!VAR_18) {
   VAR_24->csum = FUNC_10(VAR_24, VAR_12,
        VAR_24->len - VAR_12, 0);
   VAR_24->ip_summed = VAR_0;
  }
 } while ((VAR_13 += VAR_16) < VAR_6->len);

 return VAR_8;

err:
 while ((VAR_6 = VAR_8)) {
  VAR_8 = VAR_6->next;
  FUNC_9(VAR_6);
 }
 return FUNC_1(VAR_21);
}
