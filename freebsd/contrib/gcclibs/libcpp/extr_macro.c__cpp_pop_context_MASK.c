
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* context; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_8__ {struct TYPE_8__* prev; scalar_t__ buff; TYPE_1__* macro; } ;
typedef TYPE_3__ cpp_context ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;

void
FUNC_1 (cpp_reader *VAR_1)
{
  cpp_context *VAR_2 = VAR_1->context;

  if (VAR_2->macro)
    VAR_2->macro->flags &= ~VAR_0;

  if (VAR_2->buff)
    FUNC_0 (VAR_1, VAR_2->buff);

  VAR_1->context = VAR_2->prev;
}
