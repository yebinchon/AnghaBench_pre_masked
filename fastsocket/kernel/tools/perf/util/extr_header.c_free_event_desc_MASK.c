
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct perf_evsel {struct perf_evsel* id; struct perf_evsel* name; TYPE_1__ attr; } ;


 int FUNC_0 (struct perf_evsel*) ;

__attribute__((used)) static void FUNC_1(struct perf_evsel *VAR_0)
{
 struct perf_evsel *VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = VAR_0; VAR_1->attr.size; VAR_1++) {
  if (VAR_1->name)
   FUNC_0(VAR_1->name);
  if (VAR_1->id)
   FUNC_0(VAR_1->id);
 }

 FUNC_0(VAR_0);
}
