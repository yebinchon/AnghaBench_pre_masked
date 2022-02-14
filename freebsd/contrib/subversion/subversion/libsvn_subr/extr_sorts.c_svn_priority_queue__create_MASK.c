
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* compare_func ) (void const*,void const*) ;TYPE_2__* elements; } ;
typedef TYPE_1__ svn_priority_queue__t ;
struct TYPE_8__ {int nelts; int pool; } ;
typedef TYPE_2__ apr_array_header_t ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

svn_priority_queue__t *
FUNC_2(apr_array_header_t *VAR_0,
                           int (*VAR_1)(const void *, const void *))
{
  int VAR_2;

  svn_priority_queue__t *VAR_3 = FUNC_0(VAR_0->pool, sizeof(*VAR_3));
  VAR_3->elements = VAR_0;
  VAR_3->compare_func = VAR_1;

  for (VAR_2 = VAR_0->nelts / 2; VAR_2 >= 0; --VAR_2)
    FUNC_1(VAR_3, VAR_2);

  return VAR_3;
}
