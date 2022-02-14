
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; unsigned int data_len; struct sk_buff* next; } ;
struct TYPE_4__ {int nr_frags; struct sk_buff* frag_list; TYPE_1__* frags; } ;
struct TYPE_3__ {int size; int page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff**) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 TYPE_2__* FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct sk_buff *VAR_2, unsigned int VAR_3)
{
 struct sk_buff **VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6 = FUNC_9(VAR_2);
 int VAR_7 = FUNC_12(VAR_2)->nr_frags;
 int VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_2) &&
     FUNC_13((VAR_9 = FUNC_1(VAR_2, 0, 0, VAR_1))))
  return VAR_9;

 VAR_8 = 0;
 if (VAR_6 >= VAR_3)
  goto drop_pages;

 for (; VAR_8 < VAR_7; VAR_8++) {
  int VAR_10 = VAR_6 + FUNC_12(VAR_2)->frags[VAR_8].size;

  if (VAR_10 < VAR_3) {
   VAR_6 = VAR_10;
   continue;
  }

  FUNC_12(VAR_2)->frags[VAR_8++].size = VAR_3 - VAR_6;

drop_pages:
  FUNC_12(VAR_2)->nr_frags = VAR_8;

  for (; VAR_8 < VAR_7; VAR_8++)
   FUNC_3(FUNC_12(VAR_2)->frags[VAR_8].page);

  if (FUNC_8(VAR_2))
   FUNC_6(VAR_2);
  goto done;
 }

 for (VAR_4 = &FUNC_12(VAR_2)->frag_list; (VAR_5 = *VAR_4);
      VAR_4 = &VAR_5->next) {
  int VAR_11 = VAR_6 + VAR_5->len;

  if (FUNC_11(VAR_5)) {
   struct sk_buff *VAR_12;

   VAR_12 = FUNC_4(VAR_5, VAR_1);
   if (FUNC_13(!VAR_12))
    return -VAR_0;

   VAR_12->next = VAR_5->next;
   FUNC_0(VAR_5);
   VAR_5 = VAR_12;
   *VAR_4 = VAR_5;
  }

  if (VAR_11 < VAR_3) {
   VAR_6 = VAR_11;
   continue;
  }

  if (VAR_11 > VAR_3 &&
      FUNC_13((VAR_9 = FUNC_2(VAR_5, VAR_3 - VAR_6))))
   return VAR_9;

  if (VAR_5->next)
   FUNC_7(&VAR_5->next);
  break;
 }

done:
 if (VAR_3 > FUNC_9(VAR_2)) {
  VAR_2->data_len -= VAR_2->len - VAR_3;
  VAR_2->len = VAR_3;
 } else {
  VAR_2->len = VAR_3;
  VAR_2->data_len = 0;
  FUNC_10(VAR_2, VAR_3);
 }

 return 0;
}
