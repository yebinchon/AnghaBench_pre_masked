
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_len; int* ip6r0_slmap; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;
struct cmsghdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct cmsghdr const*) ;
 int VAR_0 ;
 int VAR_1 ;


int
FUNC_1(const struct cmsghdr *VAR_2, int VAR_3)
{
 struct ip6_rthdr *VAR_4;

 VAR_4 = (struct ip6_rthdr *)FUNC_0(VAR_2);

 switch (VAR_4->ip6r_type) {
 case 128:
 {
  struct ip6_rthdr0 *VAR_5 = (struct ip6_rthdr0 *)VAR_4;
  int VAR_6;

  if (VAR_5->ip6r0_len % 2 || 46 < VAR_5->ip6r0_len)
   return (-1);
  VAR_6 = (VAR_5->ip6r0_len * 8) / sizeof(struct in6_addr);
  if (VAR_3 < 0 || VAR_6 < VAR_3)
   return (-1);






  return VAR_0;

 }

 default:
  return (-1);
 }
}
