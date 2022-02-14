
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef int uint64_t ;
struct TYPE_10__ {int ds_object; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int blkptr_cb_t ;
struct TYPE_11__ {int ds_bp; } ;
struct TYPE_9__ {TYPE_1__* dd_pool; } ;
struct TYPE_8__ {int dp_spa; } ;


 TYPE_6__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*,int ,int *,int ,int *,int,int ,void*) ;

int
FUNC_2(dsl_dataset_t *VAR_0, uint64_t VAR_1,
    zbookmark_phys_t *VAR_2,
    int VAR_3, blkptr_cb_t VAR_4, void *VAR_5)
{
 return (FUNC_1(VAR_0->ds_dir->dd_pool->dp_spa, VAR_0, VAR_0->ds_object,
     &FUNC_0(VAR_0)->ds_bp, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
