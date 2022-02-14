
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ipv6; scalar_t__ icmpv6; scalar_t__ icmpv6msg; } ;
struct inet6_dev {TYPE_1__ stats; } ;


 int FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1(struct inet6_dev *VAR_0)
{
 FUNC_0((void **)VAR_0->stats.icmpv6msg);
 FUNC_0((void **)VAR_0->stats.icmpv6);
 FUNC_0((void **)VAR_0->stats.ipv6);
}
