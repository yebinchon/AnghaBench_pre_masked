
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ui_stream {int stream; } ;
struct cleanup {int dummy; } ;
struct breakpoint {int type; char* dll_pathname; int line_number; int * source_file; TYPE_2__* loc; int addr_string; scalar_t__ pending; int number; int exp; TYPE_1__* ops; } ;
struct TYPE_4__ {int address; } ;
struct TYPE_3__ {int (* print_mention ) (struct breakpoint*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct breakpoint*) ;
 int FUNC_2 (struct cleanup*) ;
 int VAR_1 ;
 struct cleanup* FUNC_3 (struct ui_stream*) ;
 struct cleanup* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct breakpoint*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,char*,struct ui_stream*) ;
 scalar_t__ FUNC_11 (int ) ;
 struct ui_stream* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_14 (struct breakpoint *VAR_3)
{
  int VAR_4 = 0;
  struct cleanup *VAR_5, *VAR_6;
  struct ui_stream *VAR_7;

  VAR_7 = FUNC_12 (VAR_2);
  VAR_5 = FUNC_3 (VAR_7);






  if (&FUNC_1)
    FUNC_1 (VAR_3);
  FUNC_0 (VAR_3->number);

  if (VAR_3->ops != ((void*)0) && VAR_3->ops->print_mention != ((void*)0))
    VAR_3->ops->print_mention (VAR_3);
  else
    switch (VAR_3->type)
      {
      case 137:
 FUNC_7 ("(apparently deleted?) Eventpoint %d: ", VAR_3->number);
 break;
      case 129:
 FUNC_13 (VAR_2, "Watchpoint ");
 VAR_6 = FUNC_4 (VAR_2, "wpt");
 FUNC_9 (VAR_2, "number", VAR_3->number);
 FUNC_13 (VAR_2, ": ");
 FUNC_6 (VAR_3->exp, VAR_7->stream);
 FUNC_10 (VAR_2, "exp", VAR_7);
 FUNC_2 (VAR_6);
 break;
      case 140:
 FUNC_13 (VAR_2, "Hardware watchpoint ");
 VAR_6 = FUNC_4 (VAR_2, "wpt");
 FUNC_9 (VAR_2, "number", VAR_3->number);
 FUNC_13 (VAR_2, ": ");
 FUNC_6 (VAR_3->exp, VAR_7->stream);
 FUNC_10 (VAR_2, "exp", VAR_7);
 FUNC_2 (VAR_6);
 break;
      case 135:
 FUNC_13 (VAR_2, "Hardware read watchpoint ");
 VAR_6 = FUNC_4 (VAR_2, "hw-rwpt");
 FUNC_9 (VAR_2, "number", VAR_3->number);
 FUNC_13 (VAR_2, ": ");
 FUNC_6 (VAR_3->exp, VAR_7->stream);
 FUNC_10 (VAR_2, "exp", VAR_7);
 FUNC_2 (VAR_6);
 break;
      case 152:
 FUNC_13 (VAR_2, "Hardware access (read/write) watchpoint ");
 VAR_6 = FUNC_4 (VAR_2, "hw-awpt");
 FUNC_9 (VAR_2, "number", VAR_3->number);
 FUNC_13 (VAR_2, ": ");
 FUNC_6 (VAR_3->exp, VAR_7->stream);
 FUNC_10 (VAR_2, "exp", VAR_7);
 FUNC_2 (VAR_6);
 break;
      case 151:
 if (FUNC_11 (VAR_2))
   {
     VAR_4 = 0;
     break;
   }
 FUNC_7 ("Breakpoint %d", VAR_3->number);
 VAR_4 = 1;
 break;
      case 141:
 if (FUNC_11 (VAR_2))
   {
     VAR_4 = 0;
     break;
   }
 FUNC_7 ("Hardware assisted breakpoint %d", VAR_3->number);
 VAR_4 = 1;
 break;
      case 146:
      case 144:
 FUNC_7 ("Catchpoint %d (%s %s)",
    VAR_3->number,
    (VAR_3->type == 146) ? "load" : "unload",
    (VAR_3->dll_pathname != ((void*)0)) ?
    VAR_3->dll_pathname : "<any library>");
 break;
      case 147:
      case 143:
 FUNC_7 ("Catchpoint %d (%s)",
    VAR_3->number,
    (VAR_3->type == 147) ? "fork" : "vfork");
 break;
      case 148:
 FUNC_7 ("Catchpoint %d (exec)",
    VAR_3->number);
 break;
      case 149:
      case 145:
 FUNC_7 ("Catchpoint %d (%s)",
    VAR_3->number,
    (VAR_3->type == 149) ? "catch" : "throw");
 break;

      case 130:
      case 142:
      case 139:
      case 138:
      case 133:
      case 131:
      case 150:
      case 128:
      case 134:
      case 132:
      case 136:
 break;
      }

  if (VAR_4)
    {
      if (VAR_3->pending)
 {
   FUNC_7 (" (%s) pending.", VAR_3->addr_string);
 }
      else
 {
   if (VAR_0 || VAR_3->source_file == ((void*)0))
     {
       FUNC_7 (" at ");
       FUNC_5 (VAR_3->loc->address, 1, VAR_1);
     }
   if (VAR_3->source_file)
     FUNC_7 (": file %s, line %d.",
        VAR_3->source_file, VAR_3->line_number);
 }
    }
  FUNC_2 (VAR_5);
  if (FUNC_11 (VAR_2))
    return;
  FUNC_7 ("\n");
}
