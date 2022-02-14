
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct machine {int dummy; } ;
typedef int pid_t ;
typedef int perf_event__handler_t ;


 int FUNC_0 (struct perf_tool*,union perf_event*,int,int,int ,struct machine*) ;
 int FUNC_1 (struct perf_tool*,union perf_event*,int,int,int ,struct machine*) ;

__attribute__((used)) static int FUNC_2(union perf_event *VAR_0,
          union perf_event *VAR_1,
          pid_t VAR_2, int VAR_3,
       perf_event__handler_t VAR_4,
          struct perf_tool *VAR_5,
          struct machine *VAR_6)
{
 pid_t VAR_7 = FUNC_0(VAR_5, VAR_0, VAR_2, VAR_3,
       VAR_4, VAR_6);
 if (VAR_7 == -1)
  return -1;
 return FUNC_1(VAR_5, VAR_1, VAR_2, VAR_7,
        VAR_4, VAR_6);
}
