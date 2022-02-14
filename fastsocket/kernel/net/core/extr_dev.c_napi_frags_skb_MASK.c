
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct napi_struct {struct sk_buff* skb; } ;
struct ethhdr {int h_proto; } ;


 int FUNC_0 (struct napi_struct*,struct sk_buff*) ;
 struct ethhdr* FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int) ;
 struct ethhdr* FUNC_3 (struct sk_buff*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

struct sk_buff *FUNC_9(struct napi_struct *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->skb;
 struct ethhdr *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;

 VAR_0->skb = ((void*)0);

 FUNC_7(VAR_1);
 FUNC_6(VAR_1);

 VAR_4 = FUNC_4(VAR_1);
 VAR_3 = VAR_4 + sizeof(*VAR_2);
 VAR_2 = FUNC_1(VAR_1, VAR_4);
 if (FUNC_2(VAR_1, VAR_3)) {
  VAR_2 = FUNC_3(VAR_1, VAR_3, VAR_4);
  if (FUNC_8(!VAR_2)) {
   FUNC_0(VAR_0, VAR_1);
   VAR_1 = ((void*)0);
   goto out;
  }
 }

 FUNC_5(VAR_1, sizeof(*VAR_2));





 VAR_1->protocol = VAR_2->h_proto;

out:
 return VAR_1;
}
