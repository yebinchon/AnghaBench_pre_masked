
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_name; } ;
struct tdq {int dummy; } ;
struct mtx {int dummy; } ;
struct TYPE_2__ {int ts_cpu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 struct tdq* FUNC_2 (int ) ;
 struct mtx* FUNC_3 (struct tdq*) ;
 int FUNC_4 (struct tdq*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 (struct thread*) ;
 int FUNC_8 (struct tdq*,struct thread*,int) ;
 int FUNC_9 (struct tdq*,struct thread*) ;
 int FUNC_10 (struct tdq*,struct tdq*) ;
 int FUNC_11 (struct tdq*,struct thread*) ;
 int FUNC_12 (struct thread*) ;

__attribute__((used)) static struct mtx *
FUNC_13(struct tdq *VAR_0, struct thread *VAR_1, int VAR_2)
{
 struct tdq *VAR_3;

 FUNC_1(!FUNC_0(FUNC_7(VAR_1)->ts_cpu), ("sched_switch_migrate: "
     "thread %s queued on absent CPU %d.", VAR_1->td_name,
     FUNC_7(VAR_1)->ts_cpu));
 VAR_3 = FUNC_2(FUNC_7(VAR_1)->ts_cpu);
 return (FUNC_3(VAR_3));
}
