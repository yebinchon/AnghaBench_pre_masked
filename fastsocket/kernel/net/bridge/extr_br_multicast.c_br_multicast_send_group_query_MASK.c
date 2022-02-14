
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_bridge_mdb_entry {scalar_t__ queries_sent; int query_timer; int addr; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ multicast_last_member_count; scalar_t__ multicast_last_member_interval; } ;


 struct sk_buff* FUNC_0 (struct net_bridge*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct net_bridge_mdb_entry *VAR_1)
{
 struct net_bridge *VAR_2 = VAR_1->br;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_1->addr);
 if (!VAR_3)
  goto timer;

 FUNC_2(VAR_3);

timer:
 if (++VAR_1->queries_sent < VAR_2->multicast_last_member_count)
  FUNC_1(&VAR_1->query_timer,
     VAR_0 + VAR_2->multicast_last_member_interval);
}
