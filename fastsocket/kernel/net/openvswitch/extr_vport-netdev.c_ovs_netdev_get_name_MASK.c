
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {int dummy; } ;
struct netdev_vport {TYPE_1__* dev; } ;
struct TYPE_2__ {char const* name; } ;


 struct netdev_vport* FUNC_0 (struct vport const*) ;

const char *FUNC_1(const struct vport *VAR_0)
{
 const struct netdev_vport *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->dev->name;
}
