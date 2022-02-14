
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct net_bridge {unsigned long hash_max; int multicast_lock; int hash_elasticity; TYPE_1__* mdb; int dev; } ;
struct TYPE_2__ {unsigned long size; scalar_t__ old; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__**,unsigned long,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct net_bridge *VAR_3, unsigned long VAR_4)
{
 int VAR_5 = -VAR_2;
 u32 VAR_6;

 FUNC_3(&VAR_3->multicast_lock);
 if (!FUNC_2(VAR_3->dev))
  goto unlock;

 VAR_5 = -VAR_1;
 if (!FUNC_1(VAR_4))
  goto unlock;
 if (VAR_3->mdb && VAR_4 < VAR_3->mdb->size)
  goto unlock;

 VAR_5 = 0;

 VAR_6 = VAR_3->hash_max;
 VAR_3->hash_max = VAR_4;

 if (VAR_3->mdb) {
  if (VAR_3->mdb->old) {
   VAR_5 = -VAR_0;
rollback:
   VAR_3->hash_max = VAR_6;
   goto unlock;
  }

  VAR_5 = FUNC_0(&VAR_3->mdb, VAR_3->hash_max,
        VAR_3->hash_elasticity);
  if (VAR_5)
   goto rollback;
 }

unlock:
 FUNC_4(&VAR_3->multicast_lock);

 return VAR_5;
}
