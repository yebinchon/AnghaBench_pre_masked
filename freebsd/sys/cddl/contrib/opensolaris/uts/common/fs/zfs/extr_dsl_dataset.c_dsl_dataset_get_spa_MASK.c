
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_7__ {TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_6__ {TYPE_1__* dd_pool; } ;
struct TYPE_5__ {int * dp_spa; } ;



spa_t *
FUNC_0(dsl_dataset_t *VAR_0)
{
 return (VAR_0->ds_dir->dd_pool->dp_spa);
}
