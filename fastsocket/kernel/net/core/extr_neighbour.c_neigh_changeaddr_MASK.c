
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neigh_table {int lock; } ;


 int FUNC_0 (struct neigh_table*,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct neigh_table *VAR_0, struct net_device *VAR_1)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock);
}
