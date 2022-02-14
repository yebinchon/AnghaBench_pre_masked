
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct net {struct sock* rtnl; } ;


 int FUNC_0 (struct sock*,int ,int ,int) ;

void FUNC_1(struct net *VAR_0, u32 VAR_1, int VAR_2)
{
 struct sock *VAR_3 = VAR_0->rtnl;

 FUNC_0(VAR_3, 0, VAR_1, VAR_2);
}
