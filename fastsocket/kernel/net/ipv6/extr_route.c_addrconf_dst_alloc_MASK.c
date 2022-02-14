
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int* metrics; int obsolete; int __refcnt; int output; int input; int flags; } ;
struct TYPE_8__ {TYPE_4__ dst; } ;
struct TYPE_7__ {int plen; int addr; } ;
struct rt6_info {int rt6i_flags; TYPE_3__ u; int rt6i_table; TYPE_2__ rt6i_dst; struct neighbour* rt6i_nexthop; int rt6i_gateway; int rt6i_dev; struct inet6_dev* rt6i_idev; } ;
struct TYPE_6__ {int ip6_dst_ops; } ;
struct net {int loopback_dev; TYPE_1__ ipv6; } ;
struct neighbour {int dummy; } ;
struct inet6_dev {int dev; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rt6_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct neighbour*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct net*,int ) ;
 int FUNC_8 (struct inet6_dev*) ;
 struct rt6_info* FUNC_9 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,struct in6_addr const*) ;
 int FUNC_11 (struct net*,int ) ;
 int FUNC_12 (int ) ;
 struct neighbour* FUNC_13 (int ,int *) ;

struct rt6_info *FUNC_14(struct inet6_dev *VAR_12,
        const struct in6_addr *VAR_13,
        int VAR_14)
{
 struct net *VAR_15 = FUNC_4(VAR_12->dev);
 struct rt6_info *VAR_16 = FUNC_9(&VAR_15->ipv6.ip6_dst_ops);
 struct neighbour *VAR_17;

 if (VAR_16 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_3(VAR_15->loopback_dev);
 FUNC_8(VAR_12);

 VAR_16->u.dst.flags = VAR_0;
 VAR_16->u.dst.input = VAR_10;
 VAR_16->u.dst.output = VAR_11;
 VAR_16->rt6i_dev = VAR_15->loopback_dev;
 VAR_16->rt6i_idev = VAR_12;
 VAR_16->u.dst.metrics[VAR_5-1] = FUNC_12(VAR_16->rt6i_dev);
 VAR_16->u.dst.metrics[VAR_3-1] = FUNC_11(VAR_15, FUNC_6(&VAR_16->u.dst));
 VAR_16->u.dst.metrics[VAR_4-1] = -1;
 VAR_16->u.dst.obsolete = -1;

 VAR_16->rt6i_flags = VAR_9 | VAR_8;
 if (VAR_14)
  VAR_16->rt6i_flags |= VAR_6;
 else
  VAR_16->rt6i_flags |= VAR_7;
 VAR_17 = FUNC_13(VAR_16->rt6i_dev, &VAR_16->rt6i_gateway);
 if (FUNC_1(VAR_17)) {
  FUNC_5(&VAR_16->u.dst);






  return (struct rt6_info *) VAR_17;
 }
 VAR_16->rt6i_nexthop = VAR_17;

 FUNC_10(&VAR_16->rt6i_dst.addr, VAR_13);
 VAR_16->rt6i_dst.plen = 128;
 VAR_16->rt6i_table = FUNC_7(VAR_15, VAR_2);

 FUNC_2(&VAR_16->u.dst.__refcnt, 1);

 return VAR_16;
}
