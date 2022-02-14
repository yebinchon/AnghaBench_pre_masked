
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct if_stack {scalar_t__ type; int skip_elses; scalar_t__ mi_cmacro; int line; } ;
struct TYPE_8__ {int skipping; } ;
struct TYPE_9__ {TYPE_1__ state; TYPE_3__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_10__ {struct if_stack* if_stack; } ;
typedef TYPE_3__ cpp_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_3)
{
  cpp_buffer *VAR_4 = VAR_3->buffer;
  struct if_stack *VAR_5 = VAR_4->if_stack;

  if (VAR_5 == ((void*)0))
    FUNC_1 (VAR_3, VAR_0, "#elif without #if");
  else
    {
      if (VAR_5->type == VAR_2)
 {
   FUNC_1 (VAR_3, VAR_0, "#elif after #else");
   FUNC_2 (VAR_3, VAR_0, VAR_5->line, 0,
          "the conditional began here");
 }
      VAR_5->type = VAR_1;



      if (VAR_5->skip_elses)
 VAR_3->state.skipping = 1;
      else
 {
   VAR_3->state.skipping = 0;
   VAR_3->state.skipping = ! FUNC_0 (VAR_3);
   VAR_5->skip_elses = ! VAR_3->state.skipping;
 }


      VAR_5->mi_cmacro = 0;
    }
}
