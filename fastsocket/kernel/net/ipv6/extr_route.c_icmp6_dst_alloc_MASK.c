
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dst_entry {int* metrics; struct dst_entry* next; int flags; int output; int __refcnt; } ;
struct TYPE_6__ {struct dst_entry dst; } ;
struct TYPE_5__ {int plen; int addr; } ;
struct rt6_info {TYPE_3__ u; TYPE_2__ rt6i_dst; struct net_device* rt6i_dev; struct neighbour* rt6i_nexthop; struct inet6_dev* rt6i_idev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int ip6_dst_ops; } ;
struct net {TYPE_1__ ipv6; } ;
struct neighbour {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct net_device*) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct net*) ;
 struct dst_entry* VAR_5 ;
 int VAR_6 ;
 struct inet6_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct inet6_dev*) ;
 struct rt6_info* FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 (int *,struct in6_addr const*) ;
 int FUNC_10 (struct in6_addr const*) ;
 int FUNC_11 (struct net*,int ) ;
 int FUNC_12 (struct net_device*) ;
 struct neighbour* FUNC_13 (struct net_device*,struct in6_addr const*) ;
 int FUNC_14 (struct neighbour*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;

struct dst_entry *FUNC_18(struct net_device *VAR_8,
      struct neighbour *VAR_9,
      const struct in6_addr *VAR_10)
{
 struct rt6_info *VAR_11;
 struct inet6_dev *VAR_12 = FUNC_6(VAR_8);
 struct net *VAR_13 = FUNC_3(VAR_8);

 if (FUNC_17(VAR_12 == ((void*)0)))
  return ((void*)0);

 VAR_11 = FUNC_8(&VAR_13->ipv6.ip6_dst_ops);
 if (FUNC_17(VAR_11 == ((void*)0))) {
  FUNC_7(VAR_12);
  goto out;
 }

 FUNC_2(VAR_8);
 if (VAR_9)
  FUNC_14(VAR_9);
 else {
  VAR_9 = FUNC_13(VAR_8, VAR_10);
  if (FUNC_0(VAR_9))
   VAR_9 = ((void*)0);
 }

 VAR_11->rt6i_dev = VAR_8;
 VAR_11->rt6i_idev = VAR_12;
 VAR_11->rt6i_nexthop = VAR_9;
 FUNC_1(&VAR_11->u.dst.__refcnt, 1);
 VAR_11->u.dst.metrics[VAR_3-1] = 255;
 VAR_11->u.dst.metrics[VAR_4-1] = FUNC_12(VAR_11->rt6i_dev);
 VAR_11->u.dst.metrics[VAR_2-1] = FUNC_11(VAR_13, FUNC_4(&VAR_11->u.dst));
 VAR_11->u.dst.output = VAR_7;
 FUNC_15(&VAR_6);
 VAR_11->u.dst.next = VAR_5;
 VAR_5 = &VAR_11->u.dst;
 FUNC_16(&VAR_6);

 FUNC_5(VAR_13);

out:
 return &VAR_11->u.dst;
}
