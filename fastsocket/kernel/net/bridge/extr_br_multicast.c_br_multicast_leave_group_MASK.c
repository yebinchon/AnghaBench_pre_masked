
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int expires; } ;
struct net_bridge_port_group {TYPE_1__ timer; int mglist; struct net_bridge_port* port; struct net_bridge_port_group* next; } ;
struct net_bridge_port {scalar_t__ state; TYPE_1__ multicast_query_timer; } ;
struct net_bridge_mdb_htable {int dummy; } ;
struct net_bridge_mdb_entry {TYPE_1__ query_timer; scalar_t__ queries_sent; TYPE_1__ timer; scalar_t__ timer_armed; scalar_t__ mglist; struct net_bridge_port_group* ports; int addr; } ;
struct net_bridge {unsigned long multicast_last_member_count; unsigned long multicast_last_member_interval; int multicast_lock; TYPE_1__ multicast_query_timer; TYPE_1__ multicast_querier_timer; scalar_t__ multicast_querier; struct net_bridge_mdb_htable* mdb; int dev; } ;
struct br_ip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,int *) ;
 struct net_bridge_mdb_entry* FUNC_1 (struct net_bridge_mdb_htable*,struct br_ip*) ;
 int FUNC_2 (int *) ;
 unsigned long VAR_1 ;
 int FUNC_3 (TYPE_1__*,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,unsigned long) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(struct net_bridge *VAR_2,
         struct net_bridge_port *VAR_3,
         struct br_ip *VAR_4)
{
 struct net_bridge_mdb_htable *VAR_5;
 struct net_bridge_mdb_entry *VAR_6;
 struct net_bridge_port_group *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 FUNC_5(&VAR_2->multicast_lock);
 if (!FUNC_4(VAR_2->dev) ||
     (VAR_3 && VAR_3->state == VAR_0) ||
     FUNC_8(&VAR_2->multicast_querier_timer))
  goto out;

 VAR_5 = VAR_2->mdb;
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (!VAR_6)
  goto out;

 if (VAR_2->multicast_querier &&
     !FUNC_8(&VAR_2->multicast_querier_timer)) {
  FUNC_0(VAR_2, VAR_3, &VAR_6->addr);

  VAR_9 = VAR_1 + VAR_2->multicast_last_member_count *
     VAR_2->multicast_last_member_interval;
  FUNC_3(VAR_3 ? &VAR_3->multicast_query_timer :
     &VAR_2->multicast_query_timer, VAR_9);

  for (VAR_7 = VAR_6->ports; VAR_7; VAR_7 = VAR_7->next) {
   if (VAR_7->port != VAR_3)
    continue;

   if (!FUNC_2(&VAR_7->mglist) &&
       (FUNC_8(&VAR_7->timer) ?
        FUNC_7(VAR_7->timer.expires, VAR_9) :
        FUNC_9(&VAR_7->timer) >= 0)) {
    FUNC_3(&VAR_7->timer, VAR_9);
   }

   break;
  }
 }

 VAR_8 = VAR_1;
 VAR_9 = VAR_8 + VAR_2->multicast_last_member_count *
       VAR_2->multicast_last_member_interval;

 if (!VAR_3) {
  if (VAR_6->mglist && VAR_6->timer_armed &&
      (FUNC_8(&VAR_6->timer) ?
       FUNC_7(VAR_6->timer.expires, VAR_9) :
       FUNC_9(&VAR_6->timer) >= 0)) {
   FUNC_3(&VAR_6->timer, VAR_9);

   VAR_6->queries_sent = 0;
   FUNC_3(&VAR_6->query_timer, VAR_8);
  }
 }

out:
 FUNC_6(&VAR_2->multicast_lock);
}
