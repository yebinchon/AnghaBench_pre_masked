
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long multicast_querier; int multicast_lock; } ;


 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct net_bridge *VAR_0, unsigned long VAR_1)
{
 VAR_1 = !!VAR_1;

 FUNC_1(&VAR_0->multicast_lock);
 if (VAR_0->multicast_querier == VAR_1)
  goto unlock;

 VAR_0->multicast_querier = VAR_1;
 if (VAR_1)
  FUNC_0(VAR_0);

unlock:
 FUNC_2(&VAR_0->multicast_lock);

 return 0;
}
