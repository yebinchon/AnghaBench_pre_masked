
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_len; int ip6r0_segleft; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;




struct in6_addr *
FUNC_0(const void *VAR_0, int VAR_1)
{
 struct ip6_rthdr *VAR_2 = (struct ip6_rthdr *)VAR_0;
 struct ip6_rthdr0 *VAR_3;
 int VAR_4;

 switch (VAR_2->ip6r_type) {
 case 128:
   VAR_3 = (struct ip6_rthdr0 *)VAR_0;





  if ((VAR_3->ip6r0_len % 2) != 0 ||
      (VAR_4 = (VAR_3->ip6r0_len >> 1)) < VAR_3->ip6r0_segleft)
   return (((void*)0));

  if (VAR_1 < 0 || VAR_4 <= VAR_1)
   return (((void*)0));

  return (((struct in6_addr *)(VAR_3 + 1)) + VAR_1);
 default:
  return (((void*)0));
  break;
 }
}
