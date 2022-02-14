
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_type; } ;
struct perf_evsel {int idx; int sample_size; int hists; int node; struct perf_event_attr attr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct perf_evsel *VAR_0,
        struct perf_event_attr *VAR_1, int VAR_2)
{
 VAR_0->idx = VAR_2;
 VAR_0->attr = *VAR_1;
 FUNC_0(&VAR_0->node);
 FUNC_2(&VAR_0->hists);
 VAR_0->sample_size = FUNC_1(VAR_1->sample_type);
}
