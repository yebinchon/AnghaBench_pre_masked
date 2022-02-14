
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; int destructor; } ;
struct iphdr {int version; int ihl; } ;
struct TYPE_2__ {int name; struct iphdr iph; } ;
struct ip_tunnel {TYPE_1__ parms; struct net_device* dev; int gro_cells; } ;


 int FUNC_0 (int *,struct net_device*) ;
 int VAR_0 ;
 struct ip_tunnel* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct net_device *VAR_1)
{
 struct ip_tunnel *VAR_2 = FUNC_1(VAR_1);
 struct iphdr *VAR_3 = &VAR_2->parms.iph;
 int VAR_4;

 VAR_1->destructor = VAR_0;

 VAR_4 = FUNC_0(&VAR_2->gro_cells, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_2->dev = VAR_1;
 FUNC_2(VAR_2->parms.name, VAR_1->name);
 VAR_3->version = 4;
 VAR_3->ihl = 5;

 return 0;
}
