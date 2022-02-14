
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ state; scalar_t__ multicast_startup_queries_sent; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ multicast_startup_query_count; int multicast_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct net_bridge_port *VAR_3 = (void *)VAR_2;
 struct net_bridge *VAR_4 = VAR_3->br;

 FUNC_1(&VAR_4->multicast_lock);
 if (VAR_3->state == VAR_1 ||
     VAR_3->state == VAR_0)
  goto out;

 if (VAR_3->multicast_startup_queries_sent <
     VAR_4->multicast_startup_query_count)
  VAR_3->multicast_startup_queries_sent++;

 FUNC_0(VAR_3->br, VAR_3,
    VAR_3->multicast_startup_queries_sent);

out:
 FUNC_2(&VAR_4->multicast_lock);
}
