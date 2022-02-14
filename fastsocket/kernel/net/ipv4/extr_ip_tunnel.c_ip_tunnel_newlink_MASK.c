
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {scalar_t__ type; int mtu; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
struct ip_tunnel_net {int dummy; } ;
struct ip_tunnel {struct ip_tunnel_parm parms; int ip_tnl_net_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ip_tunnel_net*,struct ip_tunnel*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct ip_tunnel_net*,struct ip_tunnel_parm*,scalar_t__) ;
 struct ip_tunnel_net* FUNC_5 (struct net*,int ) ;
 struct ip_tunnel* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

int FUNC_8(struct net_device *VAR_4, struct nlattr *VAR_5[],
        struct ip_tunnel_parm *VAR_6)
{
 struct ip_tunnel *VAR_7;
 struct net *VAR_8 = FUNC_0(VAR_4);
 struct ip_tunnel_net *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_6(VAR_4);
 VAR_9 = FUNC_5(VAR_8, VAR_7->ip_tnl_net_id);

 if (FUNC_4(VAR_9, VAR_6, VAR_4->type))
  return -VAR_1;

 VAR_7->parms = *VAR_6;
 VAR_11 = FUNC_7(VAR_4);
 if (VAR_11)
  goto out;

 if (VAR_4->type == VAR_0 && !VAR_5[VAR_2])
  FUNC_1(VAR_4);

 VAR_10 = FUNC_3(VAR_4);
 if (!VAR_5[VAR_3])
  VAR_4->mtu = VAR_10;

 FUNC_2(VAR_9, VAR_7);

out:
 return VAR_11;
}
