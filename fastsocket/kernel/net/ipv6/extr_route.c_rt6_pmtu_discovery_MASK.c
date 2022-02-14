
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_11__ {scalar_t__* metrics; } ;
struct TYPE_10__ {TYPE_4__ dst; } ;
struct rt6_info {int rt6i_flags; TYPE_3__ u; int rt6i_nexthop; } ;
struct net_device {int ifindex; } ;
struct TYPE_8__ {int ip6_rt_mtu_expires; } ;
struct TYPE_9__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct rt6_info*) ;
 struct rt6_info* FUNC_6 (struct rt6_info*,struct in6_addr*) ;
 struct rt6_info* FUNC_7 (struct rt6_info*,struct in6_addr*,struct in6_addr*) ;
 struct rt6_info* FUNC_8 (struct net*,struct in6_addr*,struct in6_addr*,int ,int ) ;

void FUNC_9(struct in6_addr *VAR_9, struct in6_addr *VAR_10,
   struct net_device *VAR_11, u32 VAR_12)
{
 struct rt6_info *VAR_13, *VAR_14;
 struct net *VAR_15 = FUNC_0(VAR_11);
 int VAR_16 = 0;

 VAR_13 = FUNC_8(VAR_15, VAR_9, VAR_10, VAR_11->ifindex, 0);
 if (VAR_13 == ((void*)0))
  return;

 if (VAR_12 >= FUNC_2(&VAR_13->u.dst))
  goto out;

 if (VAR_12 < VAR_0) {






  VAR_12 = VAR_0;
  VAR_16 = 1;
 }





 FUNC_1(&VAR_13->u.dst);






 if (VAR_13->rt6i_flags & VAR_4) {
  VAR_13->u.dst.metrics[VAR_3-1] = VAR_12;
  if (VAR_16)
   VAR_13->u.dst.metrics[VAR_1-1] |= VAR_2;
  FUNC_4(&VAR_13->u.dst, VAR_15->ipv6.sysctl.ip6_rt_mtu_expires);
  VAR_13->rt6i_flags |= VAR_7|VAR_6;
  goto out;
 }






 if (!VAR_13->rt6i_nexthop && !(VAR_13->rt6i_flags & VAR_8))
  VAR_14 = FUNC_7(VAR_13, VAR_9, VAR_10);
 else
  VAR_14 = FUNC_6(VAR_13, VAR_9);

 if (VAR_14) {
  VAR_14->u.dst.metrics[VAR_3-1] = VAR_12;
  if (VAR_16)
   VAR_14->u.dst.metrics[VAR_1-1] |= VAR_2;







  FUNC_4(&VAR_14->u.dst, VAR_15->ipv6.sysctl.ip6_rt_mtu_expires);
  VAR_14->rt6i_flags |= VAR_5|VAR_6;

  FUNC_5(VAR_14);
 }
out:
 FUNC_3(&VAR_13->u.dst);
}
