
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dp_config_rwlock; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_6__ {int dd_object; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,int ) ;
 int VAR_1 ;

void
FUNC_3(dsl_dir_t *VAR_2)
{
 dsl_pool_t *VAR_3 = VAR_2->dd_pool;
 FUNC_0(FUNC_1(&VAR_3->dp_config_rwlock));
 (void) FUNC_2(VAR_3, VAR_2->dd_object, VAR_1,
     ((void*)0), VAR_0);
}
