
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neighbour {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,struct neighbour*,struct in6_addr const*,struct in6_addr const*,struct icmp6hdr*,struct in6_addr const*,int ) ;
 int FUNC_1 (struct in6_addr const*) ;
 scalar_t__ FUNC_2 (struct net_device*,struct in6_addr*,int) ;

void FUNC_3(struct net_device *VAR_4, struct neighbour *VAR_5,
     const struct in6_addr *VAR_6,
     const struct in6_addr *VAR_7, const struct in6_addr *VAR_8)
{
 struct in6_addr VAR_9;
 struct icmp6hdr VAR_10 = {
  .icmp6_type = VAR_2,
 };

 if (VAR_8 == ((void*)0)) {
  if (FUNC_2(VAR_4, &VAR_9,
       (VAR_1|VAR_0)))
   return;
  VAR_8 = &VAR_9;
 }

 FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8,
       &VAR_10, VAR_6,
       !FUNC_1(VAR_8) ? VAR_3 : 0);
}
