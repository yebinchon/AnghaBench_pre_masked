
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pcb {int pcb_flags; scalar_t__ pcb_initial_npxcw; int pcb_save; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pcb*) ;
 int FUNC_1 (int ,struct thread*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct thread *VAR_7, struct pcb *VAR_8)
{




 FUNC_1(VAR_5, VAR_7);

 FUNC_6();
 if (VAR_3)
  FUNC_4();

 if ((VAR_8->pcb_flags & VAR_0) == 0) {
  FUNC_2(VAR_6, VAR_8->pcb_save, VAR_4);
  FUNC_5(VAR_8->pcb_save);
  if (VAR_8->pcb_initial_npxcw != VAR_2)
   FUNC_3(VAR_8->pcb_initial_npxcw);
  VAR_8->pcb_flags |= VAR_0;
  if (FUNC_0(VAR_8))
   VAR_8->pcb_flags |= VAR_1;
 } else {
  FUNC_5(VAR_8->pcb_save);
 }
}
