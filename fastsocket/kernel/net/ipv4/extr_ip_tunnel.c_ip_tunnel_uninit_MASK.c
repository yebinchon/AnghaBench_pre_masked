
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_net {struct net_device* fb_tunnel_dev; } ;
struct ip_tunnel {int ip_tnl_net_id; } ;


 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ip_tunnel*) ;
 struct ip_tunnel_net* FUNC_2 (struct net*,int ) ;
 struct ip_tunnel* FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct net *VAR_1 = FUNC_0(VAR_0);
 struct ip_tunnel *VAR_2 = FUNC_3(VAR_0);
 struct ip_tunnel_net *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2->ip_tnl_net_id);

 if (VAR_3->fb_tunnel_dev != VAR_0)
  FUNC_1(FUNC_3(VAR_0));
}
