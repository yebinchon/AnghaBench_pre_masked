
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_len; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;
struct cmsghdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;


struct in6_addr *
FUNC_1(struct cmsghdr *VAR_0, int VAR_1)
{
 struct ip6_rthdr *VAR_2;

 VAR_2 = (struct ip6_rthdr *)FUNC_0(VAR_0);

 switch (VAR_2->ip6r_type) {
 case 128:
 {
  struct ip6_rthdr0 *VAR_3 = (struct ip6_rthdr0 *)VAR_2;
  int VAR_4;

  if (VAR_3->ip6r0_len % 2 || 46 < VAR_3->ip6r0_len)
   return ((void*)0);
  VAR_4 = (VAR_3->ip6r0_len * 8) / sizeof(struct in6_addr);
  if (VAR_1 <= 0 || VAR_4 < VAR_1)
   return ((void*)0);



  return (((struct in6_addr *)(VAR_3 + 1)) + VAR_1);

 }

 default:
  return ((void*)0);
 }
}
