
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {int dummy; } ;
struct TYPE_2__ {int sample_type; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct cpu_map {int nr; int* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpu_map* FUNC_0 (char const*) ;
 struct perf_evsel* FUNC_1 (struct perf_session*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,unsigned long*) ;

int FUNC_4(struct perf_session *VAR_3,
        const char *VAR_4, unsigned long *VAR_5)
{
 int VAR_6;
 struct cpu_map *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  struct perf_evsel *VAR_8;

  VAR_8 = FUNC_1(VAR_3, VAR_6);
  if (!VAR_8)
   continue;

  if (!(VAR_8->attr.sample_type & VAR_1)) {
   FUNC_2("File does not contain CPU events. "
          "Remove -c option to proceed.\n");
   return -1;
  }
 }

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_2("Invalid cpu_list\n");
  return -1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_7->nr; VAR_6++) {
  int VAR_9 = VAR_7->map[VAR_6];

  if (VAR_9 >= VAR_0) {
   FUNC_2("Requested CPU %d too large. "
          "Consider raising MAX_NR_CPUS\n", VAR_9);
   return -1;
  }

  FUNC_3(VAR_9, VAR_5);
 }

 return 0;
}
