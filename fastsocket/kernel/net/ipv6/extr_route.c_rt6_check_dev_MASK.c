
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt6_info {TYPE_2__* rt6i_idev; struct net_device* rt6i_dev; } ;
struct net_device {int ifindex; int flags; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct rt6_info *VAR_1, int VAR_2)
{
 struct net_device *VAR_3 = VAR_1->rt6i_dev;
 if (!VAR_2 || VAR_3->ifindex == VAR_2)
  return 2;
 if ((VAR_3->flags & VAR_0) &&
     VAR_1->rt6i_idev && VAR_1->rt6i_idev->dev->ifindex == VAR_2)
  return 1;
 return 0;
}
