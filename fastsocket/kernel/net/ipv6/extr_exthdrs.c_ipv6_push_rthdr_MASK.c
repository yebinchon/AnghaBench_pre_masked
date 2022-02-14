
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int hdrlen; int nexthdr; } ;
struct rt0_hdr {TYPE_1__ rt_hdr; struct rt0_hdr* addr; } ;
struct ipv6_rt_hdr {int dummy; } ;
struct in6_addr {TYPE_1__ rt_hdr; struct in6_addr* addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt0_hdr*,struct rt0_hdr*) ;
 int FUNC_1 (struct rt0_hdr*,struct rt0_hdr*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, u8 *VAR_2,
       struct ipv6_rt_hdr *VAR_3,
       struct in6_addr **VAR_4)
{
 struct rt0_hdr *VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = (struct rt0_hdr *) VAR_3;

 VAR_5 = (struct rt0_hdr *) FUNC_2(VAR_1, (VAR_6->rt_hdr.hdrlen + 1) << 3);
 FUNC_1(VAR_5, VAR_6, sizeof(struct rt0_hdr));

 VAR_7 = VAR_6->rt_hdr.hdrlen >> 1;

 if (VAR_7 > 1)
  FUNC_1(VAR_5->addr, VAR_6->addr + 1,
         (VAR_7 - 1) * sizeof(struct in6_addr));

 FUNC_0(VAR_5->addr + (VAR_7 - 1), *VAR_4);
 *VAR_4 = VAR_6->addr;

 VAR_5->rt_hdr.nexthdr = *VAR_2;
 *VAR_2 = VAR_0;
}
