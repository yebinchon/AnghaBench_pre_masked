
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int ip6r0_len; int ip6r0_type; int ip6r0_reserved; int ip6r0_segleft; } ;
struct ip6_rthdr {int dummy; } ;
typedef int socklen_t ;



 int FUNC_0 (int const,int) ;
 int FUNC_1 (void*,int ,int ) ;

void *
FUNC_2(void *VAR_0, socklen_t VAR_1, int VAR_2, int VAR_3)
{
 struct ip6_rthdr *VAR_4 = (struct ip6_rthdr *)VAR_0;
 struct ip6_rthdr0 *VAR_5;

 switch (VAR_2) {
 case 128:

  if (VAR_1 < FUNC_0(128, VAR_3))
   return (((void*)0));

  if ((VAR_3 < 0) || (VAR_3 > 127))
   return (((void*)0));

  FUNC_1(VAR_0, 0, VAR_1);
  VAR_5 = (struct ip6_rthdr0 *)VAR_4;
  VAR_5->ip6r0_len = VAR_3 * 2;
  VAR_5->ip6r0_type = 128;
  VAR_5->ip6r0_segleft = 0;
  VAR_5->ip6r0_reserved = 0;
  break;
 default:
  return (((void*)0));
 }

 return (VAR_0);
}
