
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcb {int pcb_regs; } ;
struct TYPE_3__ {int td_kstack; int td_kstack_pages; struct pcb* td_pcb; int * td_frame; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct pcb*) ;
 int VAR_4 ;
 int FUNC_2 (void*,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_7 ;

void
FUNC_7(void)
{




 FUNC_6(&VAR_6, &VAR_7);

 FUNC_0((VAR_5 & VAR_2) == 0,
  ("kstack0 is not aligned on a page boundary: 0x%0lx",
  (long)VAR_5));
 VAR_7 = VAR_5;
 VAR_7 = VAR_1;





 VAR_7 = (struct pcb *)(VAR_7 +
     VAR_7 * VAR_3) - 1;
 VAR_7 = &VAR_7->pcb_regs;


 FUNC_2((void *)FUNC_5(VAR_0), 0);

 FUNC_1(VAR_4, VAR_7);





}
