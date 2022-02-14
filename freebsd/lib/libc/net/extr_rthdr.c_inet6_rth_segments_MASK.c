
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_len; int ip6r0_segleft; } ;
struct ip6_rthdr {int ip6r_type; } ;




int
FUNC_0(const void *VAR_0)
{
 struct ip6_rthdr *VAR_1 = (struct ip6_rthdr *)VAR_0;
 struct ip6_rthdr0 *VAR_2;
 int VAR_3;

 switch (VAR_1->ip6r_type) {
 case 128:
  VAR_2 = (struct ip6_rthdr0 *)VAR_0;





  if ((VAR_2->ip6r0_len % 2) != 0 ||
      (VAR_3 = (VAR_2->ip6r0_len >> 1)) < VAR_2->ip6r0_segleft)
   return (-1);

  return (VAR_3);
 default:
  return (-1);
 }
}
