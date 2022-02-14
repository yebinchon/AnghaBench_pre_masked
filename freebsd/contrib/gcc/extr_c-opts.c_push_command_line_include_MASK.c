
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct deferred_opt {scalar_t__ code; int arg; } ;
struct TYPE_4__ {int print_include_names; int preprocessed; int warn_unused_macros; } ;
struct TYPE_3__ {int trace_includes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_3 ;
 struct deferred_opt* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  while (VAR_5 < VAR_3)
    {
      struct deferred_opt *VAR_10 = &VAR_4[VAR_5++];

      if (!VAR_2->preprocessed && VAR_10->code == VAR_1
   && FUNC_1 (VAR_7, VAR_10->arg))
 return;
    }

  if (VAR_5 == VAR_3)
    {
      VAR_5++;

      VAR_2->warn_unused_macros = VAR_9;

      if (!VAR_2->preprocessed)
 FUNC_0 (VAR_7, VAR_0, VAR_8);



      VAR_6.trace_includes = VAR_2->print_include_names;
    }
}
