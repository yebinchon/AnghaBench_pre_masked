
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* elements; } ;
typedef TYPE_2__ svn_priority_queue__t ;
struct TYPE_5__ {int nelts; int elt_size; scalar_t__ elts; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

void
FUNC_2(svn_priority_queue__t *VAR_0)
{
  if (VAR_0->elements->nelts)
    {
      FUNC_1(VAR_0->elements->elts,
              VAR_0->elements->elts
              + (VAR_0->elements->nelts - 1) * VAR_0->elements->elt_size,
              VAR_0->elements->elt_size);
      --VAR_0->elements->nelts;
      FUNC_0(VAR_0, 0);
    }
}
