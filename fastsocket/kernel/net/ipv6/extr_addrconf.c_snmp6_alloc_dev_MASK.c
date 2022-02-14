
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipstats_mib {int dummy; } ;
struct TYPE_2__ {scalar_t__ ipv6; scalar_t__ icmpv6; scalar_t__ icmpv6msg; } ;
struct inet6_dev {TYPE_1__ stats; } ;
struct icmpv6msg_mib {int dummy; } ;
struct icmpv6_mib {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 scalar_t__ FUNC_1 (void**,int) ;

__attribute__((used)) static int FUNC_2(struct inet6_dev *VAR_1)
{
 if (FUNC_1((void **)VAR_1->stats.ipv6,
     sizeof(struct ipstats_mib)) < 0)
  goto err_ip;
 if (FUNC_1((void **)VAR_1->stats.icmpv6,
     sizeof(struct icmpv6_mib)) < 0)
  goto err_icmp;
 if (FUNC_1((void **)VAR_1->stats.icmpv6msg,
     sizeof(struct icmpv6msg_mib)) < 0)
  goto err_icmpmsg;

 return 0;

err_icmpmsg:
 FUNC_0((void **)VAR_1->stats.icmpv6);
err_icmp:
 FUNC_0((void **)VAR_1->stats.ipv6);
err_ip:
 return -VAR_0;
}
