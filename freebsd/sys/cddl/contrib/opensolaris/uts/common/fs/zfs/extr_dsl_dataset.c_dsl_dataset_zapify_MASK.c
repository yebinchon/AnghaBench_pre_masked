
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_7__ {int ds_object; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {TYPE_1__* dd_pool; } ;
struct TYPE_5__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;

void
FUNC_1(dsl_dataset_t *VAR_1, dmu_tx_t *VAR_2)
{
 objset_t *VAR_3 = VAR_1->ds_dir->dd_pool->dp_meta_objset;
 FUNC_0(VAR_3, VAR_1->ds_object, VAR_0, VAR_2);
}
