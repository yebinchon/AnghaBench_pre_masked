
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct if_stack {scalar_t__ was_skipping; struct if_stack* next; scalar_t__ mi_cmacro; } ;
struct TYPE_8__ {scalar_t__ skipping; } ;
struct TYPE_9__ {int mi_valid; int buffer_ob; TYPE_1__ state; scalar_t__ mi_cmacro; TYPE_3__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_10__ {struct if_stack* if_stack; } ;
typedef TYPE_3__ cpp_buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int *,struct if_stack*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_2)
{
  cpp_buffer *VAR_3 = VAR_2->buffer;
  struct if_stack *VAR_4 = VAR_3->if_stack;

  if (VAR_4 == ((void*)0))
    FUNC_2 (VAR_2, VAR_0, "#endif without #if");
  else
    {

      if (!VAR_4->was_skipping && FUNC_0 (VAR_2, VAR_1))
 FUNC_1 (VAR_2);


      if (VAR_4->next == 0 && VAR_4->mi_cmacro)
 {
   VAR_2->mi_valid = 1;
   VAR_2->mi_cmacro = VAR_4->mi_cmacro;
 }

      VAR_3->if_stack = VAR_4->next;
      VAR_2->state.skipping = VAR_4->was_skipping;
      FUNC_3 (&VAR_2->buffer_ob, VAR_4);
    }
}
