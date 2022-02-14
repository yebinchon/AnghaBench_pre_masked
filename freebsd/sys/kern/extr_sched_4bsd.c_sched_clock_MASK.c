
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;
struct td_sched {int ts_estcpu; scalar_t__ ts_slice; int ts_cpticks; } ;
struct pcpuidlestat {scalar_t__ idlecalls; scalar_t__ oldidlecalls; } ;


 struct pcpuidlestat* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;
 scalar_t__ VAR_5 ;
 struct td_sched* FUNC_6 (struct thread*) ;

void
FUNC_7(struct thread *VAR_6)
{
 struct pcpuidlestat *VAR_7;
 struct td_sched *VAR_8;

 FUNC_3(VAR_6, VAR_1);
 VAR_8 = FUNC_6(VAR_6);

 VAR_8->ts_cpticks++;
 VAR_8->ts_estcpu = FUNC_1(VAR_8->ts_estcpu + 1);
 if ((VAR_8->ts_estcpu % VAR_0) == 0) {
  FUNC_4(VAR_6);
  FUNC_5(VAR_6);
 }





 if (!FUNC_2(VAR_6) && --VAR_8->ts_slice <= 0) {
  VAR_8->ts_slice = VAR_5;
  VAR_6->td_flags |= VAR_2 | VAR_3;
 }

 VAR_7 = FUNC_0(VAR_4);
 VAR_7->oldidlecalls = VAR_7->idlecalls;
 VAR_7->idlecalls = 0;
}
