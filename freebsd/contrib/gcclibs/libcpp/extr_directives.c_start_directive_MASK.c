
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int in_directive; scalar_t__ save_comments; } ;
struct TYPE_9__ {TYPE_3__* line_table; int directive_line; TYPE_2__ directive_result; TYPE_1__ state; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_8__ {int highest_line; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (cpp_reader *VAR_1)
{

  VAR_1->state.in_directive = 1;
  VAR_1->state.save_comments = 0;
  VAR_1->directive_result.type = VAR_0;


  VAR_1->directive_line = VAR_1->line_table->highest_line;
}
