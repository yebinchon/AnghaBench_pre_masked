
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct net_device {unsigned int flags; int type; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ daddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; } ;
struct ip_tunnel_net {struct net_device* fb_tunnel_dev; } ;
struct ip_tunnel {struct net_device* dev; int ip_tnl_net_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 struct net* FUNC_0 (struct net_device*) ;
 struct ip_tunnel* FUNC_1 (struct ip_tunnel_net*,struct ip_tunnel_parm*,int ) ;
 int FUNC_2 (struct ip_tunnel_net*,struct ip_tunnel*,struct net_device*,struct ip_tunnel_parm*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct ip_tunnel_net* FUNC_4 (struct net*,int ) ;
 struct ip_tunnel* FUNC_5 (struct net_device*) ;

int FUNC_6(struct net_device *VAR_6, struct nlattr *VAR_7[],
    struct ip_tunnel_parm *VAR_8)
{
 struct ip_tunnel *VAR_9, *VAR_10;
 struct net *VAR_11 = FUNC_0(VAR_6);
 struct ip_tunnel *VAR_12 = FUNC_5(VAR_6);
 struct ip_tunnel_net *VAR_13 = FUNC_4(VAR_11, VAR_12->ip_tnl_net_id);

 if (VAR_6 == VAR_13->fb_tunnel_dev)
  return -VAR_2;

 VAR_10 = FUNC_5(VAR_6);

 VAR_9 = FUNC_1(VAR_13, VAR_8, VAR_6->type);

 if (VAR_9) {
  if (VAR_9->dev != VAR_6)
   return -VAR_1;
 } else {
  VAR_9 = VAR_10;

  if (VAR_6->type != VAR_0) {
   unsigned int VAR_14 = 0;

   if (FUNC_3(VAR_8->iph.daddr))
    VAR_14 = VAR_3;
   else if (VAR_8->iph.daddr)
    VAR_14 = VAR_4;

   if ((VAR_6->flags ^ VAR_14) &
       (VAR_4 | VAR_3))
    return -VAR_2;
  }
 }

 FUNC_2(VAR_13, VAR_9, VAR_6, VAR_8, !VAR_7[VAR_5]);
 return 0;
}
