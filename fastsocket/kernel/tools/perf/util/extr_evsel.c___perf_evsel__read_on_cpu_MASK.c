
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_evsel {TYPE_1__* counts; } ;
struct perf_counts_values {double run; double ena; scalar_t__ val; } ;
struct TYPE_2__ {struct perf_counts_values* cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_evsel*,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct perf_evsel*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,struct perf_counts_values*,size_t) ;

int FUNC_3(struct perf_evsel *VAR_3,
         int VAR_4, int VAR_5, bool VAR_6)
{
 struct perf_counts_values VAR_7;
 size_t VAR_8 = VAR_6 ? 3 : 1;

 if (FUNC_0(VAR_3, VAR_4, VAR_5) < 0)
  return -VAR_0;

 if (VAR_3->counts == ((void*)0) && FUNC_1(VAR_3, VAR_4 + 1) < 0)
  return -VAR_1;

 if (FUNC_2(FUNC_0(VAR_3, VAR_4, VAR_5), &VAR_7, VAR_8 * sizeof(u64)) < 0)
  return -VAR_2;

 if (VAR_6) {
  if (VAR_7.run == 0)
   VAR_7.val = 0;
  else if (VAR_7.run < VAR_7.ena)
   VAR_7.val = (u64)((double)VAR_7.val * VAR_7.ena / VAR_7.run + 0.5);
 } else
  VAR_7.ena = VAR_7.run = 0;

 VAR_3->counts->cpu[VAR_4] = VAR_7;
 return 0;
}
