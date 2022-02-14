
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct perf_evsel {int dummy; } ;
struct event_key {int dummy; } ;


 int FUNC_0 (struct perf_evsel*,struct perf_sample*,struct event_key*) ;
 scalar_t__ FUNC_1 (struct perf_evsel*) ;

__attribute__((used)) static bool FUNC_2(struct perf_evsel *VAR_0,
        struct perf_sample *VAR_1, struct event_key *VAR_2)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  return 1;
 }

 return 0;
}
