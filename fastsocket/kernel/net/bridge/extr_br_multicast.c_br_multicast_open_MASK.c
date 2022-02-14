
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int multicast_query_timer; scalar_t__ multicast_disabled; scalar_t__ multicast_startup_queries_sent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct net_bridge *VAR_1)
{
 VAR_1->multicast_startup_queries_sent = 0;

 if (VAR_1->multicast_disabled)
  return;

 FUNC_0(&VAR_1->multicast_query_timer, VAR_0);
}
