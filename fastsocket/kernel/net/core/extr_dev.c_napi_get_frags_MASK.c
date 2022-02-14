
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct napi_struct {struct sk_buff* skb; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

struct sk_buff *FUNC_2(struct napi_struct *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 struct sk_buff *VAR_4 = VAR_2->skb;

 if (!VAR_4) {
  VAR_4 = FUNC_0(VAR_3, VAR_0 + VAR_1);
  if (!VAR_4)
   goto out;

  FUNC_1(VAR_4, VAR_1);

  VAR_2->skb = VAR_4;
 }

out:
 return VAR_4;
}
