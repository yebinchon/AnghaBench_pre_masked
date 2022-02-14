
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int multicast_query_timer; scalar_t__ multicast_startup_queries_sent; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_bridge_port *VAR_1)
{
 VAR_1->multicast_startup_queries_sent = 0;

 if (FUNC_2(&VAR_1->multicast_query_timer) >= 0 ||
     FUNC_0(&VAR_1->multicast_query_timer))
  FUNC_1(&VAR_1->multicast_query_timer, VAR_0);
}
