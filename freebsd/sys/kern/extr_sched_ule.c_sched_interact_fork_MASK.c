
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct td_sched {int ts_runtime; int ts_slptime; } ;


 int VAR_0 ;
 struct td_sched* FUNC_0 (struct thread*) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_1)
{
 struct td_sched *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_1);
 VAR_4 = VAR_2->ts_runtime + VAR_2->ts_slptime;
 if (VAR_4 > VAR_0) {
  VAR_3 = VAR_4 / VAR_0;
  VAR_2->ts_runtime /= VAR_3;
  VAR_2->ts_slptime /= VAR_3;
 }
}
