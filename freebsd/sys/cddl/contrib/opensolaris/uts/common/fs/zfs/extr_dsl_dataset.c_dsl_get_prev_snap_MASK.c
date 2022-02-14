
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dp_origin_snap; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_7__ {scalar_t__ ds_prev; TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_5__ {TYPE_2__* dd_pool; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;

int
FUNC_1(dsl_dataset_t *VAR_1, char *VAR_2)
{
 dsl_pool_t *VAR_3 = VAR_1->ds_dir->dd_pool;
 if (VAR_1->ds_prev != ((void*)0) && VAR_1->ds_prev != VAR_3->dp_origin_snap) {
  FUNC_0(VAR_1->ds_prev, VAR_2);
  return (0);
 } else {
  return (VAR_0);
 }
}
