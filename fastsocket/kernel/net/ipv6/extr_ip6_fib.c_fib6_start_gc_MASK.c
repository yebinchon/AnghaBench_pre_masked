
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt6_info {int rt6i_flags; } ;
struct TYPE_3__ {scalar_t__ ip6_rt_gc_interval; } ;
struct TYPE_4__ {TYPE_1__ sysctl; int ip6_fib_timer; } ;
struct net {TYPE_2__ ipv6; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __inline__ void FUNC_2(struct net *VAR_3, struct rt6_info *VAR_4)
{
 if (!FUNC_1(&VAR_3->ipv6.ip6_fib_timer) &&
     (VAR_4->rt6i_flags & (VAR_1|VAR_0)))
  FUNC_0(&VAR_3->ipv6.ip6_fib_timer,
     VAR_2 + VAR_3->ipv6.sysctl.ip6_rt_gc_interval);
}
