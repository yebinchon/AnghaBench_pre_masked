
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* func; } ;
struct perf_evsel {TYPE_1__ handler; } ;
struct perf_evlist {int nr_entries; } ;


 int FUNC_0 (struct perf_evlist*,struct perf_evsel*) ;
 struct perf_evsel* FUNC_1 (char const*,char const*,int ) ;

int FUNC_2(struct perf_evlist *VAR_0,
      const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct perf_evsel *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0->nr_entries);
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_4->handler.func = VAR_3;
 FUNC_0(VAR_0, VAR_4);
 return 0;
}
