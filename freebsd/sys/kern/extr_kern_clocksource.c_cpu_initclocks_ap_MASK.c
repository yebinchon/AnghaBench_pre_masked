
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_intr_nesting_level; } ;
struct pcpu_state {int now; } ;
typedef int sbintime_t ;


 struct pcpu_state* FUNC_0 (int ) ;
 int FUNC_1 (struct pcpu_state*) ;
 int FUNC_2 (struct pcpu_state*) ;
 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_2 ;

void
FUNC_8(void)
{
 sbintime_t VAR_3;
 struct pcpu_state *VAR_4;
 struct thread *VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = FUNC_5();
 FUNC_1(VAR_4);
 VAR_4->now = VAR_3;
 FUNC_4(VAR_0);
 FUNC_6();
 FUNC_2(VAR_4);
 VAR_5 = VAR_1;
 VAR_5->td_intr_nesting_level++;
 FUNC_3(VAR_4->now, 2);
 VAR_5->td_intr_nesting_level--;
 FUNC_7();
}
