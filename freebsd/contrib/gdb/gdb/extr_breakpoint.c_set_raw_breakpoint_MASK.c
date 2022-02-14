
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct symtab_and_line {int line; int section; TYPE_1__* symtab; int pc; } ;
struct breakpoint {int type; int thread; struct breakpoint* next; scalar_t__ pending; int * ops; int * exec_pathname; scalar_t__ forked_inferior_pid; int * triggered_dll_pathname; int * dll_pathname; int frame_id; int * commands; scalar_t__ ignore_count; scalar_t__ silent; int enable_state; int line_number; int input_radix; int language; TYPE_3__* loc; int * source_file; } ;
typedef enum bptype { ____Placeholder_bptype } bptype ;
struct TYPE_6__ {int section; int requested_address; int address; } ;
struct TYPE_5__ {int la_language; } ;
struct TYPE_4__ {int filename; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct breakpoint*,int) ;
 int VAR_0 ;
 struct breakpoint* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (struct breakpoint*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct breakpoint*,int ,int) ;
 int VAR_4 ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

struct breakpoint *
FUNC_8 (struct symtab_and_line VAR_5, enum bptype VAR_6)
{
  struct breakpoint *VAR_7, *VAR_8;

  VAR_7 = (struct breakpoint *) FUNC_7 (sizeof (struct breakpoint));
  FUNC_4 (VAR_7, 0, sizeof (*VAR_7));
  VAR_7->loc = FUNC_1 (VAR_7, VAR_6);
  VAR_7->loc->requested_address = VAR_5.pc;
  VAR_7->loc->address = FUNC_0 (VAR_7->loc->requested_address);
  if (VAR_5.symtab == ((void*)0))
    VAR_7->source_file = ((void*)0);
  else
    VAR_7->source_file = FUNC_5 (VAR_5.symtab->filename,
     FUNC_6 (VAR_5.symtab->filename));
  VAR_7->loc->section = VAR_5.section;
  VAR_7->type = VAR_6;
  VAR_7->language = VAR_2->la_language;
  VAR_7->input_radix = VAR_3;
  VAR_7->thread = -1;
  VAR_7->line_number = VAR_5.line;
  VAR_7->enable_state = VAR_0;
  VAR_7->next = 0;
  VAR_7->silent = 0;
  VAR_7->ignore_count = 0;
  VAR_7->commands = ((void*)0);
  VAR_7->frame_id = VAR_4;
  VAR_7->dll_pathname = ((void*)0);
  VAR_7->triggered_dll_pathname = ((void*)0);
  VAR_7->forked_inferior_pid = 0;
  VAR_7->exec_pathname = ((void*)0);
  VAR_7->ops = ((void*)0);
  VAR_7->pending = 0;





  VAR_8 = VAR_1;
  if (VAR_8 == 0)
    VAR_1 = VAR_7;
  else
    {
      while (VAR_8->next)
 VAR_8 = VAR_8->next;
      VAR_8->next = VAR_7;
    }

  FUNC_3 (VAR_7);
  FUNC_2 ();

  return VAR_7;
}
