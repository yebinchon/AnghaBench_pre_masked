
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ip6_tnl_parm {struct in6_addr laddr; struct in6_addr raddr; } ;
struct ip6_tnl_net {int dummy; } ;
struct TYPE_2__ {int raddr; int laddr; } ;
struct ip6_tnl {TYPE_1__ parms; struct ip6_tnl* next; } ;


 struct ip6_tnl** FUNC_0 (struct ip6_tnl_net*,struct ip6_tnl_parm*) ;
 struct ip6_tnl* FUNC_1 (struct net*,struct ip6_tnl_parm*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct in6_addr*,int *) ;
 struct ip6_tnl_net* FUNC_3 (struct net*,int ) ;

__attribute__((used)) static struct ip6_tnl *FUNC_4(struct net *VAR_1,
  struct ip6_tnl_parm *VAR_2, int VAR_3)
{
 struct in6_addr *VAR_4 = &VAR_2->raddr;
 struct in6_addr *VAR_5 = &VAR_2->laddr;
 struct ip6_tnl *VAR_6;
 struct ip6_tnl_net *VAR_7 = FUNC_3(VAR_1, VAR_0);

 for (VAR_6 = *FUNC_0(VAR_7, VAR_2); VAR_6; VAR_6 = VAR_6->next) {
  if (FUNC_2(VAR_5, &VAR_6->parms.laddr) &&
      FUNC_2(VAR_4, &VAR_6->parms.raddr))
   return VAR_6;
 }
 if (!VAR_3)
  return ((void*)0);
 return FUNC_1(VAR_1, VAR_2);
}
