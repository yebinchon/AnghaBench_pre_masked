
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;
struct td_sched {int * ts_runq; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct thread*,int) ;
 int VAR_4 ;
 struct thread* VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int * VAR_6 ;
 struct td_sched* FUNC_4 (struct thread*) ;

void
FUNC_5(struct thread *VAR_7, int VAR_8)
{
 struct td_sched *VAR_9;

 FUNC_2(VAR_7, VAR_1|VAR_0);
 FUNC_0(VAR_7 == VAR_5, ("sched_bind: can only bind curthread"));

 VAR_9 = FUNC_4(VAR_7);

 VAR_7->td_flags |= VAR_3;







}
