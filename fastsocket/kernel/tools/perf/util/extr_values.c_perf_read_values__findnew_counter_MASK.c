
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_read_values {int counters; scalar_t__* counterrawid; scalar_t__ counters_max; int * countername; } ;


 int FUNC_0 (struct perf_read_values*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(struct perf_read_values *VAR_0,
          u64 VAR_1, const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->counters; VAR_3++)
  if (VAR_0->counterrawid[VAR_3] == VAR_1)
   return VAR_3;

 if (VAR_0->counters == VAR_0->counters_max)
  FUNC_0(VAR_0);

 VAR_3 = VAR_0->counters++;
 VAR_0->counterrawid[VAR_3] = VAR_1;
 VAR_0->countername[VAR_3] = FUNC_1(VAR_2);

 return VAR_3;
}
