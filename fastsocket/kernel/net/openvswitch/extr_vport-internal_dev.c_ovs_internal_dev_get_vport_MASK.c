
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct vport* vport; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

struct vport *FUNC_2(struct net_device *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return ((void*)0);

 return FUNC_0(VAR_0)->vport;
}
