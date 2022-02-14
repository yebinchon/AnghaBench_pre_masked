
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ config; int exclude_user; int exclude_kernel; int exclude_hv; int precise_ip; int exclude_host; int exclude_guest; } ;
struct perf_evsel {TYPE_1__ attr; struct perf_evsel* leader; } ;
struct perf_evlist {int nr_entries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 struct perf_evsel* FUNC_1 (struct perf_evlist*) ;
 int FUNC_2 (struct perf_evsel*) ;
 struct perf_evsel* FUNC_3 (struct perf_evsel*) ;

__attribute__((used)) static int FUNC_4(struct perf_evlist *VAR_5)
{
 struct perf_evsel *VAR_6, *VAR_7;

 FUNC_0("wrong number of entries", 3 == VAR_5->nr_entries);


 VAR_6 = VAR_7 = FUNC_1(VAR_5);
 FUNC_0("wrong type", VAR_4 == VAR_6->attr.type);
 FUNC_0("wrong config",
   VAR_2 == VAR_6->attr.config);
 FUNC_0("wrong exclude_user", !VAR_6->attr.exclude_user);
 FUNC_0("wrong exclude_kernel", !VAR_6->attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_6->attr.exclude_hv);
 FUNC_0("wrong exclude guest", !VAR_6->attr.exclude_guest);
 FUNC_0("wrong exclude host", !VAR_6->attr.exclude_host);
 FUNC_0("wrong precise_ip", !VAR_6->attr.precise_ip);
 FUNC_0("wrong leader", !FUNC_2(VAR_6));


 VAR_6 = FUNC_3(VAR_6);
 FUNC_0("wrong type", VAR_3 == VAR_6->attr.type);
 FUNC_0("wrong config",
   VAR_0 == VAR_6->attr.config);
 FUNC_0("wrong exclude_user", !VAR_6->attr.exclude_user);
 FUNC_0("wrong exclude_kernel", VAR_6->attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_6->attr.exclude_hv);
 FUNC_0("wrong exclude guest", !VAR_6->attr.exclude_guest);
 FUNC_0("wrong exclude host", !VAR_6->attr.exclude_host);
 FUNC_0("wrong precise_ip", !VAR_6->attr.precise_ip);
 FUNC_0("wrong leader", VAR_6->leader == VAR_7);


 VAR_6 = FUNC_3(VAR_6);
 FUNC_0("wrong type", VAR_3 == VAR_6->attr.type);
 FUNC_0("wrong config",
   VAR_1 == VAR_6->attr.config);
 FUNC_0("wrong exclude_user", VAR_6->attr.exclude_user);
 FUNC_0("wrong exclude_kernel", !VAR_6->attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_6->attr.exclude_hv);
 FUNC_0("wrong exclude guest", !VAR_6->attr.exclude_guest);
 FUNC_0("wrong exclude host", !VAR_6->attr.exclude_host);
 FUNC_0("wrong precise_ip", !VAR_6->attr.precise_ip);
 FUNC_0("wrong leader", !FUNC_2(VAR_6));

 return 0;
}
