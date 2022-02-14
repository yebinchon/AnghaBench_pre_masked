
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct rt6_info* rt6_next; } ;
struct TYPE_7__ {TYPE_1__ dst; } ;
struct rt6_info {TYPE_4__* rt6i_idev; struct net_device* rt6i_dev; TYPE_2__ u; } ;
struct net_device {int ifindex; int flags; } ;
struct TYPE_10__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_5__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct TYPE_9__ {TYPE_3__* dev; } ;
struct TYPE_8__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct net*,struct in6_addr*,struct net_device*,int) ;

__attribute__((used)) static inline struct rt6_info *FUNC_2(struct net *VAR_2,
          struct rt6_info *VAR_3,
          struct in6_addr *VAR_4,
          int VAR_5,
          int VAR_6)
{
 struct rt6_info *VAR_7 = ((void*)0);
 struct rt6_info *VAR_8;

 if (!VAR_5 && FUNC_0(VAR_4))
  goto out;

 for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->u.dst.rt6_next) {
  struct net_device *VAR_9 = VAR_8->rt6i_dev;

  if (VAR_5) {
   if (VAR_9->ifindex == VAR_5)
    return VAR_8;
   if (VAR_9->flags & VAR_0) {
    if (VAR_8->rt6i_idev == ((void*)0) ||
        VAR_8->rt6i_idev->dev->ifindex != VAR_5) {
     if (VAR_6 & VAR_1 && VAR_5)
      continue;
     if (VAR_7 && (!VAR_5 ||
            VAR_7->rt6i_idev->dev->ifindex == VAR_5))
      continue;
    }
    VAR_7 = VAR_8;
   }
  } else {
   if (FUNC_1(VAR_2, VAR_4, VAR_9,
       VAR_6 & VAR_1))
    return VAR_8;
  }
 }

 if (VAR_5) {
  if (VAR_7)
   return VAR_7;

  if (VAR_6 & VAR_1)
   return VAR_2->ipv6.ip6_null_entry;
 }
out:
 return VAR_3;
}
