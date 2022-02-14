
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ds_userrefs; TYPE_2__* ds_dir; int ds_is_snapshot; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int ds_num_children; } ;
struct TYPE_9__ {TYPE_1__* dd_pool; } ;
struct TYPE_8__ {int dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_5__* FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(dsl_dataset_t *VAR_5, boolean_t VAR_6)
{
 if (!VAR_5->ds_is_snapshot)
  return (FUNC_0(VAR_2));

 if (FUNC_1(VAR_5))
  return (FUNC_0(VAR_0));





 if (VAR_6) {
  if (FUNC_3(VAR_5->ds_dir->dd_pool->dp_spa) <
      VAR_4)
   return (FUNC_0(VAR_3));
  return (0);
 }





 if (VAR_5->ds_userrefs > 0)
  return (FUNC_0(VAR_0));




 if (FUNC_2(VAR_5)->ds_num_children > 1)
  return (FUNC_0(VAR_1));

 return (0);
}
