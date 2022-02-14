
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct pcpu {int pc_curpmap; TYPE_1__* pc_idlethread; int pc_curpcb; TYPE_1__* pc_curthread; } ;
typedef int pmap_t ;
struct TYPE_2__ {int td_pcb; } ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct pcpu* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 () ;
 int VAR_8 ;
 int FUNC_18 (int *) ;

void
FUNC_19(uint64_t VAR_9)
{
 struct pcpu *VAR_10;
 pmap_t VAR_11;

 VAR_10 = &VAR_0[VAR_9];




 __asm __volatile(
     "mov x18, %0 \n"
     "msr tpidr_el1, %0" :: "r"(VAR_10));


 while (!VAR_2)
  __asm __volatile("wfe");


 FUNC_0(FUNC_1(VAR_3) != ((void*)0), ("no idle thread"));
 VAR_10->pc_curthread = VAR_10->pc_idlethread;
 VAR_10->pc_curpcb = VAR_10->pc_idlethread->td_pcb;


 VAR_11 = FUNC_18(&VAR_8);
 FUNC_0(FUNC_15(VAR_11) == FUNC_2(VAR_7),
     ("pmap0 doesn't match cpu %ld's ttbr0", VAR_9));
 VAR_10->pc_curpmap = VAR_11;






 FUNC_7();
 FUNC_8();

 FUNC_10();


 FUNC_5();





 FUNC_6();
 FUNC_13();


 FUNC_9();

 FUNC_11(&VAR_1);

 FUNC_3(&VAR_5, 1);

 if (VAR_5 == VAR_4) {

  FUNC_4(&VAR_6, 1);
 }

 FUNC_12(&VAR_1);


 FUNC_16(((void*)0));

 FUNC_14("scheduler returned us to init_secondary");

}
