
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os_spa; TYPE_2__* os_dsl_dataset; } ;
typedef TYPE_1__ objset_t ;
typedef int int64_t ;
struct TYPE_5__ {int ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(objset_t *VAR_0, int64_t VAR_1, dmu_tx_t *VAR_2)
{
 dsl_dataset_t *VAR_3 = VAR_0->os_dsl_dataset;
 int64_t VAR_4 = FUNC_3(VAR_0->os_spa, VAR_1);

 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_3->ds_dir, VAR_4, VAR_2);
  FUNC_2(FUNC_0(VAR_2), VAR_1, VAR_2);
 }
}
