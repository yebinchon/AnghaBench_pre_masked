
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_initial_npxcw; scalar_t__ pcb_gs; } ;
struct image_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,struct image_params*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_1, struct image_params *VAR_2, u_long VAR_3)
{
 struct pcb *VAR_4 = VAR_1->td_pcb;

 FUNC_0(VAR_1, VAR_2, VAR_3);


 VAR_4->pcb_gs = 0;
 FUNC_1(0);

 VAR_4->pcb_initial_npxcw = VAR_0;
}
