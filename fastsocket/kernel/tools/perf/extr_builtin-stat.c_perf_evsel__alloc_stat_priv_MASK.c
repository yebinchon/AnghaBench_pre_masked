
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat {int dummy; } ;
struct perf_evsel {int * priv; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct perf_evsel *VAR_1)
{
 VAR_1->priv = FUNC_0(sizeof(struct perf_stat));
 return VAR_1->priv == ((void*)0) ? -VAR_0 : 0;
}
