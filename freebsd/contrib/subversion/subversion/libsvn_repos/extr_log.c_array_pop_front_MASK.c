
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nelts; int nalloc; int elt_size; void* elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void *
FUNC_1(apr_array_header_t *VAR_0)
{
  void *VAR_1 = VAR_0->elts;

  if (FUNC_0(VAR_0))
    return ((void*)0);

  VAR_0->elts += VAR_0->elt_size;
  VAR_0->nelts -= 1;
  VAR_0->nalloc -= 1;
  return VAR_1;
}
