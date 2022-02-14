
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptid; int tid; } ;
union perf_event {TYPE_1__ fork; } ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct thread* FUNC_1 (struct machine*,int ) ;
 int FUNC_2 (union perf_event*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct thread*,struct thread*) ;

int FUNC_4(struct machine *VAR_2, union perf_event *VAR_3)
{
 struct thread *VAR_4 = FUNC_1(VAR_2, VAR_3->fork.tid);
 struct thread *VAR_5 = FUNC_1(VAR_2, VAR_3->fork.ptid);

 if (VAR_0)
  FUNC_2(VAR_3, VAR_1);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) ||
     FUNC_3(VAR_4, VAR_5) < 0) {
  FUNC_0("problem processing PERF_RECORD_FORK, skipping event.\n");
  return -1;
 }

 return 0;
}
