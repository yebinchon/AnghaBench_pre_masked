
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int comm; void* tid; void* pid; } ;
union perf_event {TYPE_1__ comm; } ;
typedef int u64 ;


 int FUNC_0 (scalar_t__,int) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (union perf_event*,void*) ;

__attribute__((used)) static void FUNC_4(union perf_event *VAR_0, bool VAR_1)
{
 VAR_0->comm.pid = FUNC_1(VAR_0->comm.pid);
 VAR_0->comm.tid = FUNC_1(VAR_0->comm.tid);

 if (VAR_1) {
  void *VAR_2 = &VAR_0->comm.comm;

  VAR_2 += FUNC_0(FUNC_2(VAR_2) + 1, sizeof(u64));
  FUNC_3(VAR_0, VAR_2);
 }
}
