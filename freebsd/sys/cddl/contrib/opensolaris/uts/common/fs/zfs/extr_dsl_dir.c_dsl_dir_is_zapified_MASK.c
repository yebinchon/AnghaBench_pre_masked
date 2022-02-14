
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dd_dbuf; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_6__ {scalar_t__ doi_type; } ;
typedef TYPE_2__ dmu_object_info_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;

boolean_t
FUNC_1(dsl_dir_t *VAR_1)
{
 dmu_object_info_t VAR_2;

 FUNC_0(VAR_1->dd_dbuf, &VAR_2);
 return (VAR_2.doi_type == VAR_0);
}
