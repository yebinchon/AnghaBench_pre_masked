
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ip6_rt_gc_interval; } ;
struct TYPE_4__ {TYPE_1__ sysctl; int ip6_fib_timer; } ;
struct net {TYPE_2__ ipv6; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct net *VAR_1)
{
 if (!FUNC_1(&VAR_1->ipv6.ip6_fib_timer))
  FUNC_0(&VAR_1->ipv6.ip6_fib_timer,
     VAR_0 + VAR_1->ipv6.sysctl.ip6_rt_gc_interval);
}
