
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct neighbour {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int dummy; } ;


 struct sk_buff* FUNC_0 (struct net_device*,struct in6_addr const*,struct in6_addr const*,struct icmp6hdr*,struct in6_addr const*,int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,struct neighbour*,struct in6_addr const*,struct in6_addr const*,struct icmp6hdr*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct neighbour *VAR_1,
    const struct in6_addr *VAR_2,
    const struct in6_addr *VAR_3,
    struct icmp6hdr *VAR_4, const struct in6_addr *VAR_5,
    int VAR_6)
{
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  return;

 FUNC_1(VAR_7, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
