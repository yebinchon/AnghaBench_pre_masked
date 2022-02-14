
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tracepoint {int enabled_p; struct tracepoint* next; int * addr_string; scalar_t__ pass_count; scalar_t__ step_count; int line_number; int input_radix; int language; int section; int * source_file; int address; } ;
struct symtab_and_line {int line; int section; TYPE_1__* symtab; int pc; } ;
struct cleanup {int dummy; } ;
struct TYPE_4__ {int la_language; } ;
struct TYPE_3__ {int filename; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 int VAR_1 ;
 struct cleanup* FUNC_1 (int ,struct tracepoint*) ;
 int FUNC_2 (struct tracepoint*,int ,int) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct tracepoint* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct tracepoint *
FUNC_6 (struct symtab_and_line VAR_4)
{
  struct tracepoint *VAR_5, *VAR_6;
  struct cleanup *VAR_7;

  VAR_5 = (struct tracepoint *) FUNC_5 (sizeof (struct tracepoint));
  VAR_7 = FUNC_1 (VAR_3, VAR_5);
  FUNC_2 (VAR_5, 0, sizeof (*VAR_5));
  VAR_5->address = VAR_4.pc;
  if (VAR_4.symtab == ((void*)0))
    VAR_5->source_file = ((void*)0);
  else
    VAR_5->source_file = FUNC_3 (VAR_4.symtab->filename,
     FUNC_4 (VAR_4.symtab->filename));

  VAR_5->section = VAR_4.section;
  VAR_5->language = VAR_0->la_language;
  VAR_5->input_radix = VAR_1;
  VAR_5->line_number = VAR_4.line;
  VAR_5->enabled_p = 1;
  VAR_5->next = 0;
  VAR_5->step_count = 0;
  VAR_5->pass_count = 0;
  VAR_5->addr_string = ((void*)0);





  VAR_6 = VAR_2;
  if (VAR_6 == 0)
    VAR_2 = VAR_5;
  else
    {
      while (VAR_6->next)
 VAR_6 = VAR_6->next;
      VAR_6->next = VAR_5;
    }
  FUNC_0 (VAR_7);
  return VAR_5;
}
