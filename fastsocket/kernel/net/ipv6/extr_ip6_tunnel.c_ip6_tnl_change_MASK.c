
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip6_tnl_parm {int proto; int link; int flowinfo; int encap_limit; int hop_limit; int flags; int raddr; int laddr; } ;
struct TYPE_2__ {int proto; int link; int flowinfo; int encap_limit; int hop_limit; int flags; int raddr; int laddr; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 int FUNC_0 (struct ip6_tnl*) ;
 int FUNC_1 (struct ip6_tnl*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct ip6_tnl *VAR_0, struct ip6_tnl_parm *VAR_1)
{
 FUNC_2(&VAR_0->parms.laddr, &VAR_1->laddr);
 FUNC_2(&VAR_0->parms.raddr, &VAR_1->raddr);
 VAR_0->parms.flags = VAR_1->flags;
 VAR_0->parms.hop_limit = VAR_1->hop_limit;
 VAR_0->parms.encap_limit = VAR_1->encap_limit;
 VAR_0->parms.flowinfo = VAR_1->flowinfo;
 VAR_0->parms.link = VAR_1->link;
 VAR_0->parms.proto = VAR_1->proto;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 return 0;
}
