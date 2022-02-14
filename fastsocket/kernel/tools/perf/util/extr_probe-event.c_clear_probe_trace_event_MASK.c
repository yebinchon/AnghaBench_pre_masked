
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct probe_trace_arg_ref* module; struct probe_trace_arg_ref* symbol; } ;
struct probe_trace_event {int nargs; struct probe_trace_arg_ref* args; TYPE_1__ point; struct probe_trace_arg_ref* group; struct probe_trace_arg_ref* event; } ;
struct probe_trace_arg_ref {struct probe_trace_arg_ref* next; struct probe_trace_arg_ref* ref; struct probe_trace_arg_ref* type; struct probe_trace_arg_ref* value; struct probe_trace_arg_ref* name; } ;


 int FUNC_0 (struct probe_trace_arg_ref*) ;
 int FUNC_1 (struct probe_trace_event*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct probe_trace_event *VAR_0)
{
 struct probe_trace_arg_ref *VAR_1, *VAR_2;
 int VAR_3;

 if (VAR_0->event)
  FUNC_0(VAR_0->event);
 if (VAR_0->group)
  FUNC_0(VAR_0->group);
 if (VAR_0->point.symbol)
  FUNC_0(VAR_0->point.symbol);
 if (VAR_0->point.module)
  FUNC_0(VAR_0->point.module);
 for (VAR_3 = 0; VAR_3 < VAR_0->nargs; VAR_3++) {
  if (VAR_0->args[VAR_3].name)
   FUNC_0(VAR_0->args[VAR_3].name);
  if (VAR_0->args[VAR_3].value)
   FUNC_0(VAR_0->args[VAR_3].value);
  if (VAR_0->args[VAR_3].type)
   FUNC_0(VAR_0->args[VAR_3].type);
  VAR_1 = VAR_0->args[VAR_3].ref;
  while (VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_0(VAR_1);
   VAR_1 = VAR_2;
  }
 }
 if (VAR_0->args)
  FUNC_0(VAR_0->args);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
