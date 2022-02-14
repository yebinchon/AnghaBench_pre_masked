
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int tf_spsr; int* tf_x; int tf_elr; } ;
struct thread {struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {int dummy; } ;
struct TYPE_3__ {int* mc_gregset; int mc_spare; scalar_t__ mc_vfp_ptr; scalar_t__ mc_vfp_size; } ;
typedef TYPE_1__ mcontext32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_2, mcontext32_t *VAR_3, int VAR_4)
{
 struct pcb *VAR_5;
 struct trapframe *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2->td_pcb;
 VAR_6 = VAR_2->td_frame;

 if ((VAR_4 & VAR_0) != 0) {
  VAR_3->mc_gregset[0] = 0;
  VAR_3->mc_gregset[16] = VAR_6->tf_spsr & ~VAR_1;
 } else {
  VAR_3->mc_gregset[0] = VAR_6->tf_x[0];
  VAR_3->mc_gregset[16] = VAR_6->tf_spsr;
 }
 for (VAR_7 = 1; VAR_7 < 15; VAR_7++)
  VAR_3->mc_gregset[VAR_7] = VAR_6->tf_x[VAR_7];
 VAR_3->mc_gregset[15] = VAR_6->tf_elr;

 VAR_3->mc_vfp_size = 0;
 VAR_3->mc_vfp_ptr = 0;

 FUNC_0(VAR_3->mc_spare, 0, sizeof(VAR_3->mc_spare));
}
