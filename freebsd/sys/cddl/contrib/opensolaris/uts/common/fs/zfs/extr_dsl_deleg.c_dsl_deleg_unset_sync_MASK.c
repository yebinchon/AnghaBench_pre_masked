
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dir_t ;
struct TYPE_7__ {int * dda_nvlist; int dda_name; } ;
typedef TYPE_2__ dsl_deleg_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {scalar_t__ dd_deleg_zapobj; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int **,int *) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,char*,int *,char*,char const*,...) ;
 scalar_t__ FUNC_10 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,char const*,int,int,scalar_t__*) ;
 int FUNC_13 (int *,scalar_t__,char const*,int *) ;

__attribute__((used)) static void
FUNC_14(void *VAR_1, dmu_tx_t *VAR_2)
{
 dsl_deleg_arg_t *VAR_3 = VAR_1;
 dsl_dir_t *VAR_4;
 dsl_pool_t *VAR_5 = FUNC_2(VAR_2);
 objset_t *VAR_6 = VAR_5->dp_meta_objset;
 nvpair_t *VAR_7 = ((void*)0);
 uint64_t VAR_8;

 FUNC_1(FUNC_3(VAR_5, VAR_3->dda_name, VAR_0, &VAR_4, ((void*)0)));
 VAR_8 = FUNC_4(VAR_4)->dd_deleg_zapobj;
 if (VAR_8 == 0) {
  FUNC_5(VAR_4, VAR_0);
  return;
 }

 while ((VAR_7 = FUNC_6(VAR_3->dda_nvlist, VAR_7))) {
  const char *VAR_9 = FUNC_7(VAR_7);
  nvlist_t *VAR_10;
  nvpair_t *VAR_11 = ((void*)0);
  uint64_t VAR_12;

  if (FUNC_8(VAR_7, &VAR_10) != 0) {
   if (FUNC_12(VAR_6, VAR_8, VAR_9, 8,
       1, &VAR_12) == 0) {
    (void) FUNC_13(VAR_6, VAR_8, VAR_9, VAR_2);
    FUNC_0(0 == FUNC_11(VAR_6, VAR_12, VAR_2));
   }
   FUNC_9(VAR_4, "permission who remove",
       VAR_2, "%s", VAR_9);
   continue;
  }

  if (FUNC_12(VAR_6, VAR_8, VAR_9, 8, 1, &VAR_12) != 0)
   continue;

  while ((VAR_11 = FUNC_6(VAR_10, VAR_11))) {
   const char *VAR_13 = FUNC_7(VAR_11);
   uint64_t VAR_14 = 0;

   (void) FUNC_13(VAR_6, VAR_12, VAR_13, VAR_2);
   if (FUNC_10(VAR_6, VAR_12, &VAR_14) == 0 && VAR_14 == 0) {
    (void) FUNC_13(VAR_6, VAR_8,
        VAR_9, VAR_2);
    FUNC_0(0 == FUNC_11(VAR_6,
        VAR_12, VAR_2));
   }
   FUNC_9(VAR_4, "permission remove", VAR_2,
       "%s %s", VAR_9, VAR_13);
  }
 }
 FUNC_5(VAR_4, VAR_0);
}
