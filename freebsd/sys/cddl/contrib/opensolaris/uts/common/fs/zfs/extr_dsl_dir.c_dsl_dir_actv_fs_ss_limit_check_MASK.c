
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dp_meta_objset; int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_10__ {int dd_object; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_11__ {TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_5, dmu_tx_t *VAR_6)
{
 char *VAR_7 = (char *)VAR_5;
 dsl_pool_t *VAR_8 = FUNC_1(VAR_6);
 dsl_dataset_t *VAR_9;
 dsl_dir_t *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_7, VAR_3, &VAR_9);
 if (VAR_11 != 0)
  return (VAR_11);

 if (!FUNC_6(VAR_8->dp_spa, VAR_4)) {
  FUNC_3(VAR_9, VAR_3);
  return (FUNC_0(VAR_2));
 }

 VAR_10 = VAR_9->ds_dir;
 if (FUNC_5(VAR_8->dp_spa, VAR_4) &&
     FUNC_4(VAR_10) &&
     FUNC_7(VAR_8->dp_meta_objset, VAR_10->dd_object,
     VAR_0) == 0) {
  FUNC_3(VAR_9, VAR_3);
  return (FUNC_0(VAR_1));
 }

 FUNC_3(VAR_9, VAR_3);
 return (0);
}
