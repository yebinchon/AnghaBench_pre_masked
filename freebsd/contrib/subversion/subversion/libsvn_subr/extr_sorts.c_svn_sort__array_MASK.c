
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int elt_size; int nelts; int elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (int ,int ,int ,int (*) (void const*,void const*)) ;

void
FUNC_1(apr_array_header_t *VAR_0,
                int (*VAR_1)(const void *,
                                       const void *))
{
  FUNC_0(VAR_0->elts, VAR_0->nelts, VAR_0->elt_size, VAR_1);
}
