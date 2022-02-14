
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_probe_event {int nargs; int uprobes; } ;
struct TYPE_2__ {size_t nevents; int uprobes; struct perf_probe_event* events; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char const*,struct perf_probe_event*) ;
 int FUNC_1 (char*,size_t,...) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
 struct perf_probe_event *VAR_3 = &VAR_1.events[VAR_1.nevents];
 int VAR_4;

 FUNC_1("probe-definition(%d): %s\n", VAR_1.nevents, VAR_2);
 if (++VAR_1.nevents == VAR_0) {
  FUNC_2("Too many probes (> %d) were specified.", VAR_0);
  return -1;
 }

 VAR_3->uprobes = VAR_1.uprobes;


 VAR_4 = FUNC_0(VAR_2, VAR_3);
 FUNC_1("%d arguments\n", VAR_3->nargs);

 return VAR_4;
}
