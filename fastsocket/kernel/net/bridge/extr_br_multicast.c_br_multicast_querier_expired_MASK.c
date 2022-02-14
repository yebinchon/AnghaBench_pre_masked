
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int multicast_lock; scalar_t__ multicast_disabled; int dev; } ;


 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct net_bridge *VAR_1 = (void *)VAR_0;

 FUNC_2(&VAR_1->multicast_lock);
 if (!FUNC_1(VAR_1->dev) || VAR_1->multicast_disabled)
  goto out;

 FUNC_0(VAR_1);

out:
 FUNC_3(&VAR_1->multicast_lock);
}
