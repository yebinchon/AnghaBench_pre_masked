
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_point {struct perf_probe_arg_field* lazy_line; struct perf_probe_arg_field* function; struct perf_probe_arg_field* file; } ;
struct perf_probe_event {int nargs; struct perf_probe_arg_field* args; struct perf_probe_arg_field* group; struct perf_probe_arg_field* event; struct perf_probe_point point; } ;
struct perf_probe_arg_field {struct perf_probe_arg_field* name; struct perf_probe_arg_field* next; struct perf_probe_arg_field* field; struct perf_probe_arg_field* type; struct perf_probe_arg_field* var; } ;


 int FUNC_0 (struct perf_probe_arg_field*) ;
 int FUNC_1 (struct perf_probe_event*,int ,int) ;

void FUNC_2(struct perf_probe_event *VAR_0)
{
 struct perf_probe_point *VAR_1 = &VAR_0->point;
 struct perf_probe_arg_field *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_0->event)
  FUNC_0(VAR_0->event);
 if (VAR_0->group)
  FUNC_0(VAR_0->group);
 if (VAR_1->file)
  FUNC_0(VAR_1->file);
 if (VAR_1->function)
  FUNC_0(VAR_1->function);
 if (VAR_1->lazy_line)
  FUNC_0(VAR_1->lazy_line);
 for (VAR_4 = 0; VAR_4 < VAR_0->nargs; VAR_4++) {
  if (VAR_0->args[VAR_4].name)
   FUNC_0(VAR_0->args[VAR_4].name);
  if (VAR_0->args[VAR_4].var)
   FUNC_0(VAR_0->args[VAR_4].var);
  if (VAR_0->args[VAR_4].type)
   FUNC_0(VAR_0->args[VAR_4].type);
  VAR_2 = VAR_0->args[VAR_4].field;
  while (VAR_2) {
   VAR_3 = VAR_2->next;
   if (VAR_2->name)
    FUNC_0(VAR_2->name);
   FUNC_0(VAR_2);
   VAR_2 = VAR_3;
  }
 }
 if (VAR_0->args)
  FUNC_0(VAR_0->args);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
