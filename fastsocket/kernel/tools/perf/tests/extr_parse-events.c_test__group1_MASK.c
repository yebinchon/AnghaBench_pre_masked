
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ config; int exclude_user; int exclude_kernel; int exclude_hv; int exclude_guest; int precise_ip; int exclude_host; } ;
struct perf_evsel {struct perf_evsel* leader; TYPE_1__ attr; } ;
struct perf_evlist {int nr_entries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 struct perf_evsel* FUNC_1 (struct perf_evlist*) ;
 int FUNC_2 (struct perf_evsel*) ;
 struct perf_evsel* FUNC_3 (struct perf_evsel*) ;

__attribute__((used)) static int FUNC_4(struct perf_evlist *VAR_3)
{
 struct perf_evsel *VAR_4, *VAR_5;

 FUNC_0("wrong number of entries", 2 == VAR_3->nr_entries);


 VAR_4 = VAR_5 = FUNC_1(VAR_3);
 FUNC_0("wrong type", VAR_2 == VAR_4->attr.type);
 FUNC_0("wrong config",
   VAR_1 == VAR_4->attr.config);
 FUNC_0("wrong exclude_user", VAR_4->attr.exclude_user);
 FUNC_0("wrong exclude_kernel", !VAR_4->attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_4->attr.exclude_hv);
 FUNC_0("wrong exclude guest", !VAR_4->attr.exclude_guest);
 FUNC_0("wrong exclude host", !VAR_4->attr.exclude_host);
 FUNC_0("wrong precise_ip", !VAR_4->attr.precise_ip);
 FUNC_0("wrong leader", !FUNC_2(VAR_4));


 VAR_4 = FUNC_3(VAR_4);
 FUNC_0("wrong type", VAR_2 == VAR_4->attr.type);
 FUNC_0("wrong config",
   VAR_0 == VAR_4->attr.config);
 FUNC_0("wrong exclude_user", !VAR_4->attr.exclude_user);
 FUNC_0("wrong exclude_kernel", VAR_4->attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_4->attr.exclude_hv);

 FUNC_0("wrong exclude guest", VAR_4->attr.exclude_guest);
 FUNC_0("wrong exclude host", !VAR_4->attr.exclude_host);
 FUNC_0("wrong precise_ip", VAR_4->attr.precise_ip == 2);
 FUNC_0("wrong leader", VAR_4->leader == VAR_5);

 return 0;
}
