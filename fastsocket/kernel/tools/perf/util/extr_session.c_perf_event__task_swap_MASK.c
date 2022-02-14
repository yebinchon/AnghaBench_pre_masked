
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int time; void* ptid; void* ppid; void* tid; void* pid; } ;
union perf_event {TYPE_1__ fork; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union perf_event*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(union perf_event *VAR_0, bool VAR_1)
{
 VAR_0->fork.pid = FUNC_0(VAR_0->fork.pid);
 VAR_0->fork.tid = FUNC_0(VAR_0->fork.tid);
 VAR_0->fork.ppid = FUNC_0(VAR_0->fork.ppid);
 VAR_0->fork.ptid = FUNC_0(VAR_0->fork.ptid);
 VAR_0->fork.time = FUNC_1(VAR_0->fork.time);

 if (VAR_1)
  FUNC_2(VAR_0, &VAR_0->fork + 1);
}
