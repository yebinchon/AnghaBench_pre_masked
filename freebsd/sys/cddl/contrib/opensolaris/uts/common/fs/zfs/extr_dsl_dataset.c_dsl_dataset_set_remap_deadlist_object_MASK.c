
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int obj ;
struct TYPE_8__ {int ds_object; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {TYPE_1__* dd_pool; } ;
struct TYPE_6__ {int dp_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ,int ,int ,int,int,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_4(dsl_dataset_t *VAR_1, uint64_t VAR_2,
    dmu_tx_t *VAR_3)
{
 FUNC_0(VAR_2 != 0);
 FUNC_2(VAR_1, VAR_3);
 FUNC_1(FUNC_3(VAR_1->ds_dir->dd_pool->dp_meta_objset, VAR_1->ds_object,
     VAR_0, sizeof (VAR_2), 1, &VAR_2, VAR_3));
}
