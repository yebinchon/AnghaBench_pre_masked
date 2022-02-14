
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sample_type; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct perf_evlist {int dummy; } ;


 struct perf_evsel* FUNC_0 (struct perf_evlist*) ;

u64 FUNC_1(struct perf_evlist *VAR_0)
{
 struct perf_evsel *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->attr.sample_type;
}
