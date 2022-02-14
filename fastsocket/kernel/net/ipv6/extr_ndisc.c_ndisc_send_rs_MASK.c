
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; } ;
struct inet6_ifaddr {int flags; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int *,struct in6_addr const*,struct in6_addr const*,struct icmp6hdr*,int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_3 (int ,struct in6_addr const*,struct net_device*,int) ;

void FUNC_4(struct net_device *VAR_3, const struct in6_addr *VAR_4,
     const struct in6_addr *VAR_5)
{
 struct icmp6hdr VAR_6 = {
  .icmp6_type = VAR_1,
 };
 int VAR_7 = VAR_3->addr_len;
 FUNC_0(VAR_3, ((void*)0), VAR_5, VAR_4,
       &VAR_6, ((void*)0),
       VAR_7 ? VAR_2 : 0);
}
