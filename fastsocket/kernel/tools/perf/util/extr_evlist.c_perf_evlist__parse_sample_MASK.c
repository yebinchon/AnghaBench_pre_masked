
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {int dummy; } ;
struct perf_evsel {int dummy; } ;
struct perf_evlist {int dummy; } ;


 struct perf_evsel* FUNC_0 (struct perf_evlist*) ;
 int FUNC_1 (struct perf_evsel*,union perf_event*,struct perf_sample*) ;

int FUNC_2(struct perf_evlist *VAR_0, union perf_event *VAR_1,
         struct perf_sample *VAR_2)
{
 struct perf_evsel *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
