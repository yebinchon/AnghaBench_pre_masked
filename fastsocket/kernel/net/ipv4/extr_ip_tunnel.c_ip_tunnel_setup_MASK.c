
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ip_tunnel {int ip_tnl_net_id; } ;


 struct ip_tunnel* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 struct ip_tunnel *VAR_2 = FUNC_0(VAR_0);
 VAR_2->ip_tnl_net_id = VAR_1;
}
