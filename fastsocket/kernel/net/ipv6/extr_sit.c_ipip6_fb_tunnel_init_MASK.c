
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sit_net {struct ip_tunnel** tunnels_wc; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct iphdr {int version; int ihl; int ttl; int protocol; } ;
struct TYPE_2__ {int name; struct iphdr iph; } ;
struct ip_tunnel {TYPE_1__ parms; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct net* FUNC_1 (struct net_device*) ;
 struct sit_net* FUNC_2 (struct net*,int ) ;
 struct ip_tunnel* FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct ip_tunnel *VAR_3 = FUNC_3(VAR_2);
 struct iphdr *VAR_4 = &VAR_3->parms.iph;
 struct net *VAR_5 = FUNC_1(VAR_2);
 struct sit_net *VAR_6 = FUNC_2(VAR_5, VAR_1);

 VAR_3->dev = VAR_2;
 FUNC_4(VAR_3->parms.name, VAR_2->name);

 VAR_4->version = 4;
 VAR_4->protocol = VAR_0;
 VAR_4->ihl = 5;
 VAR_4->ttl = 64;

 FUNC_0(VAR_2);
 VAR_6->tunnels_wc[0] = VAR_3;
}
