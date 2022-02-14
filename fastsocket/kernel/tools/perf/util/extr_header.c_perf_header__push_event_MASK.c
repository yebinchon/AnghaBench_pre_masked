
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_trace_event_type {int name; int event_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct perf_trace_event_type*,int ,int) ;
 int FUNC_1 (char*,char const*) ;
 struct perf_trace_event_type* FUNC_2 (struct perf_trace_event_type*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*,scalar_t__) ;
 int VAR_2 ;
 struct perf_trace_event_type* VAR_3 ;

int FUNC_5(u64 VAR_4, const char *VAR_5)
{
 struct perf_trace_event_type *VAR_6;

 if (FUNC_3(VAR_5) > VAR_1)
  FUNC_1("Event %s will be truncated\n", VAR_5);

 VAR_6 = FUNC_2(VAR_3, (VAR_2 + 1) * sizeof(*VAR_3));
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_3 = VAR_6;

 FUNC_0(&VAR_3[VAR_2], 0, sizeof(struct perf_trace_event_type));
 VAR_3[VAR_2].event_id = VAR_4;
 FUNC_4(VAR_3[VAR_2].name, VAR_5, VAR_1 - 1);
 VAR_2++;
 return 0;
}
