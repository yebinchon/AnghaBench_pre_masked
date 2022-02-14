
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* os_dsl_dataset; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_9__ {TYPE_2__* tx_objset; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_7__ {int ds_dir; } ;


 TYPE_3__* FUNC_0 (int ) ;

dmu_tx_t *
FUNC_1(objset_t *VAR_0)
{
 dmu_tx_t *VAR_1 = FUNC_0(VAR_0->os_dsl_dataset->ds_dir);
 VAR_1->tx_objset = VAR_0;
 return (VAR_1);
}
