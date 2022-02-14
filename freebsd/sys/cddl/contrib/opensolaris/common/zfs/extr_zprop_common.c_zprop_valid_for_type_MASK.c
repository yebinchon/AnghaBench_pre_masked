
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pd_types; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef int zfs_type_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;

boolean_t
FUNC_3(int VAR_3, zfs_type_t VAR_4)
{
 zprop_desc_t *VAR_5;

 if (VAR_3 == VAR_2 || VAR_3 == VAR_1)
  return (VAR_0);

 FUNC_0(VAR_3 < FUNC_1(VAR_4));
 VAR_5 = FUNC_2(VAR_4);
 return ((VAR_5[VAR_3].pd_types & VAR_4) != 0);
}
