
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_ops {scalar_t__ (* ndo_neigh_setup ) (struct net_device*,struct neigh_parms*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct neigh_parms* next; } ;
struct neigh_table {int lock; TYPE_1__ parms; } ;
struct neigh_parms {struct neigh_parms* next; int * sysctl_table; int net; struct net_device* dev; int base_reachable_time; int reachable_time; int refcnt; struct neigh_table* tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct net_device*) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct neigh_parms*) ;
 struct neigh_parms* FUNC_5 (struct neigh_parms*,int,int ) ;
 struct neigh_parms* FUNC_6 (struct neigh_table*,struct net*,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct net_device*,struct neigh_parms*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;

struct neigh_parms *FUNC_12(struct net_device *VAR_1,
          struct neigh_table *VAR_2)
{
 struct neigh_parms *VAR_3, *VAR_4;
 struct net *VAR_5 = FUNC_2(VAR_1);
 const struct net_device_ops *VAR_6 = VAR_1->netdev_ops;

 VAR_4 = FUNC_6(VAR_2, VAR_5, 0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_5(VAR_4, sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  VAR_3->tbl = VAR_2;
  FUNC_0(&VAR_3->refcnt, 1);
  VAR_3->reachable_time =
    FUNC_7(VAR_3->base_reachable_time);

  if (VAR_6->ndo_neigh_setup && VAR_6->ndo_neigh_setup(VAR_1, VAR_3)) {
   FUNC_4(VAR_3);
   return ((void*)0);
  }

  FUNC_1(VAR_1);
  VAR_3->dev = VAR_1;
  FUNC_10(&VAR_3->net, FUNC_3(VAR_5));
  VAR_3->sysctl_table = ((void*)0);
  FUNC_9(&VAR_2->lock);
  VAR_3->next = VAR_2->parms.next;
  VAR_2->parms.next = VAR_3;
  FUNC_11(&VAR_2->lock);
 }
 return VAR_3;
}
