
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_11__ {TYPE_7__* ds_dir; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_12__ {char* dds_origin; scalar_t__ dds_num_clones; int dds_is_snapshot; int dds_guid; int dds_inconsistent; int dds_creation_txg; } ;
typedef TYPE_2__ dmu_objset_stats_t ;
struct TYPE_13__ {int * dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(dsl_dataset_t *VAR_2, dmu_objset_stats_t *VAR_3)
{
 dsl_pool_t *VAR_4 = VAR_2->ds_dir->dd_pool;
 FUNC_0(FUNC_7(VAR_4));

 VAR_3->dds_creation_txg = FUNC_3(VAR_2);
 VAR_3->dds_inconsistent = FUNC_5(VAR_2);
 VAR_3->dds_guid = FUNC_4(VAR_2);
 VAR_3->dds_origin[0] = '\0';
 if (VAR_2->ds_is_snapshot) {
  VAR_3->dds_is_snapshot = VAR_1;
  VAR_3->dds_num_clones = FUNC_6(VAR_2);
 } else {
  VAR_3->dds_is_snapshot = VAR_0;
  VAR_3->dds_num_clones = 0;

  if (FUNC_2(VAR_2->ds_dir)) {
   FUNC_1(VAR_2->ds_dir, VAR_3->dds_origin);
  }
 }
}
