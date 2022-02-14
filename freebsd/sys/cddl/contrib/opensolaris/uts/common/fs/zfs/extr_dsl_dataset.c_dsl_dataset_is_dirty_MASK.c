
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_7__ {TYPE_1__* dd_pool; } ;
struct TYPE_6__ {int dp_dirty_datasets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*,int) ;

boolean_t
FUNC_1(dsl_dataset_t *VAR_3)
{
 for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (FUNC_0(&VAR_3->ds_dir->dd_pool->dp_dirty_datasets,
      VAR_3, VAR_4))
   return (VAR_1);
 }
 return (VAR_0);
}
