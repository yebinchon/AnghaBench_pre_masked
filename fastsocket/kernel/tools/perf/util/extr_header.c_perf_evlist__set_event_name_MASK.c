
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {scalar_t__ name; int idx; } ;
struct perf_evlist {int dummy; } ;


 struct perf_evsel* FUNC_0 (struct perf_evlist*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct perf_evlist *VAR_0,
       struct perf_evsel *VAR_1)
{
 struct perf_evsel *VAR_2;

 if (!VAR_1->name)
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_1->idx);
 if (!VAR_2)
  return;

 if (VAR_2->name)
  return;

 VAR_2->name = FUNC_1(VAR_1->name);
}
