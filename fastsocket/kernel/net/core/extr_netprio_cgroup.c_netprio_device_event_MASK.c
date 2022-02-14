
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct netprio_map {int rcu; } ;
struct netdev_priomap_info {int priomap; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct netdev_priomap_info priomap_data; } ;



 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 struct netprio_map* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
    unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct netprio_map *VAR_6;
 struct netdev_priomap_info *VAR_7;






 switch (VAR_3) {
 case 128:
  VAR_7 = &FUNC_1(VAR_5)->priomap_data;
  VAR_6 = FUNC_3(VAR_7->priomap);
  FUNC_2(VAR_7->priomap, ((void*)0));
  if (VAR_6)
   FUNC_0(&VAR_6->rcu, VAR_1);
  break;
 }
 return VAR_0;
}
