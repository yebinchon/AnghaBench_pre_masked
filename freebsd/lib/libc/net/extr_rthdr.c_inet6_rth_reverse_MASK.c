
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_len; int ip6r0_segleft; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;



 int FUNC_0 (void*,void*,int) ;

int
FUNC_1(const void *VAR_0, void *VAR_1)
{
 struct ip6_rthdr *VAR_2 = (struct ip6_rthdr *)VAR_0;
 struct ip6_rthdr0 *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 switch (VAR_2->ip6r_type) {
 case 128:
  VAR_3 = (struct ip6_rthdr0 *)VAR_0;
  VAR_4 = (struct ip6_rthdr0 *)VAR_1;


  if (VAR_3->ip6r0_len % 2)
   return (-1);
  VAR_6 = VAR_3->ip6r0_len / 2;


  FUNC_0((void *)VAR_4, (void *)VAR_3,
   ((VAR_3->ip6r0_len) + 1) << 3);
  VAR_4->ip6r0_segleft = VAR_6;


  for (VAR_5 = 0; VAR_5 < VAR_6 / 2; VAR_5++) {
   struct in6_addr VAR_7, *VAR_8, *VAR_9;

   VAR_8 = (struct in6_addr *)(VAR_4 + 1) + VAR_5;
   VAR_9 = (struct in6_addr *)(VAR_4 + 1) +
    (VAR_6 - VAR_5 - 1);
   VAR_7 = *VAR_8;
   *VAR_8 = *VAR_9;
   *VAR_9 = VAR_7;
  }

  break;
 default:
  return (-1);
 }

 return (0);
}
