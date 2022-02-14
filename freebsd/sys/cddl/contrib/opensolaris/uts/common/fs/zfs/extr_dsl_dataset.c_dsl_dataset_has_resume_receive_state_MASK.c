
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ds_object; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_7__ {TYPE_1__* dd_pool; } ;
struct TYPE_6__ {int dp_meta_objset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

boolean_t
FUNC_2(dsl_dataset_t *VAR_1)
{
 return (FUNC_0(VAR_1) &&
     FUNC_1(VAR_1->ds_dir->dd_pool->dp_meta_objset,
     VAR_1->ds_object, VAR_0) == 0);
}
