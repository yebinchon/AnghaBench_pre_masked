
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int cpu; } ;
struct perf_evsel {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long,int,int,int ) ;
 scalar_t__ FUNC_1 (unsigned long,int,int) ;
 int VAR_0 ;
 void* FUNC_2 (struct perf_evsel*,struct perf_sample*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct perf_evsel *VAR_3,
        struct perf_sample *VAR_4)
{
 unsigned long VAR_5 = FUNC_2(VAR_3, VAR_4, "ptr"),
        VAR_6 = FUNC_2(VAR_3, VAR_4, "call_site");
 int VAR_7 = FUNC_2(VAR_3, VAR_4, "bytes_req"),
     VAR_8 = FUNC_2(VAR_3, VAR_4, "bytes_alloc");

 if (FUNC_0(VAR_6, VAR_5, VAR_7, VAR_8, VAR_4->cpu) ||
     FUNC_1(VAR_6, VAR_7, VAR_8))
  return -1;

 VAR_2 += VAR_7;
 VAR_1 += VAR_8;

 VAR_0++;
 return 0;
}
