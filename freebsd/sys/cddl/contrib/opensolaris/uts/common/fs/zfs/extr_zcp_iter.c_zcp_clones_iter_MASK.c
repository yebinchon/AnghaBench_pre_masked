
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_11__ {int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int lua_State ;
struct TYPE_12__ {int dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_13__ {int ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_15__ {scalar_t__ ds_next_clones_obj; } ;
struct TYPE_14__ {TYPE_2__* zri_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,TYPE_3__**) ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,scalar_t__,int ) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int *) ;
 TYPE_4__* FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(lua_State *VAR_3)
{
 int VAR_4;
 char VAR_5[VAR_2];
 uint64_t VAR_6 = FUNC_8(VAR_3, FUNC_9(1));
 uint64_t VAR_7 = FUNC_8(VAR_3, FUNC_9(2));
 dsl_pool_t *VAR_8 = FUNC_15(VAR_3)->zri_pool;
 dsl_dataset_t *VAR_9, *VAR_10;
 zap_attribute_t VAR_11;
 zap_cursor_t VAR_12;

 VAR_4 = FUNC_0(VAR_8, VAR_6, VAR_1, &VAR_9);
 if (VAR_4 == VAR_0) {
  return (0);
 } else if (VAR_4 != 0) {
  return (FUNC_4(VAR_3,
      "unexpected error %d from dsl_dataset_hold_obj(dsobj)",
      VAR_4));
 }

 if (FUNC_1(VAR_9)->ds_next_clones_obj == 0) {
  FUNC_2(VAR_9, VAR_1);
  return (0);
 }

 FUNC_12(&VAR_12, VAR_8->dp_meta_objset,
     FUNC_1(VAR_9)->ds_next_clones_obj, VAR_7);
 FUNC_2(VAR_9, VAR_1);

 VAR_4 = FUNC_13(&VAR_12, &VAR_11);
 if (VAR_4 != 0) {
  FUNC_11(&VAR_12);
  if (VAR_4 != VAR_0) {
   return (FUNC_4(VAR_3,
       "unexpected error %d from zap_cursor_retrieve()",
       VAR_4));
  }
  return (0);
 }
 FUNC_10(&VAR_12);
 VAR_7 = FUNC_14(&VAR_12);
 FUNC_11(&VAR_12);

 VAR_4 = FUNC_0(VAR_8, VAR_11.za_first_integer, VAR_1, &VAR_10);
 if (VAR_4 != 0) {
  return (FUNC_4(VAR_3,
      "unexpected error %d from "
      "dsl_dataset_hold_obj(za_first_integer)", VAR_4));
 }

 FUNC_3(VAR_10->ds_dir, VAR_5);
 FUNC_2(VAR_10, VAR_1);

 FUNC_5(VAR_3, VAR_7);
 FUNC_7(VAR_3, FUNC_9(2));

 (void) FUNC_6(VAR_3, VAR_5);
 return (1);
}
