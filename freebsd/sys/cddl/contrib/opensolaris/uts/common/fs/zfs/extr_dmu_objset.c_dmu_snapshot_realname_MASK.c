
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {TYPE_4__* os_dsl_dataset; } ;
typedef TYPE_3__ objset_t ;
struct TYPE_11__ {TYPE_2__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_12__ {scalar_t__ ds_snapnames_zapobj; } ;
struct TYPE_9__ {TYPE_1__* dd_pool; } ;
struct TYPE_8__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,scalar_t__,char*,int,int,int *,int ,char*,int,int *) ;

int
FUNC_3(objset_t *VAR_2, char *VAR_3, char *VAR_4, int VAR_5,
    boolean_t *VAR_6)
{
 dsl_dataset_t *VAR_7 = VAR_2->os_dsl_dataset;
 uint64_t VAR_8;

 if (FUNC_1(VAR_7)->ds_snapnames_zapobj == 0)
  return (FUNC_0(VAR_0));

 return (FUNC_2(VAR_7->ds_dir->dd_pool->dp_meta_objset,
     FUNC_1(VAR_7)->ds_snapnames_zapobj, VAR_3, 8, 1, &VAR_8,
     VAR_1, VAR_4, VAR_5, VAR_6));
}
