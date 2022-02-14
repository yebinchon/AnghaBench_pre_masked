
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ config; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct perf_evlist {int nr_entries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 struct perf_evsel* FUNC_1 (struct perf_evlist*) ;

__attribute__((used)) static int FUNC_2(struct perf_evlist *VAR_2)
{
 struct perf_evsel *VAR_3 = FUNC_1(VAR_2);

 FUNC_0("wrong number of entries", 1 == VAR_2->nr_entries);
 FUNC_0("wrong type", VAR_1 == VAR_3->attr.type);
 FUNC_0("wrong config",
   VAR_0 == VAR_3->attr.config);
 return 0;
}
