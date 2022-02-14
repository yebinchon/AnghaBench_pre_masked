
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_14__ {int za_first_integer; int za_name; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
struct TYPE_15__ {TYPE_2__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
struct TYPE_16__ {scalar_t__ ds_userrefs_obj; } ;
struct TYPE_13__ {TYPE_1__* dd_pool; } ;
struct TYPE_12__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int ,TYPE_4__**) ;
 TYPE_9__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (char const*,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 TYPE_3__* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int *,TYPE_3__*) ;

int
FUNC_12(const char *VAR_2, nvlist_t *VAR_3)
{
 dsl_pool_t *VAR_4;
 dsl_dataset_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_0, &VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_0, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_4(VAR_4, VAR_0);
  return (VAR_6);
 }

 if (FUNC_1(VAR_5)->ds_userrefs_obj != 0) {
  zap_attribute_t *VAR_7;
  zap_cursor_t VAR_8;

  VAR_7 = FUNC_6(sizeof (zap_attribute_t), VAR_1);
  for (FUNC_10(&VAR_8, VAR_5->ds_dir->dd_pool->dp_meta_objset,
      FUNC_1(VAR_5)->ds_userrefs_obj);
      FUNC_11(&VAR_8, VAR_7) == 0;
      FUNC_8(&VAR_8)) {
   FUNC_5(VAR_3, VAR_7->za_name,
       VAR_7->za_first_integer);
  }
  FUNC_9(&VAR_8);
  FUNC_7(VAR_7, sizeof (zap_attribute_t));
 }
 FUNC_2(VAR_5, VAR_0);
 FUNC_4(VAR_4, VAR_0);
 return (0);
}
