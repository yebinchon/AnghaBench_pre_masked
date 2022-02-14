
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 TYPE_1__* FUNC_0 (struct net_device const*) ;

struct net_device *FUNC_1(const struct net_device *VAR_0)
{
 return FUNC_0(VAR_0)->real_dev;
}
