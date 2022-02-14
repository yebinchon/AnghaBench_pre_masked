
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ds_remap_deadlist; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

boolean_t
FUNC_3(dsl_dataset_t *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->ds_remap_deadlist),
     FUNC_1(VAR_0) != 0);
 return (FUNC_2(&VAR_0->ds_remap_deadlist));
}
