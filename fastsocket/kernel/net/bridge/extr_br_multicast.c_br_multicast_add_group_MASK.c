
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct br_ip {int dummy; } ;
struct net_bridge_port_group {int query_timer; int timer; int mglist; struct net_bridge_port_group* next; struct net_bridge_port* port; struct br_ip addr; } ;
struct net_bridge_port {scalar_t__ state; int mglist; } ;
struct net_bridge_mdb_entry {int mglist; struct net_bridge_port_group* ports; } ;
struct net_bridge {int multicast_lock; scalar_t__ multicast_membership_interval; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_bridge_mdb_entry*) ;
 int FUNC_1 (struct net_bridge_mdb_entry*) ;
 struct net_bridge_mdb_entry* FUNC_2 (struct net_bridge*,struct net_bridge_port*,struct br_ip*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_5 ;
 struct net_bridge_port_group* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_bridge_port_group*,struct net_bridge_port_group*) ;
 int FUNC_8 (int *,int ,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct net_bridge *VAR_6,
      struct net_bridge_port *VAR_7,
      struct br_ip *VAR_8)
{
 struct net_bridge_mdb_entry *VAR_9;
 struct net_bridge_port_group *VAR_10;
 struct net_bridge_port_group **VAR_11;
 int VAR_12;

 FUNC_9(&VAR_6->multicast_lock);
 if (!FUNC_6(VAR_6->dev) ||
     (VAR_7 && VAR_7->state == VAR_0))
  goto out;

 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 VAR_12 = FUNC_1(VAR_9);
 if (FUNC_11(FUNC_0(VAR_9) || !VAR_9))
  goto err;

 if (!VAR_7) {
  VAR_9->mglist = 1;
  goto out;
 }

 for (VAR_11 = &VAR_9->ports; (VAR_10 = *VAR_11); VAR_11 = &VAR_10->next) {
  if (VAR_10->port == VAR_7) {

   FUNC_5(&VAR_10->timer,
      VAR_5 + VAR_6->multicast_membership_interval);
   goto out;
  }
  if ((unsigned long)VAR_10->port < (unsigned long)VAR_7)
   break;
 }

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
 VAR_12 = -VAR_1;
 if (FUNC_11(!VAR_10))
  goto err;

 VAR_10->addr = *VAR_8;
 VAR_10->port = VAR_7;
 VAR_10->next = *VAR_11;
 FUNC_3(&VAR_10->mglist, &VAR_7->mglist);
 FUNC_8(&VAR_10->timer, VAR_3,
      (unsigned long)VAR_10);
 FUNC_8(&VAR_10->query_timer, VAR_4,
      (unsigned long)VAR_10);

 FUNC_7(*VAR_11, VAR_10);

out:
 VAR_12 = 0;

err:
 FUNC_10(&VAR_6->multicast_lock);
 return VAR_12;
}
