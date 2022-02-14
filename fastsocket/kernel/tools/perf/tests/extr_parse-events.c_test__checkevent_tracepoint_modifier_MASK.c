
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exclude_user; int exclude_hv; int precise_ip; int exclude_kernel; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct perf_evlist {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct perf_evsel* FUNC_1 (struct perf_evlist*) ;
 int FUNC_2 (struct perf_evlist*) ;

__attribute__((used)) static int FUNC_3(struct perf_evlist *VAR_0)
{
 struct perf_evsel *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("wrong exclude_user", VAR_1->attr.exclude_user);
 FUNC_0("wrong exclude_kernel", !VAR_1->attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_1->attr.exclude_hv);
 FUNC_0("wrong precise_ip", !VAR_1->attr.precise_ip);

 return FUNC_2(VAR_0);
}
