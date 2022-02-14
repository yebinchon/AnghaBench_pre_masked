
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int nvpair_t ;
struct TYPE_9__ {int dpsa_props; int dpsa_dsname; } ;
typedef TYPE_3__ dsl_props_set_arg_t ;
typedef int dsl_pool_t ;
struct TYPE_10__ {scalar_t__ ds_is_snapshot; TYPE_2__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {TYPE_1__* dd_pool; } ;
struct TYPE_7__ {int dp_spa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_4__**) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int ,int *) ;
 char* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(void *VAR_10, dmu_tx_t *VAR_11)
{
 dsl_props_set_arg_t *VAR_12 = VAR_10;
 dsl_pool_t *VAR_13 = FUNC_1(VAR_11);
 dsl_dataset_t *VAR_14;
 uint64_t VAR_15;
 nvpair_t *VAR_16 = ((void*)0);
 int VAR_17;

 VAR_17 = FUNC_2(VAR_13, VAR_12->dpsa_dsname, VAR_4, &VAR_14);
 if (VAR_17 != 0)
  return (VAR_17);

 VAR_15 = FUNC_8(VAR_14->ds_dir->dd_pool->dp_spa);
 while ((VAR_16 = FUNC_5(VAR_12->dpsa_props, VAR_16)) != ((void*)0)) {
  if (FUNC_9(FUNC_6(VAR_16)) >= VAR_7) {
   FUNC_3(VAR_14, VAR_4);
   return (FUNC_0(VAR_2));
  }
  if (FUNC_7(VAR_16) == VAR_0) {
   char *VAR_18 = FUNC_4(VAR_16);
   if (FUNC_9(VAR_18) >= (VAR_15 <
       VAR_6 ?
       VAR_9 : VAR_8)) {
    FUNC_3(VAR_14, VAR_4);
    return (VAR_1);
   }
  }
 }

 if (VAR_14->ds_is_snapshot && VAR_15 < VAR_5) {
  FUNC_3(VAR_14, VAR_4);
  return (FUNC_0(VAR_3));
 }
 FUNC_3(VAR_14, VAR_4);
 return (0);
}
