
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int id; int sample_id; int fd; int node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct perf_evsel *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->node));
 FUNC_3(VAR_0->fd);
 FUNC_3(VAR_0->sample_id);
 FUNC_1(VAR_0->id);
}
