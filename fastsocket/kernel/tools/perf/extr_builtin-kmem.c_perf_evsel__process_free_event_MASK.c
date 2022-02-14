
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {scalar_t__ cpu; } ;
struct perf_evsel {int dummy; } ;
struct alloc_stat {short alloc_cpu; int pingpong; int call_site; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct perf_evsel*,struct perf_sample*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct alloc_stat* FUNC_1 (unsigned long,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct perf_evsel *VAR_4,
       struct perf_sample *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_4, VAR_5, "ptr");
 struct alloc_stat *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(VAR_6, 0, &VAR_2, VAR_1);
 if (!VAR_7)
  return 0;

 if ((short)VAR_5->cpu != VAR_7->alloc_cpu) {
  VAR_7->pingpong++;

  VAR_8 = FUNC_1(0, VAR_7->call_site,
          &VAR_3, VAR_0);
  if (!VAR_8)
   return -1;
  VAR_8->pingpong++;
 }
 VAR_7->alloc_cpu = -1;

 return 0;
}
