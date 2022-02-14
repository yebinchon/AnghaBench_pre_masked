
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_frag_struct {int page_offset; int size; int page; } ;
struct sk_buff {int len; int data_len; int truesize; void* ip_summed; } ;
struct TYPE_2__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct sk_buff *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct skb_frag_struct *VAR_9, *VAR_10;

 FUNC_0(VAR_4 > VAR_3->len);
 FUNC_0(FUNC_4(VAR_3));

 VAR_8 = VAR_4;
 VAR_5 = 0;
 VAR_6 = FUNC_6(VAR_2)->nr_frags;
 VAR_9 = &FUNC_6(VAR_3)->frags[VAR_5];




 if (!VAR_6 ||
     !FUNC_3(VAR_2, VAR_6, VAR_9->page, VAR_9->page_offset)) {
  VAR_7 = -1;
 } else {
  VAR_7 = VAR_6 - 1;

  VAR_8 -= VAR_9->size;
  if (VAR_8 < 0) {
   if (FUNC_5(VAR_3) ||
       FUNC_5(VAR_2))
    return 0;


   VAR_9 = &FUNC_6(VAR_3)->frags[VAR_5];
   VAR_10 = &FUNC_6(VAR_2)->frags[VAR_7];

   VAR_10->size += VAR_4;
   VAR_9->size -= VAR_4;
   VAR_9->page_offset += VAR_4;

   goto onlymerged;
  }

  VAR_5++;
 }


 if ((VAR_4 == VAR_3->len) &&
     (FUNC_6(VAR_3)->nr_frags - VAR_5) > (VAR_1 - VAR_6))
  return 0;

 if (FUNC_5(VAR_3) || FUNC_5(VAR_2))
  return 0;

 while ((VAR_8 > 0) && (VAR_5 < FUNC_6(VAR_3)->nr_frags)) {
  if (VAR_6 == VAR_1)
   return 0;

  VAR_9 = &FUNC_6(VAR_3)->frags[VAR_5];
  VAR_10 = &FUNC_6(VAR_2)->frags[VAR_6];

  if (VAR_8 >= VAR_9->size) {
   *VAR_10 = *VAR_9;
   VAR_8 -= VAR_9->size;
   VAR_5++;
   VAR_6++;

  } else {
   FUNC_1(VAR_9->page);
   VAR_10->page = VAR_9->page;
   VAR_10->page_offset = VAR_9->page_offset;
   VAR_10->size = VAR_8;

   VAR_9->page_offset += VAR_8;
   VAR_9->size -= VAR_8;
   VAR_8 = 0;

   VAR_6++;
   break;
  }
 }


 FUNC_6(VAR_2)->nr_frags = VAR_6;

 if (VAR_7 >= 0) {
  VAR_9 = &FUNC_6(VAR_3)->frags[0];
  VAR_10 = &FUNC_6(VAR_2)->frags[VAR_7];

  VAR_10->size += VAR_9->size;
  FUNC_2(VAR_9->page);
 }


 VAR_6 = 0;
 while (VAR_5 < FUNC_6(VAR_3)->nr_frags)
  FUNC_6(VAR_3)->frags[VAR_6++] = FUNC_6(VAR_3)->frags[VAR_5++];
 FUNC_6(VAR_3)->nr_frags = VAR_6;

 FUNC_0(VAR_8 > 0 && !FUNC_6(VAR_3)->nr_frags);

onlymerged:



 VAR_2->ip_summed = VAR_0;
 VAR_3->ip_summed = VAR_0;


 VAR_3->len -= VAR_4;
 VAR_3->data_len -= VAR_4;
 VAR_3->truesize -= VAR_4;
 VAR_2->len += VAR_4;
 VAR_2->data_len += VAR_4;
 VAR_2->truesize += VAR_4;

 return VAR_4;
}
