
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dsl_pool_t ;
typedef int dsl_dir_t ;
struct TYPE_5__ {int ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {int doca_origin; int doca_cred; int doca_clone; } ;
typedef TYPE_2__ dmu_objset_clone_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,int ,int ,int **,char const**) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int ,int *,int ) ;
 int * FUNC_7 (int ,char) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(void *VAR_7, dmu_tx_t *VAR_8)
{
 dmu_objset_clone_arg_t *VAR_9 = VAR_7;
 dsl_dir_t *VAR_10;
 const char *VAR_11;
 int VAR_12;
 dsl_dataset_t *VAR_13;
 dsl_pool_t *VAR_14 = FUNC_1(VAR_8);

 if (FUNC_7(VAR_9->doca_clone, '@') != ((void*)0))
  return (FUNC_0(VAR_2));

 if (FUNC_8(VAR_9->doca_clone) >= VAR_5)
  return (FUNC_0(VAR_3));

 VAR_12 = FUNC_4(VAR_14, VAR_9->doca_clone, VAR_4, &VAR_10, &VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_10, VAR_4);
  return (FUNC_0(VAR_1));
 }

 VAR_12 = FUNC_6(VAR_10, 1, VAR_6, ((void*)0),
     VAR_9->doca_cred);
 if (VAR_12 != 0) {
  FUNC_5(VAR_10, VAR_4);
  return (FUNC_0(VAR_0));
 }
 FUNC_5(VAR_10, VAR_4);

 VAR_12 = FUNC_2(VAR_14, VAR_9->doca_origin, VAR_4, &VAR_13);
 if (VAR_12 != 0)
  return (VAR_12);


 if (!VAR_13->ds_is_snapshot) {
  FUNC_3(VAR_13, VAR_4);
  return (FUNC_0(VAR_2));
 }
 FUNC_3(VAR_13, VAR_4);

 return (0);
}
