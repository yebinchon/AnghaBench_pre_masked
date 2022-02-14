
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_13__ {int ddura_chkholds; int * ddura_todelete; int * ddura_errlist; } ;
typedef TYPE_3__ dsl_dataset_user_release_arg_t ;
struct TYPE_14__ {int ds_userrefs; TYPE_2__* ds_dir; int ds_is_snapshot; } ;
typedef TYPE_4__ dsl_dataset_t ;
struct TYPE_15__ {scalar_t__ ds_userrefs_obj; int ds_num_children; } ;
struct TYPE_12__ {TYPE_1__* dd_pool; } ;
struct TYPE_11__ {int * dp_meta_objset; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 TYPE_7__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,char const*,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (char*,char const*,char const*) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,scalar_t__,char const*,int,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_15(dsl_dataset_user_release_arg_t *VAR_3,
    dsl_dataset_t *VAR_4, nvlist_t *VAR_5, const char *VAR_6)
{
 uint64_t VAR_7;
 nvlist_t *VAR_8;
 objset_t *VAR_9;
 int VAR_10;

 if (!VAR_4->ds_is_snapshot)
  return (FUNC_1(VAR_1));

 if (FUNC_10(VAR_5))
  return (0);

 VAR_10 = 0;
 VAR_9 = VAR_4->ds_dir->dd_pool->dp_meta_objset;
 VAR_7 = FUNC_3(VAR_4)->ds_userrefs_obj;
 VAR_8 = FUNC_7();

 for (nvpair_t *VAR_11 = FUNC_11(VAR_5, ((void*)0)); VAR_11 != ((void*)0);
     VAR_11 = FUNC_11(VAR_5, VAR_11)) {
  uint64_t VAR_12;
  int VAR_13;
  const char *VAR_14 = FUNC_12(VAR_11);

  if (VAR_7 != 0)
   VAR_13 = FUNC_14(VAR_9, VAR_7, VAR_14, 8, 1, &VAR_12);
  else
   VAR_13 = FUNC_1(VAR_2);





  if (VAR_13 == VAR_2) {
   if (VAR_3->ddura_errlist != ((void*)0)) {
    char *VAR_15 = FUNC_9("%s#%s",
        VAR_6, VAR_14);
    FUNC_5(VAR_3->ddura_errlist, VAR_15,
        VAR_2);
    FUNC_13(VAR_15);
   }
   continue;
  }

  if (VAR_13 != 0) {
   FUNC_8(VAR_8);
   return (VAR_13);
  }

  FUNC_4(VAR_8, VAR_14);
  VAR_10++;
 }

 if (FUNC_0(VAR_4) &&
     FUNC_3(VAR_4)->ds_num_children == 1 &&
     VAR_4->ds_userrefs == VAR_10) {

  if (FUNC_2(VAR_4)) {
   FUNC_8(VAR_8);
   return (FUNC_1(VAR_0));
  }
  FUNC_4(VAR_3->ddura_todelete, VAR_6);
 }

 if (VAR_10 != 0) {
  FUNC_6(VAR_3->ddura_chkholds, VAR_6,
      VAR_8);
 }
 FUNC_8(VAR_8);

 return (0);
}
