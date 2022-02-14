
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int elt_size; int nelts; int elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (void const*,int ,int ,int ,int (*) (void const*,void const*)) ;

int
FUNC_1(const apr_array_header_t *VAR_0,
                              const void *VAR_1,
                              int (*VAR_2)(const void *, const void *))
{
  return FUNC_0(VAR_1,
                             VAR_0->elts, VAR_0->nelts, VAR_0->elt_size,
                             VAR_2);
}
