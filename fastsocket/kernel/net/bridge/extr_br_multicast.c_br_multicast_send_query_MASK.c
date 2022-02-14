
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_bridge_port {int multicast_query_timer; } ;
struct net_bridge {scalar_t__ multicast_startup_query_count; int multicast_query_timer; scalar_t__ multicast_query_interval; scalar_t__ multicast_startup_query_interval; int multicast_querier_timer; int multicast_querier; scalar_t__ multicast_disabled; int dev; } ;
struct br_ip {void* proto; int u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,struct br_ip*) ;
 void* FUNC_1 (int ) ;
 unsigned long VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_bridge *VAR_3,
        struct net_bridge_port *VAR_4, u32 VAR_5)
{
 unsigned long VAR_6;
 struct br_ip VAR_7;

 if (!FUNC_4(VAR_3->dev) || VAR_3->multicast_disabled ||
     !VAR_3->multicast_querier ||
     FUNC_5(&VAR_3->multicast_querier_timer))
  return;

 FUNC_2(&VAR_7.u, 0, sizeof(VAR_7.u));

 VAR_7.proto = FUNC_1(VAR_0);
 FUNC_0(VAR_3, VAR_4, &VAR_7);






 VAR_6 = VAR_2;
 VAR_6 += VAR_5 < VAR_3->multicast_startup_query_count ?
  VAR_3->multicast_startup_query_interval :
  VAR_3->multicast_query_interval;
 FUNC_3(VAR_4 ? &VAR_4->multicast_query_timer :
    &VAR_3->multicast_query_timer, VAR_6);
}
