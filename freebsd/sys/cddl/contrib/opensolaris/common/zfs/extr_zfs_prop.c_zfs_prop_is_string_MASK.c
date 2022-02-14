
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t zfs_prop_t ;
struct TYPE_2__ {scalar_t__ pd_proptype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(zfs_prop_t VAR_3)
{
 return (VAR_2[VAR_3].pd_proptype == VAR_1 ||
     VAR_2[VAR_3].pd_proptype == VAR_0);
}
