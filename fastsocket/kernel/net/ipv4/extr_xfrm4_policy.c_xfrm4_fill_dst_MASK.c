
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flowi {int dummy; } ;
struct TYPE_7__ {int rt_flags; int rt_spec_dst; int rt_gateway; int rt_dst; int rt_src; int rt_type; TYPE_2__* peer; int idev; struct flowi fl; } ;
struct TYPE_5__ {struct net_device* dev; } ;
struct TYPE_8__ {TYPE_3__ rt; TYPE_1__ dst; } ;
struct xfrm_dst {TYPE_4__ u; scalar_t__ route; } ;
struct rtable {int rt_flags; int rt_spec_dst; int rt_gateway; int rt_dst; int rt_src; int rt_type; TYPE_2__* peer; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct xfrm_dst *VAR_4, struct net_device *VAR_5,
     struct flowi *VAR_6)
{
 struct rtable *VAR_7 = (struct rtable *)VAR_4->route;

 VAR_4->u.rt.fl = *VAR_6;

 VAR_4->u.dst.dev = VAR_5;
 FUNC_1(VAR_5);

 VAR_4->u.rt.idev = FUNC_2(VAR_5);
 if (!VAR_4->u.rt.idev)
  return -VAR_0;

 VAR_4->u.rt.peer = VAR_7->peer;
 if (VAR_7->peer)
  FUNC_0(&VAR_7->peer->refcnt);



 VAR_4->u.rt.rt_flags = VAR_7->rt_flags & (VAR_1 | VAR_3 |
           VAR_2);
 VAR_4->u.rt.rt_type = VAR_7->rt_type;
 VAR_4->u.rt.rt_src = VAR_7->rt_src;
 VAR_4->u.rt.rt_dst = VAR_7->rt_dst;
 VAR_4->u.rt.rt_gateway = VAR_7->rt_gateway;
 VAR_4->u.rt.rt_spec_dst = VAR_7->rt_spec_dst;

 return 0;
}
