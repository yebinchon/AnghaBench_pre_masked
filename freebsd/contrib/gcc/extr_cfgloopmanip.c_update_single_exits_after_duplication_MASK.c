
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct loop {TYPE_2__* single_exit; struct loop* outer; } ;
typedef TYPE_3__* basic_block ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {TYPE_1__* src; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (basic_block *VAR_1, unsigned VAR_2,
           struct loop *VAR_3)
{
  unsigned VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    VAR_1[VAR_4]->flags |= VAR_0;

  for (; VAR_3->outer; VAR_3 = VAR_3->outer)
    {
      if (!VAR_3->single_exit)
 continue;

      if (VAR_3->single_exit->src->flags & VAR_0)
 VAR_3->single_exit = ((void*)0);
    }

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    VAR_1[VAR_4]->flags &= ~VAR_0;
}
