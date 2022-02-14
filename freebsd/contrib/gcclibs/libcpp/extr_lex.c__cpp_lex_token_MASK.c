
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int flags; scalar_t__ type; } ;
typedef TYPE_3__ const cpp_token ;
struct TYPE_15__ {int parsing_args; int skipping; scalar_t__ in_deferred_pragma; scalar_t__ in_directive; } ;
struct TYPE_14__ {int (* line_change ) (TYPE_4__*,TYPE_3__ const*,int) ;} ;
struct TYPE_17__ {scalar_t__ cur_token; int mi_valid; TYPE_2__ state; TYPE_1__ cb; TYPE_3__ const directive_result; scalar_t__ lookaheads; TYPE_7__* cur_run; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_18__ {scalar_t__ limit; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 TYPE_3__ const* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 () ;
 TYPE_7__* FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__ const*,int) ;

const cpp_token *
FUNC_5 (cpp_reader *VAR_5)
{
  cpp_token *VAR_6;

  for (;;)
    {
      if (VAR_5->cur_token == VAR_5->cur_run->limit)
 {
   VAR_5->cur_run = FUNC_3 (VAR_5->cur_run);
   VAR_5->cur_token = VAR_5->cur_run->base;
 }


      if (VAR_5->cur_token < VAR_5->cur_run->base
   || VAR_5->cur_token >= VAR_5->cur_run->limit)
 FUNC_2 ();

      if (VAR_5->lookaheads)
 {
   VAR_5->lookaheads--;
   VAR_6 = VAR_5->cur_token++;
 }
      else
 VAR_6 = FUNC_1 (VAR_5);

      if (VAR_6->flags & VAR_0)
 {


   if (VAR_6->type == VAR_2



       && VAR_5->state.parsing_args != 1)
     {
       if (FUNC_0 (VAR_5, VAR_6->flags & VAR_4))
  {
    if (VAR_5->directive_result.type == VAR_3)
      continue;
    VAR_6 = &VAR_5->directive_result;
  }
     }
   else if (VAR_5->state.in_deferred_pragma)
     VAR_6 = &VAR_5->directive_result;

   if (VAR_5->cb.line_change && !VAR_5->state.skipping)
     VAR_5->cb.line_change (VAR_5, VAR_6, VAR_5->state.parsing_args);
 }


      if (VAR_5->state.in_directive || VAR_5->state.in_deferred_pragma)
 break;




      VAR_5->mi_valid = 0;

      if (!VAR_5->state.skipping || VAR_6->type == VAR_1)
 break;
    }

  return VAR_6;
}
