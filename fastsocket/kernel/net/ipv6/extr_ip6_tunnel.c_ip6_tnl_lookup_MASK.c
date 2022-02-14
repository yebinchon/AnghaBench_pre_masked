
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct ip6_tnl_net {struct ip6_tnl** tnls_wc; struct ip6_tnl** tnls_r_l; } ;
struct TYPE_3__ {int raddr; int laddr; } ;
struct ip6_tnl {TYPE_2__* dev; TYPE_1__ parms; struct ip6_tnl* next; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 unsigned int FUNC_0 (struct in6_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct in6_addr*,int *) ;
 struct ip6_tnl_net* FUNC_2 (struct net*,int ) ;

__attribute__((used)) static struct ip6_tnl *
FUNC_3(struct net *VAR_2, struct in6_addr *VAR_3, struct in6_addr *VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_3);
 unsigned VAR_6 = FUNC_0(VAR_4);
 struct ip6_tnl *VAR_7;
 struct ip6_tnl_net *VAR_8 = FUNC_2(VAR_2, VAR_1);

 for (VAR_7 = VAR_8->tnls_r_l[VAR_5 ^ VAR_6]; VAR_7; VAR_7 = VAR_7->next) {
  if (FUNC_1(VAR_4, &VAR_7->parms.laddr) &&
      FUNC_1(VAR_3, &VAR_7->parms.raddr) &&
      (VAR_7->dev->flags & VAR_0))
   return VAR_7;
 }
 if ((VAR_7 = VAR_8->tnls_wc[0]) != ((void*)0) && (VAR_7->dev->flags & VAR_0))
  return VAR_7;

 return ((void*)0);
}
