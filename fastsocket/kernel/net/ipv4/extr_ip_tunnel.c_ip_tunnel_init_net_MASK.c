
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {int name; } ;
struct ip_tunnel_net {int * fb_tunnel_dev; int tunnels; } ;
struct hlist_head {int dummy; } ;
typedef int parms ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct net*,struct rtnl_link_ops*,struct ip_tunnel_parm*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct ip_tunnel_parm*,int ,int) ;
 struct ip_tunnel_net* FUNC_6 (struct net*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,int ) ;

int FUNC_10(struct net *VAR_4, int VAR_5,
      struct rtnl_link_ops *VAR_6, char *VAR_7)
{
 struct ip_tunnel_net *VAR_8 = FUNC_6(VAR_4, VAR_5);
 struct ip_tunnel_parm VAR_9;

 VAR_8->tunnels = FUNC_4(VAR_3 * sizeof(struct hlist_head), VAR_1);
 if (!VAR_8->tunnels)
  return -VAR_0;

 if (!VAR_6) {
  VAR_8->fb_tunnel_dev = ((void*)0);
  return 0;
 }
 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_7)
  FUNC_9(VAR_9.name, VAR_7, VAR_2);

 FUNC_7();
 VAR_8->fb_tunnel_dev = FUNC_2(VAR_4, VAR_6, &VAR_9);
 FUNC_8();
 if (FUNC_0(VAR_8->fb_tunnel_dev)) {
  FUNC_3(VAR_8->tunnels);
  return FUNC_1(VAR_8->fb_tunnel_dev);
 }

 return 0;
}
