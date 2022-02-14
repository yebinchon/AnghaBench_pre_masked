
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int prevent_expansion; int discarding_output; } ;
struct TYPE_11__ {TYPE_2__ state; TYPE_1__* buffer; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_9__ {int return_at_eof; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_5__* FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;

void
FUNC_3 (cpp_reader *VAR_2)
{


  VAR_2->buffer->return_at_eof = 1;

  VAR_2->state.discarding_output++;
  VAR_2->state.prevent_expansion++;

  if (FUNC_0 (VAR_2, VAR_1))
    while (FUNC_1 (VAR_2))
      ;
  else
    while (FUNC_2 (VAR_2)->type != VAR_0)
      ;

  VAR_2->state.discarding_output--;
  VAR_2->state.prevent_expansion--;
}
