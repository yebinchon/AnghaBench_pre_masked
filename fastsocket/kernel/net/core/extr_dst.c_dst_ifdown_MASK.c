
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dst_entry {struct net_device* dev; TYPE_1__* neighbour; int output; int input; TYPE_2__* ops; } ;
struct TYPE_6__ {struct net_device* loopback_dev; } ;
struct TYPE_5__ {int (* ifdown ) (struct dst_entry*,struct net_device*,int) ;} ;
struct TYPE_4__ {struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct dst_entry*,struct net_device*,int) ;

__attribute__((used)) static inline void FUNC_4(struct dst_entry *VAR_1, struct net_device *VAR_2,
         int VAR_3)
{
 if (VAR_1->ops->ifdown)
  VAR_1->ops->ifdown(VAR_1, VAR_2, VAR_3);

 if (VAR_2 != VAR_1->dev)
  return;

 if (!VAR_3) {
  VAR_1->input = VAR_1->output = VAR_0;
 } else {
  VAR_1->dev = FUNC_1(VAR_1->dev)->loopback_dev;
  FUNC_0(VAR_1->dev);
  FUNC_2(VAR_2);
  if (VAR_1->neighbour && VAR_1->neighbour->dev == VAR_2) {
   VAR_1->neighbour->dev = VAR_1->dev;
   FUNC_0(VAR_1->dev);
   FUNC_2(VAR_2);
  }
 }
}
