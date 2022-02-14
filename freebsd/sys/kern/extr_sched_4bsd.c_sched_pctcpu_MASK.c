
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct td_sched {int ts_pctcpu; } ;
typedef int fixpt_t ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ) ;
 struct td_sched* FUNC_1 (struct thread*) ;

fixpt_t
FUNC_2(struct thread *VAR_1)
{
 struct td_sched *VAR_2;

 FUNC_0(VAR_1, VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 return (VAR_2->ts_pctcpu);
}
