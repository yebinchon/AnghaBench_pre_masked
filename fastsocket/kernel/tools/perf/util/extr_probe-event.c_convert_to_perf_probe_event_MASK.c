
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct probe_trace_event {char* event; char* group; int nargs; TYPE_2__* args; int point; } ;
struct perf_probe_event {int nargs; TYPE_1__* args; int point; int * group; int * event; } ;
struct perf_probe_arg {int dummy; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_probe_event*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct probe_trace_event *VAR_1,
          struct perf_probe_event *VAR_2, bool VAR_3)
{
 char VAR_4[64] = "";
 int VAR_5, VAR_6;


 VAR_2->event = FUNC_3(VAR_1->event);
 VAR_2->group = FUNC_3(VAR_1->group);
 if (VAR_2->event == ((void*)0) || VAR_2->group == ((void*)0))
  return -VAR_0;


 if (VAR_3)
  VAR_6 = FUNC_2(&VAR_1->point, &VAR_2->point);
 else
  VAR_6 = FUNC_1(&VAR_1->point, &VAR_2->point);

 if (VAR_6 < 0)
  return VAR_6;


 VAR_2->nargs = VAR_1->nargs;
 VAR_2->args = FUNC_5(sizeof(struct perf_probe_arg) * VAR_2->nargs);
 if (VAR_2->args == ((void*)0))
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_1->nargs && VAR_6 >= 0; VAR_5++) {
  if (VAR_1->args[VAR_5].name)
   VAR_2->args[VAR_5].name = FUNC_3(VAR_1->args[VAR_5].name);
  else {
   VAR_6 = FUNC_4(&VAR_1->args[VAR_5],
         VAR_4, 64);
   VAR_2->args[VAR_5].name = FUNC_3(VAR_4);
  }
  if (VAR_2->args[VAR_5].name == ((void*)0) && VAR_6 >= 0)
   VAR_6 = -VAR_0;
 }

 if (VAR_6 < 0)
  FUNC_0(VAR_2);

 return VAR_6;
}
