
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int save_comments; scalar_t__ angled_headers; scalar_t__ in_expression; scalar_t__ in_directive; int prevent_expansion; scalar_t__ in_deferred_pragma; } ;
struct TYPE_8__ {int base; } ;
struct TYPE_10__ {int * directive; TYPE_2__ state; TYPE_1__ base_run; int cur_token; TYPE_1__* cur_run; int keep_tokens; } ;
typedef TYPE_3__ cpp_reader ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_4, int VAR_5)
{
  if (VAR_4->state.in_deferred_pragma)
    ;
  else if (FUNC_0 (VAR_4, VAR_3))
    {

      VAR_4->state.prevent_expansion--;

      if (VAR_4->directive != &VAR_2[VAR_0])
 FUNC_1 (VAR_4);
    }

  else if (VAR_5)
    {
      FUNC_2 (VAR_4);
      if (!VAR_4->keep_tokens)
 {
   VAR_4->cur_run = &VAR_4->base_run;
   VAR_4->cur_token = VAR_4->base_run.base;
 }
    }


  VAR_4->state.save_comments = ! FUNC_0 (VAR_4, VAR_1);
  VAR_4->state.in_directive = 0;
  VAR_4->state.in_expression = 0;
  VAR_4->state.angled_headers = 0;
  VAR_4->directive = 0;
}
