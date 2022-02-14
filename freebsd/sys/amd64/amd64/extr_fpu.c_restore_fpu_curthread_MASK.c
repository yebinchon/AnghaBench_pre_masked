
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_flags; scalar_t__ pcb_initial_fpucw; int pcb_save; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pcb*) ;
 int FUNC_1 (int ,struct thread*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pcb*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct thread *VAR_6)
{
 struct pcb *VAR_7;




 FUNC_1(VAR_4, VAR_6);

 FUNC_7();
 FUNC_4();
 VAR_7 = VAR_6->td_pcb;

 if ((VAR_7->pcb_flags & VAR_0) == 0) {
  FUNC_2(VAR_5, VAR_7->pcb_save,
      VAR_3);
  FUNC_5(VAR_7->pcb_save);
  if (VAR_7->pcb_initial_fpucw != VAR_2)
   FUNC_3(VAR_7->pcb_initial_fpucw);
  if (FUNC_0(VAR_7))
   FUNC_6(VAR_7, VAR_0 |
       VAR_1);
  else
   FUNC_6(VAR_7, VAR_0);
 } else
  FUNC_5(VAR_7->pcb_save);
}
