
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* id; void* time_running; void* time_enabled; void* value; void* tid; void* pid; } ;
union perf_event {TYPE_1__ read; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (union perf_event*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(union perf_event *VAR_0, bool VAR_1)
{
 VAR_0->read.pid = FUNC_0(VAR_0->read.pid);
 VAR_0->read.tid = FUNC_0(VAR_0->read.tid);
 VAR_0->read.value = FUNC_1(VAR_0->read.value);
 VAR_0->read.time_enabled = FUNC_1(VAR_0->read.time_enabled);
 VAR_0->read.time_running = FUNC_1(VAR_0->read.time_running);
 VAR_0->read.id = FUNC_1(VAR_0->read.id);

 if (VAR_1)
  FUNC_2(VAR_0, &VAR_0->read + 1);
}
