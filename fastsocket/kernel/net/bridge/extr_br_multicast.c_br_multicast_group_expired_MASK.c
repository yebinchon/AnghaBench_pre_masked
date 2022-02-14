
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_mdb_htable {size_t ver; int size; } ;
struct net_bridge_mdb_entry {int mglist; int rcu; int query_timer; int * hlist; scalar_t__ ports; int timer; struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; struct net_bridge_mdb_htable* mdb; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct net_bridge_mdb_entry *VAR_2 = (void *)VAR_1;
 struct net_bridge *VAR_3 = VAR_2->br;
 struct net_bridge_mdb_htable *VAR_4;

 FUNC_4(&VAR_3->multicast_lock);
 if (!FUNC_3(VAR_3->dev) || FUNC_6(&VAR_2->timer))
  goto out;

 VAR_2->mglist = 0;

 if (VAR_2->ports)
  goto out;

 VAR_4 = VAR_3->mdb;
 FUNC_2(&VAR_2->hlist[VAR_4->ver]);
 VAR_4->size--;

 FUNC_1(&VAR_2->query_timer);
 FUNC_0(&VAR_2->rcu, VAR_0);

out:
 FUNC_5(&VAR_3->multicast_lock);
}
