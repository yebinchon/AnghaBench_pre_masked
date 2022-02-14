
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rt6_stats; int fib_table_hash; int fib6_main_tbl; int fib6_local_tbl; int ip6_fib_timer; } ;
struct net {TYPE_1__ ipv6; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net*,int *) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_0)
{
 FUNC_2(VAR_0, ((void*)0));
 FUNC_0(&VAR_0->ipv6.ip6_fib_timer);




 FUNC_1(VAR_0->ipv6.fib6_main_tbl);
 FUNC_1(VAR_0->ipv6.fib_table_hash);
 FUNC_1(VAR_0->ipv6.rt6_stats);
}
