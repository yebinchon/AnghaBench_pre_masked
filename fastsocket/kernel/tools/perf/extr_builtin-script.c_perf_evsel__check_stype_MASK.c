
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_attr {int type; int sample_type; } ;
struct perf_evsel {struct perf_event_attr attr; } ;
typedef enum perf_output_field { ____Placeholder_perf_output_field } perf_output_field ;
struct TYPE_2__ {int fields; scalar_t__ user_set; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (struct perf_evsel*) ;
 int FUNC_2 (char*,char const*,char const*,int ) ;
 int FUNC_3 (char*,char const*,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct perf_evsel *VAR_1,
       u64 VAR_2, const char *VAR_3,
       enum perf_output_field VAR_4)
{
 struct perf_event_attr *VAR_5 = &VAR_1->attr;
 int VAR_6 = VAR_5->type;
 const char *VAR_7;

 if (VAR_5->sample_type & VAR_2)
  return 0;

 if (VAR_0[VAR_6].user_set) {
  VAR_7 = FUNC_1(VAR_1);
  FUNC_3("Samples for '%s' event do not have %s attribute set. "
         "Cannot print '%s' field.\n",
         VAR_7, VAR_3, FUNC_0(VAR_4));
  return -1;
 }


 VAR_0[VAR_6].fields &= ~VAR_4;
 VAR_7 = FUNC_1(VAR_1);
 FUNC_2("Samples for '%s' event do not have %s attribute set. "
   "Skipping '%s' field.\n",
   VAR_7, VAR_3, FUNC_0(VAR_4));

 return 0;
}
