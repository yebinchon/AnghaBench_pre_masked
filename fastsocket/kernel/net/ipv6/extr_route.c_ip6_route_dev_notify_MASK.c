
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct notifier_block {int dummy; } ;
struct net_device {int flags; } ;
struct TYPE_11__ {TYPE_9__* ip6_blk_hole_entry; TYPE_6__* ip6_prohibit_entry; TYPE_3__* ip6_null_entry; } ;
struct net {TYPE_10__ ipv6; } ;
struct TYPE_18__ {struct net_device* dev; } ;
struct TYPE_19__ {TYPE_7__ dst; } ;
struct TYPE_20__ {void* rt6i_idev; TYPE_8__ u; } ;
struct TYPE_15__ {struct net_device* dev; } ;
struct TYPE_16__ {TYPE_4__ dst; } ;
struct TYPE_17__ {void* rt6i_idev; TYPE_5__ u; } ;
struct TYPE_12__ {struct net_device* dev; } ;
struct TYPE_13__ {TYPE_1__ dst; } ;
struct TYPE_14__ {void* rt6i_idev; TYPE_2__ u; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3,
    unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = (struct net_device *)VAR_5;
 struct net *VAR_7 = FUNC_0(VAR_6);

 if (VAR_4 == VAR_1 && (VAR_6->flags & VAR_0)) {
  VAR_7->ipv6.ip6_null_entry->u.dst.dev = VAR_6;
  VAR_7->ipv6.ip6_null_entry->rt6i_idev = FUNC_1(VAR_6);






 }

 return VAR_2;
}
