
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sit_net {struct ip_tunnel** tunnels_wc; struct ip_tunnel** tunnels_l; struct ip_tunnel** tunnels_r; struct ip_tunnel** tunnels_r_l; } ;
struct net_device {scalar_t__ iflink; } ;
struct net {int dummy; } ;
struct TYPE_4__ {scalar_t__ saddr; scalar_t__ daddr; } ;
struct TYPE_5__ {scalar_t__ link; TYPE_1__ iph; } ;
struct ip_tunnel {TYPE_3__* dev; TYPE_2__ parms; struct ip_tunnel* next; } ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int flags; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 struct sit_net* FUNC_1 (struct net*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct ip_tunnel * FUNC_2(struct net *VAR_2,
  struct net_device *VAR_3, __be32 VAR_4, __be32 VAR_5)
{
 unsigned VAR_6 = FUNC_0(VAR_4);
 unsigned VAR_7 = FUNC_0(VAR_5);
 struct ip_tunnel *VAR_8;
 struct sit_net *VAR_9 = FUNC_1(VAR_2, VAR_1);

 for (VAR_8 = VAR_9->tunnels_r_l[VAR_6^VAR_7]; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_5 == VAR_8->parms.iph.saddr &&
      VAR_4 == VAR_8->parms.iph.daddr &&
      (!VAR_3 || !VAR_8->parms.link || VAR_3->iflink == VAR_8->parms.link) &&
      (VAR_8->dev->flags & VAR_0))
   return VAR_8;
 }
 for (VAR_8 = VAR_9->tunnels_r[VAR_6]; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_4 == VAR_8->parms.iph.daddr &&
      (!VAR_3 || !VAR_8->parms.link || VAR_3->iflink == VAR_8->parms.link) &&
      (VAR_8->dev->flags & VAR_0))
   return VAR_8;
 }
 for (VAR_8 = VAR_9->tunnels_l[VAR_7]; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_5 == VAR_8->parms.iph.saddr &&
      (!VAR_3 || !VAR_8->parms.link || VAR_3->iflink == VAR_8->parms.link) &&
      (VAR_8->dev->flags & VAR_0))
   return VAR_8;
 }
 VAR_8 = VAR_9->tunnels_wc[0];
 if ((VAR_8 != ((void*)0)) && (VAR_8->dev->flags & VAR_0))
  return VAR_8;
 return ((void*)0);
}
