
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int skipping; int in_expression; int prevent_expansion; } ;
struct TYPE_8__ {scalar_t__ base; scalar_t__ cur; } ;
struct TYPE_10__ {TYPE_2__ state; TYPE_1__ out; TYPE_5__* directive; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_5__* VAR_4 ;

__attribute__((used)) static void
FUNC_2 (cpp_reader *VAR_5)
{
  if (VAR_5->directive != &VAR_4[VAR_1])
    {
      bool VAR_6 = (VAR_5->directive
   && ! (VAR_5->directive->flags & VAR_0));
      bool VAR_7 = VAR_5->state.skipping;

      VAR_5->state.in_expression = (VAR_5->directive == &VAR_4[VAR_3]
        || VAR_5->directive == &VAR_4[VAR_2]);
      if (VAR_5->state.in_expression)
 VAR_5->state.skipping = 0;

      if (VAR_6)
 VAR_5->state.prevent_expansion++;
      FUNC_1 (VAR_5, ((void*)0));
      if (VAR_6)
 VAR_5->state.prevent_expansion--;

      VAR_5->state.skipping = VAR_7;
      FUNC_0 (VAR_5, VAR_5->out.base,
      VAR_5->out.cur - VAR_5->out.base);
    }


  VAR_5->state.prevent_expansion++;
}
