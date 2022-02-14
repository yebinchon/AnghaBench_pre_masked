
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sample_id {int dummy; } ;
struct perf_evsel {int * sample_id; int * id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int,int) ;
 int * FUNC_2 (int) ;

int FUNC_3(struct perf_evsel *VAR_1, int VAR_2, int VAR_3)
{
 VAR_1->sample_id = FUNC_1(VAR_2, VAR_3, sizeof(struct perf_sample_id));
 if (VAR_1->sample_id == ((void*)0))
  return -VAR_0;

 VAR_1->id = FUNC_2(VAR_2 * VAR_3 * sizeof(u64));
 if (VAR_1->id == ((void*)0)) {
  FUNC_0(VAR_1->sample_id);
  VAR_1->sample_id = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
