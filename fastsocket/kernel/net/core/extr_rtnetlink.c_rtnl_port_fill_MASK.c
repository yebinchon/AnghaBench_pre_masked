
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_2__ dev; TYPE_1__* netdev_ops; } ;
struct TYPE_3__ {int ndo_get_vf_port; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->netdev_ops->ndo_get_vf_port || !VAR_1->dev.parent)
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (FUNC_0(VAR_1->dev.parent)) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
