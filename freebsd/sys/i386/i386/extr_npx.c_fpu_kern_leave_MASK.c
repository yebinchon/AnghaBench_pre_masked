
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_save; int pcb_flags; } ;
struct fpu_kern_ctx {int flags; scalar_t__ prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pcb*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct pcb*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;

int
FUNC_8(struct thread *VAR_8, struct fpu_kern_ctx *VAR_9)
{
 struct pcb *VAR_10;

 FUNC_0((VAR_9->flags & VAR_1) != 0,
     ("leaving not inuse ctx"));
 VAR_9->flags &= ~VAR_1;

 if (FUNC_6(0) && (VAR_9->flags & VAR_0) != 0)
  return (0);
 VAR_10 = VAR_8->td_pcb;
 FUNC_3();
 if (VAR_6 == FUNC_2(VAR_7))
  FUNC_7();
 VAR_10->pcb_save = VAR_9->prev;
 if (VAR_10->pcb_save == FUNC_5(VAR_10)) {
  if ((VAR_10->pcb_flags & VAR_5) != 0)
   VAR_10->pcb_flags |= VAR_4;
  else
   VAR_10->pcb_flags &= ~VAR_4;
  VAR_10->pcb_flags &= ~VAR_3;
 } else {
  if ((VAR_9->flags & VAR_2) != 0)
   VAR_10->pcb_flags |= VAR_4;
  else
   VAR_10->pcb_flags &= ~VAR_4;
  FUNC_0(!FUNC_1(VAR_10), ("unpaired fpu_kern_leave"));
 }
 FUNC_4();
 return (0);
}
