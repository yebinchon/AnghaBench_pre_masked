
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_len; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;
struct cmsghdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct cmsghdr const*) ;


int
FUNC_1(const struct cmsghdr *VAR_0)
{
 struct ip6_rthdr *VAR_1;

 VAR_1 = (struct ip6_rthdr *)FUNC_0(VAR_0);

 switch (VAR_1->ip6r_type) {
 case 128:
 {
  struct ip6_rthdr0 *VAR_2 = (struct ip6_rthdr0 *)VAR_1;

  if (VAR_2->ip6r0_len % 2 || 46 < VAR_2->ip6r0_len)
   return (-1);

  return (VAR_2->ip6r0_len * 8) / sizeof(struct in6_addr);
 }

 default:
  return (-1);
 }
}
