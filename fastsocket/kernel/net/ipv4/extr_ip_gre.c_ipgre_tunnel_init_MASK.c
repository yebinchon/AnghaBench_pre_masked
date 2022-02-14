
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int addr_len; int * header_ops; int flags; int priv_flags; int type; int broadcast; int dev_addr; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; } ;
struct TYPE_2__ {struct iphdr iph; } ;
struct ip_tunnel {TYPE_1__ parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 struct ip_tunnel* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6)
{
 struct ip_tunnel *VAR_7 = FUNC_4(VAR_6);
 struct iphdr *VAR_8 = &VAR_7->parms.iph;

 FUNC_0(VAR_6);

 FUNC_3(VAR_6->dev_addr, &VAR_8->saddr, 4);
 FUNC_3(VAR_6->broadcast, &VAR_8->daddr, 4);

 VAR_6->type = VAR_0;
 VAR_6->flags = VAR_3;
 VAR_6->priv_flags &= ~VAR_4;
 VAR_6->addr_len = 4;

 if (VAR_8->daddr) {
 } else
  VAR_6->header_ops = &VAR_5;

 return FUNC_1(VAR_6);
}
