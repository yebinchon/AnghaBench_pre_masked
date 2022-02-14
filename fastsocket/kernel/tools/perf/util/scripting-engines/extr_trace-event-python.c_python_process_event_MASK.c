
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct machine {int dummy; } ;
struct addr_location {int dummy; } ;



 int FUNC_0 (union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*,struct addr_location*) ;
 int FUNC_1 (union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*,struct addr_location*) ;

__attribute__((used)) static void FUNC_2(union perf_event *VAR_0,
     struct perf_sample *VAR_1,
     struct perf_evsel *VAR_2,
     struct machine *VAR_3,
     struct addr_location *VAR_4)
{
 switch (VAR_2->attr.type) {
 case 128:
  FUNC_1(VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4);
  break;

 default:
  FUNC_0(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
 }
}
