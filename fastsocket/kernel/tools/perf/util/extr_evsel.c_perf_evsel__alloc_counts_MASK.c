
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int * counts; } ;
struct perf_counts_values {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;

int FUNC_1(struct perf_evsel *VAR_1, int VAR_2)
{
 VAR_1->counts = FUNC_0((sizeof(*VAR_1->counts) +
    (VAR_2 * sizeof(struct perf_counts_values))));
 return VAR_1->counts != ((void*)0) ? 0 : -VAR_0;
}
