
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_dr7; int pcb_dr6; int pcb_dr3; int pcb_dr2; int pcb_dr1; int pcb_dr0; } ;
struct dbreg {int * dr; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int
FUNC_6(struct thread *VAR_0, struct dbreg *VAR_1)
{
 struct pcb *VAR_2;

 if (VAR_0 == ((void*)0)) {
  VAR_1->dr[0] = FUNC_0();
  VAR_1->dr[1] = FUNC_1();
  VAR_1->dr[2] = FUNC_2();
  VAR_1->dr[3] = FUNC_3();
  VAR_1->dr[6] = FUNC_4();
  VAR_1->dr[7] = FUNC_5();
 } else {
  VAR_2 = VAR_0->td_pcb;
  VAR_1->dr[0] = VAR_2->pcb_dr0;
  VAR_1->dr[1] = VAR_2->pcb_dr1;
  VAR_1->dr[2] = VAR_2->pcb_dr2;
  VAR_1->dr[3] = VAR_2->pcb_dr3;
  VAR_1->dr[6] = VAR_2->pcb_dr6;
  VAR_1->dr[7] = VAR_2->pcb_dr7;
 }
 VAR_1->dr[4] = 0;
 VAR_1->dr[5] = 0;
 VAR_1->dr[8] = 0;
 VAR_1->dr[9] = 0;
 VAR_1->dr[10] = 0;
 VAR_1->dr[11] = 0;
 VAR_1->dr[12] = 0;
 VAR_1->dr[13] = 0;
 VAR_1->dr[14] = 0;
 VAR_1->dr[15] = 0;
 return (0);
}
