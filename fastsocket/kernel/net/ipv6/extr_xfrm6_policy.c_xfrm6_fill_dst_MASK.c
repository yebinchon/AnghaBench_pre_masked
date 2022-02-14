
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int rt6i_flags; int rt6i_src; int rt6i_dst; int rt6i_gateway; TYPE_2__* rt6i_node; int rt6i_metric; int rt6i_idev; } ;
struct TYPE_5__ {struct net_device* dev; } ;
struct TYPE_8__ {TYPE_3__ rt6; TYPE_1__ dst; } ;
struct xfrm_dst {TYPE_4__ u; int route_cookie; scalar_t__ route; } ;
struct rt6_info {int rt6i_flags; int rt6i_src; int rt6i_dst; int rt6i_gateway; TYPE_2__* rt6i_node; int rt6i_metric; } ;
struct net_device {int dummy; } ;
struct flowi {int dummy; } ;
struct TYPE_6__ {int fn_sernum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct xfrm_dst *VAR_3, struct net_device *VAR_4,
     struct flowi *VAR_5)
{
 struct rt6_info *VAR_6 = (struct rt6_info*)VAR_3->route;

 VAR_3->u.dst.dev = VAR_4;
 FUNC_0(VAR_4);

 VAR_3->u.rt6.rt6i_idev = FUNC_1(VAR_4);
 if (!VAR_3->u.rt6.rt6i_idev)
  return -VAR_0;



 VAR_3->u.rt6.rt6i_flags = VAR_6->rt6i_flags & (VAR_1 |
         VAR_2);
 VAR_3->u.rt6.rt6i_metric = VAR_6->rt6i_metric;
 VAR_3->u.rt6.rt6i_node = VAR_6->rt6i_node;
 if (VAR_6->rt6i_node)
  VAR_3->route_cookie = VAR_6->rt6i_node->fn_sernum;
 VAR_3->u.rt6.rt6i_gateway = VAR_6->rt6i_gateway;
 VAR_3->u.rt6.rt6i_dst = VAR_6->rt6i_dst;
 VAR_3->u.rt6.rt6i_src = VAR_6->rt6i_src;

 return 0;
}
