
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct td_sched {int ts_runtime; int ts_slptime; } ;


 int VAR_0 ;
 struct td_sched* FUNC_0 (struct thread*) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_1)
{
 struct td_sched *VAR_2;
 u_int VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->ts_runtime + VAR_2->ts_slptime;
 if (VAR_3 < VAR_0)
  return;





 if (VAR_3 > VAR_0 * 2) {
  if (VAR_2->ts_runtime > VAR_2->ts_slptime) {
   VAR_2->ts_runtime = VAR_0;
   VAR_2->ts_slptime = 1;
  } else {
   VAR_2->ts_slptime = VAR_0;
   VAR_2->ts_runtime = 1;
  }
  return;
 }





 if (VAR_3 > (VAR_0 / 5) * 6) {
  VAR_2->ts_runtime /= 2;
  VAR_2->ts_slptime /= 2;
  return;
 }
 VAR_2->ts_runtime = (VAR_2->ts_runtime / 5) * 4;
 VAR_2->ts_slptime = (VAR_2->ts_slptime / 5) * 4;
}
