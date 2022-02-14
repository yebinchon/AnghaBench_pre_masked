
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neighbour {int dummy; } ;
struct inet6_ifaddr {int flags; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_router; int icmp6_solicited; int icmp6_override; int icmp6_type; } ;
struct TYPE_8__ {int srcprefs; } ;
struct TYPE_6__ {int ndisc_sk; } ;
struct TYPE_7__ {TYPE_1__ ipv6; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct neighbour*,struct in6_addr const*,struct in6_addr const*,struct icmp6hdr*,struct in6_addr const*,int ) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 TYPE_4__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct net_device*,struct in6_addr const*,int ,struct in6_addr*) ;
 struct inet6_ifaddr* FUNC_5 (TYPE_2__*,struct in6_addr const*,struct net_device*,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3, struct neighbour *VAR_4,
     const struct in6_addr *VAR_5,
     const struct in6_addr *VAR_6,
     int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 struct in6_addr VAR_11;
 struct inet6_ifaddr *VAR_12;
 const struct in6_addr *VAR_13;
 struct icmp6hdr VAR_14 = {
  .icmp6_type = VAR_1,
 };


 VAR_12 = FUNC_5(FUNC_1(VAR_3), VAR_6, VAR_3, 1);
 if (VAR_12) {
  VAR_13 = VAR_6;
  if (VAR_12->flags & VAR_0)
   VAR_9 = 0;
  FUNC_2(VAR_12);
 } else {
  if (FUNC_4(FUNC_1(VAR_3), VAR_3, VAR_5,
           FUNC_3(FUNC_1(VAR_3)->ipv6.ndisc_sk)->srcprefs,
           &VAR_11))
   return;
  VAR_13 = &VAR_11;
 }

 VAR_14.icmp6_router = VAR_7;
 VAR_14.icmp6_solicited = VAR_8;
 VAR_14.icmp6_override = VAR_9;

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_13,
       &VAR_14, VAR_6,
       VAR_10 ? VAR_2 : 0);
}
