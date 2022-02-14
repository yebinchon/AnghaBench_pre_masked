
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int broadcast; int dev_addr; int name; } ;
struct TYPE_3__ {int daddr; int saddr; } ;
struct TYPE_4__ {TYPE_1__ iph; int name; } ;
struct ip_tunnel {TYPE_2__ parms; struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int) ;
 struct ip_tunnel* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ip_tunnel *VAR_1 = FUNC_2(VAR_0);

 VAR_1->dev = VAR_0;
 FUNC_3(VAR_1->parms.name, VAR_0->name);

 FUNC_1(VAR_0->dev_addr, &VAR_1->parms.iph.saddr, 4);
 FUNC_1(VAR_0->broadcast, &VAR_1->parms.iph.daddr, 4);

 FUNC_0(VAR_0);
}
