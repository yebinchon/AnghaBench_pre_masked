
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_12__ {int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_13__ {TYPE_6__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_16__ {scalar_t__ ds_next_clones_obj; int ds_num_children; } ;
struct TYPE_15__ {TYPE_5__* dd_pool; } ;
struct TYPE_14__ {int * dp_meta_objset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_5__*,int ,int ,TYPE_2__**) ;
 TYPE_8__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,scalar_t__,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*) ;

int
FUNC_13(dsl_dataset_t *VAR_3, nvlist_t *VAR_4)
{
 uint64_t VAR_5 = 0;
 objset_t *VAR_6 = VAR_3->ds_dir->dd_pool->dp_meta_objset;
 zap_cursor_t VAR_7;
 zap_attribute_t VAR_8;

 FUNC_0(FUNC_6(VAR_3->ds_dir->dd_pool));






 if (FUNC_3(VAR_3)->ds_next_clones_obj != 0) {
  FUNC_1(FUNC_8(VAR_6, FUNC_3(VAR_3)->ds_next_clones_obj,
      &VAR_5));
 }
 if (VAR_5 != FUNC_3(VAR_3)->ds_num_children - 1) {
  return (VAR_0);
 }
 for (FUNC_11(&VAR_7, VAR_6,
     FUNC_3(VAR_3)->ds_next_clones_obj);
     FUNC_12(&VAR_7, &VAR_8) == 0;
     FUNC_9(&VAR_7)) {
  dsl_dataset_t *VAR_9;
  char VAR_10[VAR_2];
  FUNC_1(FUNC_2(VAR_3->ds_dir->dd_pool,
      VAR_8.za_first_integer, VAR_1, &VAR_9));
  FUNC_5(VAR_9->ds_dir, VAR_10);
  FUNC_7(VAR_4, VAR_10);
  FUNC_4(VAR_9, VAR_1);
 }
 FUNC_10(&VAR_7);
 return (0);
}
