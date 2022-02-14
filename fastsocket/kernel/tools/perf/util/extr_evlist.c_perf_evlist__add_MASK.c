
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int node; } ;
struct perf_evlist {int nr_entries; int entries; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct perf_evlist *VAR_0, struct perf_evsel *VAR_1)
{
 FUNC_0(&VAR_1->node, &VAR_0->entries);
 ++VAR_0->nr_entries;
}
