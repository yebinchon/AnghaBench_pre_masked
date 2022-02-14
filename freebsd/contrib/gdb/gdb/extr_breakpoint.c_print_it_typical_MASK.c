
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ui_stream {int stream; } ;
struct cleanup {int dummy; } ;
typedef enum print_stop_action { ____Placeholder_print_stop_action } print_stop_action ;
typedef TYPE_2__* bpstat ;
struct TYPE_7__ {int type; int * val; int number; int exec_pathname; int forked_inferior_pid; int triggered_dll_pathname; TYPE_1__* loc; } ;
struct TYPE_6__ {TYPE_4__* breakpoint_at; int * old_val; } ;
struct TYPE_5__ {int address; int requested_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_14 ;
 int FUNC_4 (struct cleanup*) ;
 struct cleanup* FUNC_5 (struct ui_stream*) ;
 struct cleanup* FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,char*,struct ui_stream*) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (int ) ;
 struct ui_stream* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int VAR_15 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ,int ) ;

__attribute__((used)) static enum print_stop_action
FUNC_17 (bpstat VAR_16)
{
  struct cleanup *VAR_17, *VAR_18;
  struct ui_stream *VAR_19;
  VAR_19 = FUNC_13 (VAR_15);
  VAR_17 = FUNC_5 (VAR_19);


  if (VAR_16->breakpoint_at == ((void*)0))
    return VAR_12;

  switch (VAR_16->breakpoint_at->type)
    {
    case 151:
    case 141:
      if (VAR_16->breakpoint_at->loc->address != VAR_16->breakpoint_at->loc->requested_address)
 FUNC_3 (VAR_16->breakpoint_at->loc->requested_address,
                                VAR_16->breakpoint_at->loc->address,
           VAR_16->breakpoint_at->number, 1);
      FUNC_0 (VAR_16->breakpoint_at->number);
      FUNC_14 (VAR_15, "\nBreakpoint ");
      if (FUNC_12 (VAR_15))
 FUNC_11 (VAR_15, "reason", "breakpoint-hit");
      FUNC_9 (VAR_15, "bkptno", VAR_16->breakpoint_at->number);
      FUNC_14 (VAR_15, ", ");
      return VAR_10;
      break;

    case 134:



      FUNC_8 ("Stopped due to shared library event\n");
      return VAR_9;
      break;

    case 132:


      FUNC_8 ("Thread Event Breakpoint: gdb should not stop!\n");
      return VAR_9;
      break;

    case 136:

      FUNC_8 ("Overlay Event Breakpoint: gdb should not stop!\n");
      return VAR_9;
      break;

    case 146:
      FUNC_1 (VAR_16->breakpoint_at->number);
      FUNC_8 ("\nCatchpoint %d (", VAR_16->breakpoint_at->number);
      FUNC_8 ("loaded");
      FUNC_8 (" %s), ", VAR_16->breakpoint_at->triggered_dll_pathname);
      return VAR_10;
      break;

    case 144:
      FUNC_1 (VAR_16->breakpoint_at->number);
      FUNC_8 ("\nCatchpoint %d (", VAR_16->breakpoint_at->number);
      FUNC_8 ("unloaded");
      FUNC_8 (" %s), ", VAR_16->breakpoint_at->triggered_dll_pathname);
      return VAR_10;
      break;

    case 147:
      FUNC_1 (VAR_16->breakpoint_at->number);
      FUNC_8 ("\nCatchpoint %d (", VAR_16->breakpoint_at->number);
      FUNC_8 ("forked");
      FUNC_8 (" process %d), ",
         VAR_16->breakpoint_at->forked_inferior_pid);
      return VAR_10;
      break;

    case 143:
      FUNC_1 (VAR_16->breakpoint_at->number);
      FUNC_8 ("\nCatchpoint %d (", VAR_16->breakpoint_at->number);
      FUNC_8 ("vforked");
      FUNC_8 (" process %d), ",
         VAR_16->breakpoint_at->forked_inferior_pid);
      return VAR_10;
      break;

    case 148:
      FUNC_1 (VAR_16->breakpoint_at->number);
      FUNC_8 ("\nCatchpoint %d (exec'd %s), ",
         VAR_16->breakpoint_at->number,
         VAR_16->breakpoint_at->exec_pathname);
      return VAR_10;
      break;

    case 149:
      if (VAR_14 &&
   (VAR_3 == VAR_7))
 {
   FUNC_1 (VAR_16->breakpoint_at->number);
   FUNC_8 ("\nCatchpoint %d (exception caught), ",
      VAR_16->breakpoint_at->number);
   FUNC_8 ("throw location ");
   if (VAR_6 && VAR_5)
     FUNC_8 ("%s:%d",
        VAR_4,
        VAR_5);
   else
     FUNC_8 ("unknown");

   FUNC_8 (", catch location ");
   if (VAR_2 && VAR_1)
     FUNC_8 ("%s:%d",
        VAR_0,
        VAR_1);
   else
     FUNC_8 ("unknown");

   FUNC_8 ("\n");

   return VAR_11;
 }
      else
 {

   return VAR_12;
 }
      break;

    case 145:
      if (VAR_14 &&
   (VAR_3 == VAR_8))
 {
   FUNC_1 (VAR_16->breakpoint_at->number);
   FUNC_8 ("\nCatchpoint %d (exception thrown), ",
      VAR_16->breakpoint_at->number);
   FUNC_8 ("throw location ");
   if (VAR_6 && VAR_5)
     FUNC_8 ("%s:%d",
        VAR_4,
        VAR_5);
   else
     FUNC_8 ("unknown");

   FUNC_8 (", catch location ");
   if (VAR_2 && VAR_1)
     FUNC_8 ("%s:%d",
        VAR_0,
        VAR_1);
   else
     FUNC_8 ("unknown");

   FUNC_8 ("\n");

   return VAR_11;
 }
      else
 {

   return VAR_12;
 }
      break;

    case 129:
    case 140:
      if (VAR_16->old_val != ((void*)0))
 {
   FUNC_2 (VAR_16->breakpoint_at->number);
   if (FUNC_12 (VAR_15))
     FUNC_11 (VAR_15, "reason", "watchpoint-trigger");
   FUNC_7 (VAR_16->breakpoint_at);
   VAR_18 = FUNC_6 (VAR_15, "value");
   FUNC_14 (VAR_15, "\nOld value = ");
   FUNC_16 (VAR_16->old_val, VAR_19->stream, 0, VAR_13);
   FUNC_10 (VAR_15, "old", VAR_19);
   FUNC_14 (VAR_15, "\nNew value = ");
   FUNC_16 (VAR_16->breakpoint_at->val, VAR_19->stream, 0, VAR_13);
   FUNC_10 (VAR_15, "new", VAR_19);
   FUNC_4 (VAR_18);
   FUNC_14 (VAR_15, "\n");
   FUNC_15 (VAR_16->old_val);
   VAR_16->old_val = ((void*)0);
 }

      return VAR_12;
      break;

    case 135:
      if (FUNC_12 (VAR_15))
 FUNC_11 (VAR_15, "reason", "read-watchpoint-trigger");
      FUNC_7 (VAR_16->breakpoint_at);
      VAR_18 = FUNC_6 (VAR_15, "value");
      FUNC_14 (VAR_15, "\nValue = ");
      FUNC_16 (VAR_16->breakpoint_at->val, VAR_19->stream, 0, VAR_13);
      FUNC_10 (VAR_15, "value", VAR_19);
      FUNC_4 (VAR_18);
      FUNC_14 (VAR_15, "\n");
      return VAR_12;
      break;

    case 152:
      if (VAR_16->old_val != ((void*)0))
 {
   FUNC_2 (VAR_16->breakpoint_at->number);
   if (FUNC_12 (VAR_15))
     FUNC_11 (VAR_15, "reason", "access-watchpoint-trigger");
   FUNC_7 (VAR_16->breakpoint_at);
   VAR_18 = FUNC_6 (VAR_15, "value");
   FUNC_14 (VAR_15, "\nOld value = ");
   FUNC_16 (VAR_16->old_val, VAR_19->stream, 0, VAR_13);
   FUNC_10 (VAR_15, "old", VAR_19);
   FUNC_15 (VAR_16->old_val);
   VAR_16->old_val = ((void*)0);
   FUNC_14 (VAR_15, "\nNew value = ");
 }
      else
 {
   FUNC_7 (VAR_16->breakpoint_at);
   if (FUNC_12 (VAR_15))
     FUNC_11 (VAR_15, "reason", "access-watchpoint-trigger");
   VAR_18 = FUNC_6 (VAR_15, "value");
   FUNC_14 (VAR_15, "\nValue = ");
 }
      FUNC_16 (VAR_16->breakpoint_at->val, VAR_19->stream, 0,VAR_13);
      FUNC_10 (VAR_15, "new", VAR_19);
      FUNC_4 (VAR_18);
      FUNC_14 (VAR_15, "\n");
      return VAR_12;
      break;




    case 142:
      if (FUNC_12 (VAR_15))
 FUNC_11 (VAR_15, "reason", "function-finished");
      return VAR_12;
      break;

    case 130:
      if (FUNC_12 (VAR_15))
 FUNC_11 (VAR_15, "reason", "location-reached");
      return VAR_12;
      break;

    case 137:
    case 139:
    case 138:
    case 133:
    case 131:
    case 128:
    case 150:
    default:
      return VAR_12;
    }
}
