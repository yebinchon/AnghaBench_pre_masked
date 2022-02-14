
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * free_list; int * pool; int * tree; } ;
typedef TYPE_1__ range_index_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static range_index_t *
FUNC_1(apr_pool_t *VAR_0)
{
  range_index_t *VAR_1 = FUNC_0(VAR_0, sizeof(*VAR_1));
  VAR_1->tree = ((void*)0);
  VAR_1->pool = VAR_0;
  VAR_1->free_list = ((void*)0);
  return VAR_1;
}
