
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tables; int * pool; } ;
typedef TYPE_1__ string_table_builder_t ;
typedef int builder_table_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;

string_table_builder_t *
FUNC_3(apr_pool_t *VAR_0)
{
  string_table_builder_t *VAR_1 = FUNC_2(VAR_0, sizeof(*VAR_1));
  VAR_1->pool = VAR_0;
  VAR_1->tables = FUNC_1(VAR_0, 1, sizeof(builder_table_t *));

  FUNC_0(VAR_1);

  return VAR_1;
}
