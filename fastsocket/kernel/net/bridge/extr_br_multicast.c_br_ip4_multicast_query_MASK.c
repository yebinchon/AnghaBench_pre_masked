
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_4__ {int expires; } ;
struct net_bridge_port_group {TYPE_1__ timer; struct net_bridge_port_group* next; } ;
struct net_bridge_port {scalar_t__ state; } ;
struct net_bridge_mdb_entry {int timer_armed; struct net_bridge_port_group* ports; TYPE_1__ timer; scalar_t__ mglist; } ;
struct net_bridge {unsigned long multicast_membership_interval; unsigned long multicast_last_member_count; int multicast_lock; int mdb; int dev; } ;
struct iphdr {int saddr; } ;
struct igmpv3_query {scalar_t__ code; scalar_t__ nsrcs; } ;
struct igmphdr {int code; scalar_t__ group; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 struct net_bridge_mdb_entry* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*,int) ;
 struct igmphdr* FUNC_3 (struct sk_buff*) ;
 struct igmpv3_query* FUNC_4 (struct sk_buff*) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 unsigned long VAR_4 ;
 int FUNC_6 (TYPE_1__*,unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,unsigned long) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct net_bridge *VAR_5,
      struct net_bridge_port *VAR_6,
      struct sk_buff *VAR_7)
{
 struct iphdr *VAR_8 = FUNC_5(VAR_7);
 struct igmphdr *VAR_9 = FUNC_3(VAR_7);
 struct net_bridge_mdb_entry *VAR_10;
 struct igmpv3_query *VAR_11;
 struct net_bridge_port_group *VAR_12;
 struct net_bridge_port_group **VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15 = VAR_4;
 __be32 VAR_16;
 int VAR_17 = 0;

 FUNC_9(&VAR_5->multicast_lock);
 if (!FUNC_7(VAR_5->dev) ||
     (VAR_6 && VAR_6->state == VAR_0))
  goto out;

 FUNC_2(VAR_5, VAR_6, !!VAR_8->saddr);

 VAR_16 = VAR_9->group;

 if (VAR_7->len == sizeof(*VAR_9)) {
  VAR_14 = VAR_9->code * (VAR_2 / VAR_3);

  if (!VAR_14) {
   VAR_14 = 10 * VAR_2;
   VAR_16 = 0;
  }
 } else {
  if (!FUNC_8(VAR_7, sizeof(struct igmpv3_query))) {
   VAR_17 = -VAR_1;
   goto out;
  }

  VAR_11 = FUNC_4(VAR_7);
  if (VAR_11->nsrcs)
   goto out;

  VAR_14 = VAR_11->code ? 1 :
       FUNC_0(VAR_11->code) * (VAR_2 / VAR_3);
 }

 if (!VAR_16)
  goto out;

 VAR_10 = FUNC_1(VAR_5->mdb, VAR_16);
 if (!VAR_10)
  goto out;

 FUNC_6(&VAR_10->timer, VAR_15 + VAR_5->multicast_membership_interval);
 VAR_10->timer_armed = 1;

 VAR_14 *= VAR_5->multicast_last_member_count;

 if (VAR_10->mglist &&
     (FUNC_12(&VAR_10->timer) ?
      FUNC_11(VAR_10->timer.expires, VAR_15 + VAR_14) :
      FUNC_13(&VAR_10->timer) >= 0))
  FUNC_6(&VAR_10->timer, VAR_15 + VAR_14);

 for (VAR_13 = &VAR_10->ports; (VAR_12 = *VAR_13); VAR_13 = &VAR_12->next) {
  if (FUNC_12(&VAR_12->timer) ?
      FUNC_11(VAR_12->timer.expires, VAR_15 + VAR_14) :
      FUNC_13(&VAR_12->timer) >= 0)
   FUNC_6(&VAR_12->timer, VAR_15 + VAR_14);
 }

out:
 FUNC_10(&VAR_5->multicast_lock);
 return VAR_17;
}
