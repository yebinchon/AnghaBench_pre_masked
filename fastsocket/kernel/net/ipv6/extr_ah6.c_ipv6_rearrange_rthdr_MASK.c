
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt0_hdr {struct in6_addr* addr; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {struct in6_addr daddr; } ;
struct ipv6_rt_hdr {int segments_left; int hdrlen; } ;


 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*,struct in6_addr*,int) ;

__attribute__((used)) static void FUNC_2(struct ipv6hdr *VAR_0, struct ipv6_rt_hdr *VAR_1)
{
 int VAR_2, VAR_3;
 struct in6_addr *VAR_4;
 struct in6_addr VAR_5;

 VAR_3 = VAR_1->segments_left;
 if (VAR_3 == 0)
  return;
 VAR_1->segments_left = 0;
 VAR_2 = VAR_1->hdrlen >> 1;

 VAR_4 = ((struct rt0_hdr *)VAR_1)->addr;
 FUNC_0(&VAR_5, VAR_4 + VAR_2 - 1);

 VAR_4 += VAR_2 - VAR_3;
 FUNC_1(VAR_4 + 1, VAR_4, (VAR_3 - 1) * sizeof(*VAR_4));

 FUNC_0(VAR_4, &VAR_0->daddr);
 FUNC_0(&VAR_0->daddr, &VAR_5);
}
