
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge {int multicast_disabled; int multicast_lock; int hash_elasticity; TYPE_1__* mdb; int dev; } ;
struct TYPE_2__ {int max; scalar_t__ old; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int ) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct net_bridge *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = 0;

 FUNC_3(&VAR_1->multicast_lock);
 if (!FUNC_2(VAR_1->dev))
  goto unlock;

 if (VAR_1->multicast_disabled == !VAR_2)
  goto unlock;

 VAR_1->multicast_disabled = !VAR_2;
 if (VAR_1->multicast_disabled)
  goto unlock;

 if (VAR_1->mdb) {
  if (VAR_1->mdb->old) {
   VAR_3 = -VAR_0;
rollback:
   VAR_1->multicast_disabled = !!VAR_2;
   goto unlock;
  }

  VAR_3 = FUNC_0(&VAR_1->mdb, VAR_1->mdb->max,
        VAR_1->hash_elasticity);
  if (VAR_3)
   goto rollback;
 }

 FUNC_1(VAR_1);

unlock:
 FUNC_4(&VAR_1->multicast_lock);

 return VAR_3;
}
