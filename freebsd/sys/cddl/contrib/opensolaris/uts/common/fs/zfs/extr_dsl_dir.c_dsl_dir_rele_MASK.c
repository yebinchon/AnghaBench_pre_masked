
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dd_dbuf; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_5__ {int dp_spa; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (TYPE_2__*,char*,char*) ;
 int FUNC_2 (int ,void*) ;

void
FUNC_3(dsl_dir_t *VAR_0, void *VAR_1)
{
 FUNC_1(VAR_0, "%s\n", "");
 FUNC_2(VAR_0->dd_pool->dp_spa, VAR_1);
 FUNC_0(VAR_0->dd_dbuf, VAR_1);
}
