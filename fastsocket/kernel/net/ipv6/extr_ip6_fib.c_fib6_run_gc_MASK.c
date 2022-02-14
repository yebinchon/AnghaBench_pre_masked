
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ip6_rt_gc_interval; } ;
struct TYPE_5__ {int ip6_fib_timer; TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct TYPE_6__ {int timeout; scalar_t__ more; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct net*,int ,int ,int *) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(unsigned long VAR_5, struct net *VAR_6, bool VAR_7)
{
 if (VAR_7) {
  FUNC_5(&VAR_2);
 } else if (!FUNC_6(&VAR_2)) {
  FUNC_3(&VAR_6->ipv6.ip6_fib_timer, VAR_4 + VAR_0);
  return;
 }
 VAR_3.timeout = VAR_5 ? (int)VAR_5 :
     VAR_6->ipv6.sysctl.ip6_rt_gc_interval;

 VAR_3.more = FUNC_2();

 FUNC_1(VAR_6, VAR_1, 0, ((void*)0));

 if (VAR_3.more)
  FUNC_3(&VAR_6->ipv6.ip6_fib_timer,
     FUNC_4(VAR_4
     + VAR_6->ipv6.sysctl.ip6_rt_gc_interval));
 else
  FUNC_0(&VAR_6->ipv6.ip6_fib_timer);
 FUNC_7(&VAR_2);
}
