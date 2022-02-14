
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_13__ {int * dp_meta_objset; int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_14__ {int dd_object; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef int cnt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *,int,int *) ;
 int FUNC_4 (TYPE_1__*,int,int ,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,char const*,int *) ;
 int FUNC_9 (TYPE_1__*,int,char const*,int ,TYPE_2__**) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int ,int ,int,int,int*,int *) ;

uint64_t
FUNC_14(dsl_dir_t *VAR_5, const char *VAR_6,
    dsl_dataset_t *VAR_7, uint64_t VAR_8, cred_t *VAR_9, dmu_tx_t *VAR_10)
{
 dsl_pool_t *VAR_11 = VAR_5->dd_pool;
 uint64_t VAR_12, VAR_13;
 dsl_dir_t *VAR_14;

 FUNC_0(FUNC_2(VAR_10));
 FUNC_0(VAR_6[0] != '@');

 VAR_13 = FUNC_8(VAR_11, VAR_5, VAR_6, VAR_10);
 FUNC_1(FUNC_9(VAR_11, VAR_13, VAR_6, VAR_3, &VAR_14));

 VAR_12 = FUNC_3(VAR_14, VAR_7,
     VAR_8 & ~VAR_2, VAR_10);

 FUNC_7(VAR_14, VAR_10, VAR_9);





 if (FUNC_12(VAR_11->dp_spa, VAR_4)) {
  uint64_t VAR_15 = 0;
  objset_t *VAR_16 = VAR_14->dd_pool->dp_meta_objset;

  FUNC_11(VAR_14, VAR_10);
  FUNC_1(FUNC_13(VAR_16, VAR_14->dd_object, VAR_0,
      sizeof (VAR_15), 1, &VAR_15, VAR_10));
  FUNC_1(FUNC_13(VAR_16, VAR_14->dd_object, VAR_1,
      sizeof (VAR_15), 1, &VAR_15, VAR_10));
 }

 FUNC_10(VAR_14, VAR_3);





 if (VAR_7 != ((void*)0) && !(VAR_8 & VAR_2)) {
  dsl_dataset_t *VAR_17;

  FUNC_1(FUNC_4(VAR_11, VAR_12, VAR_3, &VAR_17));
  FUNC_6(VAR_17, VAR_10);
  FUNC_5(VAR_17, VAR_3);
 }

 return (VAR_12);
}
