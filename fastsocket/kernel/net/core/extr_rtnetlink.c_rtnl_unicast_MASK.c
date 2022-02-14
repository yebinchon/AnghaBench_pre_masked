
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {struct sock* rtnl; } ;


 int FUNC_0 (struct sock*,struct sk_buff*,int ) ;

int FUNC_1(struct sk_buff *VAR_0, struct net *VAR_1, u32 VAR_2)
{
 struct sock *VAR_3 = VAR_1->rtnl;

 return FUNC_0(VAR_3, VAR_0, VAR_2);
}
