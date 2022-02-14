
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int dsl_pool_t ;
struct TYPE_13__ {TYPE_8__* dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_14__ {int ds_bp_rwlock; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {int doca_cred; int doca_userarg; int (* doca_userfunc ) (int *,int ,int ,int *) ;int doca_type; int doca_flags; int doca_name; } ;
typedef TYPE_3__ dmu_objset_create_arg_t ;
typedef int blkptr_t ;
struct TYPE_16__ {int dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,TYPE_2__*,int *,int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int *,int ,int ,int *) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_8__*,int ,int ,TYPE_2__**) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int *,int ,int ,TYPE_1__**,char const**) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int *,char*) ;
 int FUNC_12 (int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_13(void *VAR_2, dmu_tx_t *VAR_3)
{
 dmu_objset_create_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_2(VAR_3);
 dsl_dir_t *VAR_6;
 const char *VAR_7;
 dsl_dataset_t *VAR_8;
 uint64_t VAR_9;
 blkptr_t *VAR_10;
 objset_t *VAR_11;

 FUNC_0(FUNC_7(VAR_5, VAR_4->doca_name, VAR_0, &VAR_6, &VAR_7));

 VAR_9 = FUNC_3(VAR_6, VAR_7, ((void*)0), VAR_4->doca_flags,
     VAR_4->doca_cred, VAR_3);

 FUNC_0(FUNC_5(VAR_6->dd_pool, VAR_9, VAR_0, &VAR_8));
 FUNC_9(&VAR_8->ds_bp_rwlock, VAR_1, VAR_0);
 VAR_10 = FUNC_4(VAR_8);
 VAR_11 = FUNC_1(VAR_6->dd_pool->dp_spa,
     VAR_8, VAR_10, VAR_4->doca_type, VAR_3);
 FUNC_10(&VAR_8->ds_bp_rwlock, VAR_0);

 if (VAR_4->doca_userfunc != ((void*)0)) {
  VAR_4->doca_userfunc(VAR_11, VAR_4->doca_userarg,
      VAR_4->doca_cred, VAR_3);
 }

 FUNC_11(VAR_8, "create", VAR_3, "");
 FUNC_6(VAR_8, VAR_0);
 FUNC_8(VAR_6, VAR_0);
}
