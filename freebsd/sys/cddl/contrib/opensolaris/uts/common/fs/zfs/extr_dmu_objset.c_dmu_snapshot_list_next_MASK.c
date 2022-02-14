
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_13__ {int za_normalization_conflict; int za_first_integer; int za_name; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_14__ {TYPE_5__* os_dsl_dataset; } ;
typedef TYPE_4__ objset_t ;
struct TYPE_15__ {TYPE_2__* ds_dir; } ;
typedef TYPE_5__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_16__ {scalar_t__ ds_snapnames_zapobj; } ;
struct TYPE_12__ {TYPE_1__* dd_pool; } ;
struct TYPE_11__ {int dp_meta_objset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_7__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *) ;

int
FUNC_12(objset_t *VAR_2, int VAR_3, char *VAR_4,
    uint64_t *VAR_5, uint64_t *VAR_6, boolean_t *VAR_7)
{
 dsl_dataset_t *VAR_8 = VAR_2->os_dsl_dataset;
 zap_cursor_t VAR_9;
 zap_attribute_t VAR_10;

 FUNC_0(FUNC_4(FUNC_2(VAR_2)));

 if (FUNC_3(VAR_8)->ds_snapnames_zapobj == 0)
  return (FUNC_1(VAR_1));

 FUNC_9(&VAR_9,
     VAR_8->ds_dir->dd_pool->dp_meta_objset,
     FUNC_3(VAR_8)->ds_snapnames_zapobj, *VAR_6);

 if (FUNC_10(&VAR_9, &VAR_10) != 0) {
  FUNC_8(&VAR_9);
  return (FUNC_1(VAR_1));
 }

 if (FUNC_6(VAR_10.za_name) + 1 > VAR_3) {
  FUNC_8(&VAR_9);
  return (FUNC_1(VAR_0));
 }

 (void) FUNC_5(VAR_4, VAR_10.za_name);
 if (VAR_5)
  *VAR_5 = VAR_10.za_first_integer;
 if (VAR_7)
  *VAR_7 = VAR_10.za_normalization_conflict;
 FUNC_7(&VAR_9);
 *VAR_6 = FUNC_11(&VAR_9);
 FUNC_8(&VAR_9);

 return (0);
}
