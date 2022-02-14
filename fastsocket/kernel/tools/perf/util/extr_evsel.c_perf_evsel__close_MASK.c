
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int * fd; } ;


 int FUNC_0 (struct perf_evsel*,int,int) ;
 int FUNC_1 (struct perf_evsel*) ;

void FUNC_2(struct perf_evsel *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->fd == ((void*)0))
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);
 VAR_0->fd = ((void*)0);
}
