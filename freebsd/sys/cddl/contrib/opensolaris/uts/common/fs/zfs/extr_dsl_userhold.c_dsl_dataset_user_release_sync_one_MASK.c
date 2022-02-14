
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int objset_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int longlong_t ;
struct TYPE_10__ {int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_11__ {scalar_t__ ds_userrefs; int ds_object; TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {int ds_userrefs_obj; } ;
struct TYPE_9__ {TYPE_2__* dd_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int ,char const*,int *) ;
 int * FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,char*,int *,char*,char const*,int ) ;
 int FUNC_7 (int *,int ,char const*,int *) ;

__attribute__((used)) static void
FUNC_8(dsl_dataset_t *VAR_1, nvlist_t *VAR_2,
    dmu_tx_t *VAR_3)
{
 dsl_pool_t *VAR_4 = VAR_1->ds_dir->dd_pool;
 objset_t *VAR_5 = VAR_4->dp_meta_objset;

 for (nvpair_t *VAR_6 = FUNC_4(VAR_2, ((void*)0)); VAR_6 != ((void*)0);
     VAR_6 = FUNC_4(VAR_2, VAR_6)) {
  int VAR_7;
  const char *VAR_8 = FUNC_5(VAR_6);


  VAR_7 = FUNC_3(VAR_4, VAR_1->ds_object, VAR_8, VAR_3);
  FUNC_0(VAR_7 == 0 || VAR_7 == VAR_0);

  FUNC_1(FUNC_7(VAR_5, FUNC_2(VAR_1)->ds_userrefs_obj,
      VAR_8, VAR_3));
  VAR_1->ds_userrefs--;

  FUNC_6(VAR_1, "release", VAR_3,
      "tag=%s refs=%lld", VAR_8, (longlong_t)VAR_1->ds_userrefs);
 }
}
