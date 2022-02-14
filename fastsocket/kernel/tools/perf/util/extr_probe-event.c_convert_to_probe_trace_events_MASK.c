
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct symbol {scalar_t__ end; scalar_t__ start; } ;
struct TYPE_8__ {scalar_t__ offset; int * symbol; int retprobe; int * module; } ;
struct probe_trace_event {int nargs; TYPE_4__ point; TYPE_3__* args; scalar_t__ uprobes; } ;
struct probe_trace_arg {int dummy; } ;
struct TYPE_5__ {char const* function; scalar_t__ offset; int retprobe; } ;
struct perf_probe_event {int nargs; scalar_t__ uprobes; TYPE_2__* args; TYPE_1__ point; } ;
struct TYPE_7__ {int * type; int * value; int * name; } ;
struct TYPE_6__ {char const* name; char const* var; char const* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct symbol* FUNC_0 (int *,int *) ;
 int FUNC_1 (struct probe_trace_event*) ;
 int FUNC_2 (struct probe_trace_event*) ;
 int FUNC_3 (char*,int *) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (struct perf_probe_event*,struct probe_trace_event**,int,char const*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct perf_probe_event *VAR_2,
       struct probe_trace_event **VAR_3,
       int VAR_4, const char *VAR_5)
{
 struct symbol *VAR_6;
 int VAR_7 = 0, VAR_8;
 struct probe_trace_event *VAR_9;


 VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 != 0)
  return VAR_7;


 VAR_9 = *VAR_3 = FUNC_6(sizeof(struct probe_trace_event));
 if (VAR_9 == ((void*)0))
  return -VAR_1;


 VAR_9->point.symbol = FUNC_4(VAR_2->point.function);
 if (VAR_9->point.symbol == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto error;
 }

 if (VAR_5) {
  VAR_9->point.module = FUNC_4(VAR_5);
  if (VAR_9->point.module == ((void*)0)) {
   VAR_7 = -VAR_1;
   goto error;
  }
 }

 VAR_9->point.offset = VAR_2->point.offset;
 VAR_9->point.retprobe = VAR_2->point.retprobe;
 VAR_9->nargs = VAR_2->nargs;
 VAR_9->uprobes = VAR_2->uprobes;

 if (VAR_9->nargs) {
  VAR_9->args = FUNC_6(sizeof(struct probe_trace_arg)
       * VAR_9->nargs);
  if (VAR_9->args == ((void*)0)) {
   VAR_7 = -VAR_1;
   goto error;
  }
  for (VAR_8 = 0; VAR_8 < VAR_9->nargs; VAR_8++) {
   if (VAR_2->args[VAR_8].name) {
    VAR_9->args[VAR_8].name = FUNC_4(VAR_2->args[VAR_8].name);
    if (VAR_9->args[VAR_8].name == ((void*)0)) {
     VAR_7 = -VAR_1;
     goto error;
    }
   }
   VAR_9->args[VAR_8].value = FUNC_4(VAR_2->args[VAR_8].var);
   if (VAR_9->args[VAR_8].value == ((void*)0)) {
    VAR_7 = -VAR_1;
    goto error;
   }
   if (VAR_2->args[VAR_8].type) {
    VAR_9->args[VAR_8].type = FUNC_4(VAR_2->args[VAR_8].type);
    if (VAR_9->args[VAR_8].type == ((void*)0)) {
     VAR_7 = -VAR_1;
     goto error;
    }
   }
  }
 }

 if (VAR_2->uprobes)
  return 1;


 VAR_6 = FUNC_0(VAR_9->point.symbol, ((void*)0));
 if (!VAR_6) {
  FUNC_3("Kernel symbol \'%s\' not found.\n",
      VAR_9->point.symbol);
  VAR_7 = -VAR_0;
  goto error;
 } else if (VAR_9->point.offset > VAR_6->end - VAR_6->start) {
  FUNC_3("Offset specified is greater than size of %s\n",
      VAR_9->point.symbol);
  VAR_7 = -VAR_0;
  goto error;

 }

 return 1;
error:
 FUNC_1(VAR_9);
 FUNC_2(VAR_9);
 *VAR_3 = ((void*)0);
 return VAR_7;
}
