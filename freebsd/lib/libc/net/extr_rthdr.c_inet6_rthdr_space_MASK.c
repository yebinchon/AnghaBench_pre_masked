
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int dummy; } ;
struct in6_addr {int dummy; } ;


 size_t FUNC_0 (int) ;


size_t
FUNC_1(int VAR_0, int VAR_1)
{
 switch (VAR_0) {
 case 128:
  if (VAR_1 < 1 || VAR_1 > 23)
   return (0);




  return (FUNC_0(sizeof(struct in6_addr) * VAR_1 +
      sizeof(struct ip6_rthdr0)));

 default:
  return (0);
 }
}
