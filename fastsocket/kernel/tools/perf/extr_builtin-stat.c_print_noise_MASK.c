
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat {int * res_stats; } ;
struct perf_evsel {struct perf_stat* priv; } ;


 int FUNC_0 (int ,double) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct perf_evsel *VAR_1, double VAR_2)
{
 struct perf_stat *VAR_3;

 if (VAR_0 == 1)
  return;

 VAR_3 = VAR_1->priv;
 FUNC_0(FUNC_1(&VAR_3->res_stats[0]), VAR_2);
}
