
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perf_sched {int dummy; } ;
struct perf_sample {int dummy; } ;
struct perf_evsel {int dummy; } ;


 int FUNC_0 (struct perf_evsel*,struct perf_sample*,char*) ;
 char* FUNC_1 (struct perf_evsel*,struct perf_sample*,char*) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (struct perf_sched*,int const,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct perf_sched *VAR_1, struct perf_evsel *VAR_2,
        struct perf_sample *VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_2, VAR_3, "parent_comm"),
     *VAR_5 = FUNC_1(VAR_2, VAR_3, "child_comm");
 const u32 VAR_6 = FUNC_0(VAR_2, VAR_3, "parent_pid"),
    VAR_7 = FUNC_0(VAR_2, VAR_3, "child_pid");

 if (VAR_0) {
  FUNC_2("sched_fork event %p\n", VAR_2);
  FUNC_2("... parent: %s/%d\n", VAR_4, VAR_6);
  FUNC_2("...  child: %s/%d\n", VAR_5, VAR_7);
 }

 FUNC_3(VAR_1, VAR_6, VAR_4);
 FUNC_3(VAR_1, VAR_7, VAR_5);
 return 0;
}
