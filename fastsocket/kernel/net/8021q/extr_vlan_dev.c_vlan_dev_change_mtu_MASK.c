
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_4__ {TYPE_1__* real_dev; } ;
struct TYPE_3__ {int mtu; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2)
{



 if (FUNC_0(VAR_1)->real_dev->mtu < VAR_2)
  return -VAR_0;

 VAR_1->mtu = VAR_2;

 return 0;
}
