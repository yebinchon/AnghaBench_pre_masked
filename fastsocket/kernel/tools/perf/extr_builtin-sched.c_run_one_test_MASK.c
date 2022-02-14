
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sched {int sum_runtime; int nr_runs; int sum_fluct; int run_avg; double nr_sleep_corrections; scalar_t__ runavg_parent_cpu_usage; scalar_t__ parent_cpu_usage; scalar_t__ runavg_cpu_usage; scalar_t__ cpu_usage; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct perf_sched*) ;

__attribute__((used)) static void FUNC_3(struct perf_sched *VAR_0)
{
 u64 VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_1 = FUNC_0();
 FUNC_2(VAR_0);
 VAR_2 = FUNC_0();

 VAR_3 = VAR_2 - VAR_1;
 VAR_0->sum_runtime += VAR_3;
 VAR_0->nr_runs++;

 VAR_4 = VAR_0->sum_runtime / VAR_0->nr_runs;
 if (VAR_3 < VAR_4)
  VAR_5 = VAR_4 - VAR_3;
 else
  VAR_5 = VAR_3 - VAR_4;
 VAR_0->sum_fluct += VAR_5;
 if (!VAR_0->run_avg)
  VAR_0->run_avg = VAR_3;
 VAR_0->run_avg = (VAR_0->run_avg * 9 + VAR_3) / 10;

 FUNC_1("#%-3ld: %0.3f, ", VAR_0->nr_runs, (double)VAR_3 / 1000000.0);

 FUNC_1("ravg: %0.2f, ", (double)VAR_0->run_avg / 1e6);

 FUNC_1("cpu: %0.2f / %0.2f",
  (double)VAR_0->cpu_usage / 1e6, (double)VAR_0->runavg_cpu_usage / 1e6);
 FUNC_1("\n");

 if (VAR_0->nr_sleep_corrections)
  FUNC_1(" (%ld sleep corrections)\n", VAR_0->nr_sleep_corrections);
 VAR_0->nr_sleep_corrections = 0;
}
