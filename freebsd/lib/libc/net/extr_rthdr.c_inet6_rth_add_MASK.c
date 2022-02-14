
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_segleft; int ip6r0_len; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;




int
FUNC_0(void *VAR_0, const struct in6_addr *VAR_1)
{
 struct ip6_rthdr *VAR_2 = (struct ip6_rthdr *)VAR_0;
 struct ip6_rthdr0 *VAR_3;
 struct in6_addr *VAR_4;

 switch (VAR_2->ip6r_type) {
 case 128:
  VAR_3 = (struct ip6_rthdr0 *)VAR_2;

  if (VAR_3->ip6r0_segleft == (VAR_3->ip6r0_len / 2))
   return (-1);
  VAR_4 = (struct in6_addr *)(VAR_3 + 1) + VAR_3->ip6r0_segleft;
  *VAR_4 = *VAR_1;
  VAR_3->ip6r0_segleft++;
  break;
 default:
  return (-1);
 }

 return (0);
}
