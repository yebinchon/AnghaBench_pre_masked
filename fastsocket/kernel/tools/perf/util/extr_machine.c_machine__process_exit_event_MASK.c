
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tid; } ;
union perf_event {TYPE_1__ fork; } ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct thread* FUNC_0 (struct machine*,int ) ;
 int FUNC_1 (struct machine*,struct thread*) ;
 int FUNC_2 (union perf_event*,int ) ;
 int VAR_1 ;

int FUNC_3(struct machine *VAR_2, union perf_event *VAR_3)
{
 struct thread *VAR_4 = FUNC_0(VAR_2, VAR_3->fork.tid);

 if (VAR_0)
  FUNC_2(VAR_3, VAR_1);

 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_2, VAR_4);

 return 0;
}
