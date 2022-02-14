
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ retprobe; } ;
struct perf_probe_event {int nargs; TYPE_1__ point; TYPE_2__* args; } ;
struct perf_probe_arg {int dummy; } ;
struct TYPE_5__ {int var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (char const*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (char*,struct perf_probe_event*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 TYPE_2__* FUNC_7 (int) ;

int FUNC_8(const char *VAR_4, struct perf_probe_event *VAR_5)
{
 char **VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 VAR_6 = FUNC_1(VAR_4, &VAR_7);
 if (!VAR_6) {
  FUNC_5("Failed to split arguments.\n");
  return -VAR_1;
 }
 if (VAR_7 - 1 > VAR_3) {
  FUNC_6("Too many probe arguments (%d).\n", VAR_7 - 1);
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_4(VAR_6[0], VAR_5);
 if (VAR_9 < 0)
  goto out;


 VAR_5->nargs = VAR_7 - 1;
 VAR_5->args = FUNC_7(sizeof(struct perf_probe_arg) * VAR_5->nargs);
 if (VAR_5->args == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto out;
 }
 for (VAR_8 = 0; VAR_8 < VAR_5->nargs && VAR_9 >= 0; VAR_8++) {
  VAR_9 = FUNC_3(VAR_6[VAR_8 + 1], &VAR_5->args[VAR_8]);
  if (VAR_9 >= 0 &&
      FUNC_2(VAR_5->args[VAR_8].var) && VAR_5->point.retprobe) {
   FUNC_6("You can't specify local variable for"
           " kretprobe.\n");
   VAR_9 = -VAR_0;
  }
 }
out:
 FUNC_0(VAR_6);

 return VAR_9;
}
