
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pd_attr; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef size_t zfs_prop_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

boolean_t
FUNC_0(zfs_prop_t VAR_4)
{
 zprop_desc_t *VAR_5 = &VAR_3[VAR_4];


 if (VAR_4 == VAR_2)
  return (VAR_0);

 return (VAR_5->pd_attr != VAR_1);
}
