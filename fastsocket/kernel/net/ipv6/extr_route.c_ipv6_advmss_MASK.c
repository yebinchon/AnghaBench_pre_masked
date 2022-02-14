
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct TYPE_3__ {unsigned int ip6_rt_min_advmss; } ;
struct TYPE_4__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct net *VAR_1, unsigned int VAR_2)
{
 VAR_2 -= sizeof(struct ipv6hdr) + sizeof(struct tcphdr);

 if (VAR_2 < VAR_1->ipv6.sysctl.ip6_rt_min_advmss)
  VAR_2 = VAR_1->ipv6.sysctl.ip6_rt_min_advmss;







 if (VAR_2 > VAR_0 - sizeof(struct tcphdr))
  VAR_2 = VAR_0;
 return VAR_2;
}
