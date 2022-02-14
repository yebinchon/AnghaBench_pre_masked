
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int dev; } ;
struct dn_skb_cb {unsigned char hops; void* src; void* dst; } ;
typedef void* __le16 ;


 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct sk_buff*,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4)
{
 struct dn_skb_cb *VAR_5 = FUNC_0(VAR_4);
 unsigned char *VAR_6 = VAR_4->data;

 if (!FUNC_3(VAR_4, 6))
  goto drop_it;

 FUNC_4(VAR_4, 5);
 FUNC_5(VAR_4);

 VAR_5->dst = *(__le16 *)VAR_6;
 VAR_6 += 2;
 VAR_5->src = *(__le16 *)VAR_6;
 VAR_6 += 2;
 VAR_5->hops = *VAR_6 & 0x3f;

 return FUNC_1(VAR_2, VAR_1, VAR_4, VAR_4->dev, ((void*)0), VAR_3);

drop_it:
 FUNC_2(VAR_4);
 return VAR_0;
}
