
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ iif; int dev; } ;
struct napi_struct {struct sk_buff* skb; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;

void FUNC_4(struct napi_struct *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(VAR_2, FUNC_1(VAR_2));
 FUNC_3(VAR_2, VAR_0 - FUNC_2(VAR_2));
 VAR_2->dev = VAR_1->dev;
 VAR_2->iif = 0;

 VAR_1->skb = VAR_2;
}
