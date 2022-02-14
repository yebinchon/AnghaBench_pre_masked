
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_12__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_13__ {scalar_t__* ds_snapname; int ds_object; TYPE_6__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_14__ {int ds_snapnames_zapobj; } ;
typedef TYPE_3__ dsl_dataset_phys_t ;
struct TYPE_15__ {TYPE_3__* db_data; } ;
typedef TYPE_4__ dmu_buf_t ;
struct TYPE_18__ {scalar_t__ ds_next_snap_obj; } ;
struct TYPE_17__ {TYPE_1__* dd_pool; } ;
struct TYPE_16__ {int dd_head_dataset_obj; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,TYPE_4__**) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 TYPE_7__* FUNC_2 (TYPE_2__*) ;
 TYPE_5__* FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,int ,int ,int ,scalar_t__*) ;

int
FUNC_5(dsl_dataset_t *VAR_1)
{
 dsl_dataset_phys_t *VAR_2;
 int VAR_3;
 dmu_buf_t *VAR_4;
 dsl_pool_t *VAR_5 = VAR_1->ds_dir->dd_pool;
 objset_t *VAR_6 = VAR_5->dp_meta_objset;

 if (VAR_1->ds_snapname[0])
  return (0);
 if (FUNC_2(VAR_1)->ds_next_snap_obj == 0)
  return (0);

 VAR_3 = FUNC_0(VAR_6, FUNC_3(VAR_1->ds_dir)->dd_head_dataset_obj,
     VAR_0, &VAR_4);
 if (VAR_3 != 0)
  return (VAR_3);
 VAR_2 = VAR_4->db_data;
 VAR_3 = FUNC_4(VAR_5->dp_meta_objset,
     VAR_2->ds_snapnames_zapobj, VAR_1->ds_object, 0, VAR_1->ds_snapname);
 FUNC_1(VAR_4, VAR_0);
 return (VAR_3);
}
