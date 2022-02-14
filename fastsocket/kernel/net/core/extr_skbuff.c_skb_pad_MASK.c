
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data_len; int end; int tail; scalar_t__ len; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct sk_buff *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;


 if (!FUNC_4(VAR_1) && FUNC_6(VAR_1) >= VAR_2) {
  FUNC_2(VAR_1->data+VAR_1->len, 0, VAR_2);
  return 0;
 }

 VAR_4 = VAR_1->data_len + VAR_2 - (VAR_1->end - VAR_1->tail);
 if (FUNC_1(FUNC_4(VAR_1) || VAR_4 > 0)) {
  VAR_3 = FUNC_3(VAR_1, 0, VAR_4, VAR_0);
  if (FUNC_7(VAR_3))
   goto free_skb;
 }




 VAR_3 = FUNC_5(VAR_1);
 if (FUNC_7(VAR_3))
  goto free_skb;

 FUNC_2(VAR_1->data + VAR_1->len, 0, VAR_2);
 return 0;

free_skb:
 FUNC_0(VAR_1);
 return VAR_3;
}
