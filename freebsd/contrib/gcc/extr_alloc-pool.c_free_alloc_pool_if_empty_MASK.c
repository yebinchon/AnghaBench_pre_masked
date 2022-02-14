
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* alloc_pool ;
struct TYPE_4__ {scalar_t__ elts_free; scalar_t__ elts_allocated; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (alloc_pool *VAR_0)
{
  if ((*VAR_0)->elts_free == (*VAR_0)->elts_allocated)
    {
      FUNC_0 (*VAR_0);
      *VAR_0 = ((void*)0);
    }
}
