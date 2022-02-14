
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int rtnl_link_ops; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
struct ip_tunnel_net {struct net_device* fb_tunnel_dev; } ;
struct ip_tunnel {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct net*,int ,struct ip_tunnel_parm*) ;
 int FUNC_3 (struct ip_tunnel_net*,struct ip_tunnel*) ;
 int FUNC_4 (struct net_device*) ;
 struct ip_tunnel* FUNC_5 (struct net_device*) ;

__attribute__((used)) static struct ip_tunnel *FUNC_6(struct net *VAR_0,
       struct ip_tunnel_net *VAR_1,
       struct ip_tunnel_parm *VAR_2)
{
 struct ip_tunnel *VAR_3, *VAR_4;
 struct net_device *VAR_5;

 FUNC_0(!VAR_1->fb_tunnel_dev);
 VAR_4 = FUNC_5(VAR_1->fb_tunnel_dev);
 VAR_5 = FUNC_2(VAR_0, VAR_1->fb_tunnel_dev->rtnl_link_ops, VAR_2);
 if (FUNC_1(VAR_5))
  return ((void*)0);

 VAR_5->mtu = FUNC_4(VAR_5);

 VAR_3 = FUNC_5(VAR_5);
 FUNC_3(VAR_1, VAR_3);
 return VAR_3;
}
