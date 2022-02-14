
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_segleft; int* ip6r0_slmap; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct cmsghdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;


int
FUNC_1(struct cmsghdr *VAR_2, unsigned int VAR_3)
{
 struct ip6_rthdr *VAR_4;

 VAR_4 = (struct ip6_rthdr *)FUNC_0(VAR_2);

 switch (VAR_4->ip6r_type) {
 case 128:
 {
  struct ip6_rthdr0 *VAR_5 = (struct ip6_rthdr0 *)VAR_4;




  if (VAR_5->ip6r0_segleft > 23)
   return (-1);
  if (VAR_3 != VAR_0)
   return (-1);

  break;
 }
 default:
  return (-1);
 }

 return (0);
}
