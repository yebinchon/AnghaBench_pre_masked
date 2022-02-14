
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct td_sched {int ts_slptime; unsigned int ts_estcpu; } ;
typedef int fixpt_t ;
struct TYPE_2__ {int * ldavg; } ;


 TYPE_1__ VAR_0 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int ) ;
 struct td_sched* FUNC_2 (struct thread*) ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_1)
{
 struct td_sched *VAR_2;
 fixpt_t VAR_3;
 unsigned int VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_0.ldavg[0]);
 if (VAR_2->ts_slptime > 5 * VAR_3)
  VAR_2->ts_estcpu = 0;
 else {
  VAR_4 = VAR_2->ts_estcpu;
  VAR_2->ts_slptime--;
  while (VAR_4 && --VAR_2->ts_slptime)
   VAR_4 = FUNC_0(VAR_3, VAR_4);
  VAR_2->ts_estcpu = VAR_4;
 }
}
