
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double u64 ;
struct perf_evsel {TYPE_1__* counts; } ;
struct perf_counts_values {double val; double ena; double run; } ;
struct TYPE_2__ {int scaled; struct perf_counts_values aggr; } ;


 scalar_t__ FUNC_0 (struct perf_evsel*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,struct perf_counts_values*,size_t) ;

int FUNC_2(struct perf_evsel *VAR_1,
         int VAR_2, int VAR_3, bool VAR_4)
{
 size_t VAR_5 = VAR_4 ? 3 : 1;
 int VAR_6, VAR_7;
 struct perf_counts_values *VAR_8 = &VAR_1->counts->aggr, VAR_9;

 VAR_8->val = VAR_8->ena = VAR_8->run = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   if (FUNC_0(VAR_1, VAR_6, VAR_7) < 0)
    continue;

   if (FUNC_1(FUNC_0(VAR_1, VAR_6, VAR_7),
      &VAR_9, VAR_5 * sizeof(u64)) < 0)
    return -VAR_0;

   VAR_8->val += VAR_9.val;
   if (VAR_4) {
    VAR_8->ena += VAR_9.ena;
    VAR_8->run += VAR_9.run;
   }
  }
 }

 VAR_1->counts->scaled = 0;
 if (VAR_4) {
  if (VAR_8->run == 0) {
   VAR_1->counts->scaled = -1;
   VAR_8->val = 0;
   return 0;
  }

  if (VAR_8->run < VAR_8->ena) {
   VAR_1->counts->scaled = 1;
   VAR_8->val = (u64)((double)VAR_8->val * VAR_8->ena / VAR_8->run + 0.5);
  }
 } else
  VAR_8->ena = VAR_8->run = 0;

 return 0;
}
