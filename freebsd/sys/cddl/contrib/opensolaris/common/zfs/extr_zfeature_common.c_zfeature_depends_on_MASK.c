
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* fi_depends; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef size_t spa_feature_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

boolean_t
FUNC_0(spa_feature_t VAR_4, spa_feature_t VAR_5)
{
 zfeature_info_t *VAR_6 = &VAR_3[VAR_4];

 for (int VAR_7 = 0; VAR_6->fi_depends[VAR_7] != VAR_2; VAR_7++) {
  if (VAR_6->fi_depends[VAR_7] == VAR_5)
   return (VAR_1);
 }
 return (VAR_0);
}
