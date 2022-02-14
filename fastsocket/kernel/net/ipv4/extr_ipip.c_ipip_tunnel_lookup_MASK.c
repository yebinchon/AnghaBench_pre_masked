
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net {int dummy; } ;
struct ipip_net {struct ip_tunnel** tunnels_wc; struct ip_tunnel** tunnels_l; struct ip_tunnel** tunnels_r; struct ip_tunnel** tunnels_r_l; } ;
struct TYPE_4__ {scalar_t__ saddr; scalar_t__ daddr; } ;
struct TYPE_5__ {TYPE_1__ iph; } ;
struct ip_tunnel {TYPE_3__* dev; TYPE_2__ parms; struct ip_tunnel* next; } ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int flags; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipip_net* FUNC_1 (struct net*,int ) ;

__attribute__((used)) static struct ip_tunnel * FUNC_2(struct net *VAR_2,
  __be32 VAR_3, __be32 VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_3);
 unsigned VAR_6 = FUNC_0(VAR_4);
 struct ip_tunnel *VAR_7;
 struct ipip_net *VAR_8 = FUNC_1(VAR_2, VAR_1);

 for (VAR_7 = VAR_8->tunnels_r_l[VAR_5^VAR_6]; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_4 == VAR_7->parms.iph.saddr &&
      VAR_3 == VAR_7->parms.iph.daddr && (VAR_7->dev->flags&VAR_0))
   return VAR_7;
 }
 for (VAR_7 = VAR_8->tunnels_r[VAR_5]; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_3 == VAR_7->parms.iph.daddr && (VAR_7->dev->flags&VAR_0))
   return VAR_7;
 }
 for (VAR_7 = VAR_8->tunnels_l[VAR_6]; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_4 == VAR_7->parms.iph.saddr && (VAR_7->dev->flags&VAR_0))
   return VAR_7;
 }
 if ((VAR_7 = VAR_8->tunnels_wc[0]) != ((void*)0) && (VAR_7->dev->flags&VAR_0))
  return VAR_7;
 return ((void*)0);
}
