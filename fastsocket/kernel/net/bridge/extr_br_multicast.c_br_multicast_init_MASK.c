
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int hash_elasticity; int hash_max; int multicast_router; int multicast_last_member_count; int multicast_startup_query_count; int multicast_last_member_interval; int multicast_query_response_interval; int multicast_startup_query_interval; int multicast_query_interval; int multicast_querier_interval; int multicast_membership_interval; int multicast_query_timer; int multicast_querier_timer; int multicast_router_timer; int multicast_lock; scalar_t__ multicast_querier; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,unsigned long) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_bridge *VAR_4)
{
 VAR_4->hash_elasticity = 4;
 VAR_4->hash_max = 512;

 VAR_4->multicast_router = 1;
 VAR_4->multicast_querier = 0;
 VAR_4->multicast_last_member_count = 2;
 VAR_4->multicast_startup_query_count = 2;

 VAR_4->multicast_last_member_interval = VAR_0;
 VAR_4->multicast_query_response_interval = 10 * VAR_0;
 VAR_4->multicast_startup_query_interval = 125 * VAR_0 / 4;
 VAR_4->multicast_query_interval = 125 * VAR_0;
 VAR_4->multicast_querier_interval = 255 * VAR_0;
 VAR_4->multicast_membership_interval = 260 * VAR_0;

 FUNC_2(&VAR_4->multicast_lock);
 FUNC_1(&VAR_4->multicast_router_timer,
      VAR_1, 0);
 FUNC_1(&VAR_4->multicast_querier_timer,
      VAR_2, (unsigned long)VAR_4);
 FUNC_1(&VAR_4->multicast_query_timer, VAR_3,
      (unsigned long)VAR_4);
 FUNC_0();
}
