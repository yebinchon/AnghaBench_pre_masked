
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_11__ {scalar_t__ ds_object; TYPE_3__* ds_dir; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_14__ {int ds_creation_txg; } ;
struct TYPE_13__ {int * dd_pool; } ;
struct TYPE_12__ {scalar_t__ dd_origin_obj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int ,TYPE_1__**) ;
 TYPE_6__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;

boolean_t
FUNC_7(dsl_dataset_t *VAR_3, dsl_dataset_t *VAR_4,
    uint64_t VAR_5)
{
 dsl_pool_t *VAR_6 = VAR_3->ds_dir->dd_pool;
 int VAR_7;
 boolean_t VAR_8;

 FUNC_0(FUNC_6(VAR_6));
 FUNC_0(VAR_4->ds_is_snapshot || VAR_5 != 0);

 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_4)->ds_creation_txg;

 if (VAR_3->ds_is_snapshot &&
     VAR_5 >= FUNC_2(VAR_3)->ds_creation_txg)
  return (VAR_0);

 if (VAR_3->ds_dir == VAR_4->ds_dir)
  return (VAR_1);
 if (!FUNC_4(VAR_3->ds_dir))
  return (VAR_0);

 if (FUNC_5(VAR_3->ds_dir)->dd_origin_obj == VAR_4->ds_object)
  return (VAR_1);
 dsl_dataset_t *VAR_9;
 VAR_7 = FUNC_1(VAR_6,
     FUNC_5(VAR_3->ds_dir)->dd_origin_obj, VAR_2, &VAR_9);
 if (VAR_7 != 0)
  return (VAR_0);
 VAR_8 = FUNC_7(VAR_9, VAR_4, VAR_5);
 FUNC_3(VAR_9, VAR_2);
 return (VAR_8);
}
