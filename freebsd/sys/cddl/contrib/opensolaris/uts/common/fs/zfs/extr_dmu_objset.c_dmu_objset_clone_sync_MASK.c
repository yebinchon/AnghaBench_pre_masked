
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_13__ {int dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_14__ {int ds_object; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {int doca_cred; int doca_origin; int doca_clone; } ;
typedef TYPE_3__ dmu_objset_clone_arg_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char const*,TYPE_2__*,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_4 (int ,int ,int ,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int *,int ,int ,TYPE_1__**,char const**) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int *,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_2, dmu_tx_t *VAR_3)
{
 dmu_objset_clone_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_1(VAR_3);
 dsl_dir_t *VAR_6;
 const char *VAR_7;
 dsl_dataset_t *VAR_8, *VAR_9;
 uint64_t VAR_10;
 char VAR_11[VAR_1];

 FUNC_0(FUNC_7(VAR_5, VAR_4->doca_clone, VAR_0, &VAR_6, &VAR_7));
 FUNC_0(FUNC_3(VAR_5, VAR_4->doca_origin, VAR_0, &VAR_8));

 VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, 0,
     VAR_4->doca_cred, VAR_3);

 FUNC_0(FUNC_4(VAR_6->dd_pool, VAR_10, VAR_0, &VAR_9));
 FUNC_5(VAR_8, VAR_11);
 FUNC_9(VAR_9, "clone", VAR_3,
     "origin=%s (%llu)", VAR_11, VAR_8->ds_object);
 FUNC_6(VAR_9, VAR_0);
 FUNC_6(VAR_8, VAR_0);
 FUNC_8(VAR_6, VAR_0);
}
