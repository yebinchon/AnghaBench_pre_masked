
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_flags; scalar_t__ pcb_save; } ;
struct fpu_kern_ctx {int flags; scalar_t__ prev; } ;


 int FUNC_0 (struct thread*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct pcb*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct pcb*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct pcb*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct pcb*,int) ;
 int FUNC_11 () ;

int
FUNC_12(struct thread *VAR_9, struct fpu_kern_ctx *VAR_10)
{
 struct pcb *VAR_11;

 VAR_11 = VAR_9->td_pcb;

 if ((VAR_11->pcb_flags & VAR_4) != 0) {
  FUNC_1(VAR_10 == ((void*)0), ("non-null ctx after FPU_KERN_NOCTX"));
  FUNC_1(FUNC_3(VAR_8) == ((void*)0),
      ("non-NULL fpcurthread for PCB_FPUNOSAVE"));
  FUNC_0(VAR_9);

  FUNC_4(VAR_11, VAR_4 | VAR_3);
  FUNC_11();
 } else {
  FUNC_1((VAR_10->flags & VAR_2) != 0,
      ("leaving not inuse ctx"));
  VAR_10->flags &= ~VAR_2;

  if (FUNC_9(0) &&
      (VAR_10->flags & VAR_0) != 0)
   return (0);
  FUNC_1((VAR_10->flags & VAR_0) == 0,
      ("dummy ctx"));
  FUNC_5();
  if (VAR_7 == FUNC_3(VAR_8))
   FUNC_7();
  VAR_11->pcb_save = VAR_10->prev;
 }

 if (VAR_11->pcb_save == FUNC_8(VAR_11)) {
  if ((VAR_11->pcb_flags & VAR_6) != 0) {
   FUNC_10(VAR_11, VAR_3);
   FUNC_4(VAR_11, VAR_5);
  } else
   FUNC_4(VAR_11, VAR_3 | VAR_5);
 } else {
  if ((VAR_10->flags & VAR_1) != 0)
   FUNC_10(VAR_11, VAR_3);
  else
   FUNC_4(VAR_11, VAR_3);
  FUNC_1(!FUNC_2(VAR_11), ("unpaired fpu_kern_leave"));
 }
 FUNC_6();
 return (0);
}
