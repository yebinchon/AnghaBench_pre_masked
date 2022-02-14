
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* elements; } ;
typedef TYPE_1__ svn_priority_queue__t ;
struct TYPE_6__ {void const* elts; scalar_t__ nelts; int elt_size; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,void const*,int ) ;

void
FUNC_4(svn_priority_queue__t *VAR_0,
                         const void *VAR_1)
{

  FUNC_1(VAR_1 && VAR_1 != VAR_0->elements->elts);

  FUNC_3(FUNC_0(VAR_0->elements), VAR_1, VAR_0->elements->elt_size);
  FUNC_2(VAR_0, VAR_0->elements->nelts - 1);
}
