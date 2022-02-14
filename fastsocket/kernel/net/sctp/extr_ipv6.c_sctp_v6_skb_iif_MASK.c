
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct inet6_skb_parm {int iif; } ;



__attribute__((used)) static int FUNC_0(const struct sk_buff *VAR_0)
{
 struct inet6_skb_parm *VAR_1 = (struct inet6_skb_parm *) VAR_0->cb;
 return VAR_1->iif;
}
