
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_mdb_entry {scalar_t__ queries_sent; int mglist; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ multicast_last_member_count; int multicast_lock; int dev; } ;


 int FUNC_0 (struct net_bridge_mdb_entry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct net_bridge_mdb_entry *VAR_1 = (void *)VAR_0;
 struct net_bridge *VAR_2 = VAR_1->br;

 FUNC_2(&VAR_2->multicast_lock);
 if (!FUNC_1(VAR_2->dev) || !VAR_1->mglist ||
     VAR_1->queries_sent >= VAR_2->multicast_last_member_count)
  goto out;

 FUNC_0(VAR_1);

out:
 FUNC_3(&VAR_2->multicast_lock);
}
