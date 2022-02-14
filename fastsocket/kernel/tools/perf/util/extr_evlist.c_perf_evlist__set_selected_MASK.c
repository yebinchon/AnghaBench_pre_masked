
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int dummy; } ;
struct perf_evlist {struct perf_evsel* selected; } ;



void FUNC_0(struct perf_evlist *VAR_0,
          struct perf_evsel *VAR_1)
{
 VAR_0->selected = VAR_1;
}
