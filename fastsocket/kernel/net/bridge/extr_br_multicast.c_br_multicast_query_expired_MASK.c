
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ multicast_startup_queries_sent; scalar_t__ multicast_startup_query_count; int multicast_lock; } ;


 int FUNC_0 (struct net_bridge*,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct net_bridge *VAR_1 = (void *)VAR_0;

 FUNC_1(&VAR_1->multicast_lock);
 if (VAR_1->multicast_startup_queries_sent <
     VAR_1->multicast_startup_query_count)
  VAR_1->multicast_startup_queries_sent++;

 FUNC_0(VAR_1, ((void*)0), VAR_1->multicast_startup_queries_sent);

 FUNC_2(&VAR_1->multicast_lock);
}
