
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
typedef TYPE_1__* devclass_t ;
struct TYPE_3__ {struct sysctl_oid* sysctl_tree; } ;



struct sysctl_oid *
FUNC_0(devclass_t VAR_0)
{
 return (VAR_0->sysctl_tree);
}
