
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct ip6_tnl_parm {struct in6_addr laddr; struct in6_addr raddr; } ;
struct ip6_tnl_net {struct ip6_tnl*** tnls; } ;
struct ip6_tnl {int dummy; } ;


 unsigned int FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*) ;

__attribute__((used)) static struct ip6_tnl **
FUNC_2(struct ip6_tnl_net *VAR_0, struct ip6_tnl_parm *VAR_1)
{
 struct in6_addr *VAR_2 = &VAR_1->raddr;
 struct in6_addr *VAR_3 = &VAR_1->laddr;
 unsigned VAR_4 = 0;
 int VAR_5 = 0;

 if (!FUNC_1(VAR_2) || !FUNC_1(VAR_3)) {
  VAR_5 = 1;
  VAR_4 = FUNC_0(VAR_2) ^ FUNC_0(VAR_3);
 }
 return &VAR_0->tnls[VAR_5][VAR_4];
}
