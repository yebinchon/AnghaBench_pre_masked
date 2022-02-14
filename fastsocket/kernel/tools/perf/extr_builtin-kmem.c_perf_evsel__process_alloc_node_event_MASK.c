
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {size_t cpu; } ;
struct perf_evsel {int dummy; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_evsel*,struct perf_sample*,char*) ;
 int FUNC_1 (struct perf_evsel*,struct perf_sample*) ;

__attribute__((used)) static int FUNC_2(struct perf_evsel *VAR_2,
      struct perf_sample *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (!VAR_4) {
  int VAR_5 = VAR_0[VAR_3->cpu],
      VAR_6 = FUNC_0(VAR_2, VAR_3, "node");

  if (VAR_5 != VAR_6)
   VAR_1++;
 }

 return VAR_4;
}
