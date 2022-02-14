
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_bridge_port_group {scalar_t__ queries_sent; int query_timer; int addr; struct net_bridge_port* port; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {scalar_t__ multicast_last_member_count; scalar_t__ multicast_last_member_interval; } ;


 int FUNC_0 (struct net_bridge_port*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_bridge*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_bridge_port_group *VAR_1)
{
 struct net_bridge_port *VAR_2 = VAR_1->port;
 struct net_bridge *VAR_3 = VAR_2->br;
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_1(VAR_3, &VAR_1->addr);
 if (!VAR_4)
  goto timer;

 FUNC_0(VAR_2, VAR_4);

timer:
 if (++VAR_1->queries_sent < VAR_3->multicast_last_member_count)
  FUNC_2(&VAR_1->query_timer,
     VAR_0 + VAR_3->multicast_last_member_interval);
}
