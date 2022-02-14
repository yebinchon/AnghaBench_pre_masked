
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port_group {int rcu; int query_timer; int timer; int mglist; struct net_bridge_port_group* next; int addr; } ;
struct net_bridge_mdb_htable {int dummy; } ;
struct net_bridge_mdb_entry {int timer; scalar_t__ timer_armed; int mglist; struct net_bridge_port_group* ports; } ;
struct net_bridge {int dev; struct net_bridge_mdb_htable* mdb; } ;


 scalar_t__ FUNC_0 (int) ;
 struct net_bridge_mdb_entry* FUNC_1 (struct net_bridge_mdb_htable*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct net_bridge *VAR_2,
    struct net_bridge_port_group *VAR_3)
{
 struct net_bridge_mdb_htable *VAR_4 = VAR_2->mdb;
 struct net_bridge_mdb_entry *VAR_5;
 struct net_bridge_port_group *VAR_6;
 struct net_bridge_port_group **VAR_7;

 VAR_5 = FUNC_1(VAR_4, &VAR_3->addr);
 if (FUNC_0(!VAR_5))
  return;

 for (VAR_7 = &VAR_5->ports; (VAR_6 = *VAR_7); VAR_7 = &VAR_6->next) {
  if (VAR_6 != VAR_3)
   continue;

  *VAR_7 = VAR_6->next;
  FUNC_4(&VAR_6->mglist);
  FUNC_3(&VAR_6->timer);
  FUNC_3(&VAR_6->query_timer);
  FUNC_2(&VAR_6->rcu, VAR_0);

  if (!VAR_5->ports && !VAR_5->mglist && VAR_5->timer_armed &&
      FUNC_6(VAR_2->dev))
   FUNC_5(&VAR_5->timer, VAR_1);

  return;
 }

 FUNC_0(1);
}
